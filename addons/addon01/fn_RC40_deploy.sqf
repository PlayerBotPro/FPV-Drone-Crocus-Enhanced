/*
	Author: 

	Description:
		Controls RC40 deploy mechanics from 40 mm GL

	Parameter(s):
		Same as "Init" Projectile Event Handler

	Returns:
		Nothing

	Note:

*/

#define DLC_RF	   (2647760)
#define OWNED		(1)

params ["_projectile"];

private _unit = getShotParents _projectile #1 ;
private _zeroing = currentZeroing _unit;
private _dir = getDir _unit;

[_projectile, _unit,_zeroing, _dir] spawn {
	params ["_projectile", "_unit", "_zeroing", "_dir"];

	private _pPos = getPosASL _projectile;

	// Wait until grenade is moving
	waitUntil { (speed _projectile != 0) };
	// Deploy UAV distance based on UGL zeroing
	waitUntil {
		uiSleep 0.05;
		private _moving = (speed _projectile == 0);
		(_moving || {((_pPos distance getPosASL _projectile) >= _zeroing)})
	};

	if (alive _projectile) then {
		//if (_moving == 0) exitWith{};

		private _pPos = getPosASL _projectile;
		private _pDir = vectorDir _projectile;
		private _pUp = vectorUp _projectile;
		private _pVel = velocity _projectile;

		deleteVehicle _projectile;

		//[[_pPos,_pDir,_pUp,_pVel,_unit,_ammo],{
		//  params ["_pPos","_pDir","_pUp","_pVel","_unit","_ammo"];
		// If the player is Zeus, the script will throw an error. Workaround for now: Disable UAV for Zeus.
		//if ((isNull (getAssignedCuratorLogic _unit)) && (rating _unit > -2000)) then {
			#define CREATE_UAV(a) _uav = createVehicle [a, [0,0,0], [], 0, "FLY"];
			private _sideUAV = getArray (configFile >> "CfgAmmo" >> typeOf _projectile >> "lxrf_droneVehicle");

			private _uav = objNull;

			switch (side group _unit) do {
				case WEST:		{ CREATE_UAV(_sideUAV select 0) };
				case EAST:		{ CREATE_UAV(_sideUAV select 1) };
				case independent: { CREATE_UAV(_sideUAV select 2) };
				case civilian:	{ CREATE_UAV(_sideUAV select 3) };
			};
			createVehicleCrew _uav; // TODO: This line causes an error when remote controling a unit in Zeus

		 //_uav setDir _dir;
			_uav setPosASL _pPos;
			_uav setVectorDirAndUp [_pDir, _pUp];
			_uav setVelocity _pVel;

		 if (DLC_RF in (getDLCs OWNED)) then {
			//if (alive (getConnectedUAV player) == false) then {
			   _unit connectTerminalToUAV _uav;
			//};
		 };

		// call a scripted EH for ease of modding/mission editing
		 [_unit,"lxRF_RC40_deploy_fired",[_uav,_unit]] call BIS_fnc_callScriptedEventHandler;
		 [missionNamespace,"lxRF_RC40_deploy_fired",[_uav,_unit]] call BIS_fnc_callScriptedEventHandler;
		//};
	};
};
