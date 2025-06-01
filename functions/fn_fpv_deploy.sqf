/*
	Author: 
        PlayerBot

	Description:
		Triggers when throws out a FPV, modified from RF CDLC

	Parameter(s):
		Same as "Init" Projectile Event Handler

	Returns:
		Nothing

	Note:
        Hello World
*/

params ["_projectile"];

// does this works for ACE throw? 
private _unit = getShotParents _projectile #1 ;

sleep 1;

private _pPos = getPosASL _projectile;
private _pDir = vectorDir _projectile;
private _pUp = vectorUp _projectile;
private _pVel = velocity _projectile;

deleteVehicle _projectile;

private _uav = objNull;

private _sidesUAV = getArray (configFile >> "CfgAmmo" >> typeOf _projectile >> "lxrf_droneVehicle");
private _sideUAV = switch (side group _unit) do {
    case WEST:		{ _sideUAV select 0 };
    case EAST:		{ _sideUAV select 1 };
    case independent: { _sideUAV select 2 };
    case civilian:	{ _sideUAV select 3 };
};

_uav = createVehicle [_sideUAV, [0,0,0], [], 0, "FLY"];
createVehicleCrew _uav; // TODO: This line causes an error when remote controling a unit in Zeus

_uav setPosASL _pPos;
_uav setVectorDirAndUp [_pDir, _pUp];
_uav setVelocity _pVel;
_uav flyInHeight (ASLToAGL eyePos driver _uav);

if (has UAV Terminal) then {
    player connectTerminalToUAV _uav;
    driver _uav switchCamera "Internal";
    player remoteControl _uav;
};
