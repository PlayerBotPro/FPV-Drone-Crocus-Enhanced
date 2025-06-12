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

    Hello: 
        BOT_fnc_fpv_deploy = compileScript ["x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions\fn_fpv_deploy.sqf"]
*/

params ["_projectile"];
[_projectile] spawn {
    params ["_projectile"];
    // does this works for ACE throw? 
    private _unit = getShotParents _projectile #1 ;

    sleep 1;

    private _pPos = getPosASL _projectile;
    // private _pDir = vectorDir _projectile;
    // private _pUp = vectorUp _projectile;
    private _pVel = velocity _projectile;

    // IDK why but if you setPosASL before delete, the FPV wont explode mid air anymore. Thanks to rhs_rgno_impact.sqf
    _projectile setPosASL [0,0,0];
    // maybe because deleteVehicle do it in next frame(source: rhs_rgno_impact.sqf)
    deleteVehicle _projectile;

    private _uav = objNull;

    private _sidesUAV = getArray (configFile >> "CfgAmmo" >> typeOf _projectile >> "BOT_vehicleSide");
    private _sideUAV = switch (side group _unit) do {
        case WEST:		{ _sidesUAV select 0 };
        case EAST:		{ _sidesUAV select 1 };
        case independent: { _sidesUAV select 2 };
        case civilian:	{ _sidesUAV select 3 };
    };

    _uav = createVehicle [_sideUAV, [0,0,0], [], 0, "FLY"];
    createVehicleCrew _uav; // TODO: This line causes an error when remote controling a unit in Zeus

    _uav setPosASL _pPos;
    // _uav setVectorDirAndUp [_pDir, _pUp];
    _uav setDir getDir _unit;
    _uav setVelocity _pVel;
    _uav flyInHeight (ASLToAGL eyePos driver _uav)#2;

    // auto connect to UAV if possible
    private _uavTerminalClass = ["B_UavTerminal","O_UavTerminal","I_UavTerminal","C_UavTerminal","I_E_UavTerminal"];
    private _hasUAVTerminal = {
        if (_x in assignedItems player) exitWith { true };
        false;
    } forEach _uavTerminalClass;

    if (_hasUAVTerminal) then {
        player connectTerminalToUAV _uav;
        driver _uav switchCamera "Internal";
        player remoteControl _uav;
    };
};
