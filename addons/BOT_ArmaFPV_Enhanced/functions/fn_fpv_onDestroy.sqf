// DB_fnc_fpv_onDestroy = compileScript ["x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions\fn_fpv_onDestroy.sqf"]

params ["_uav"];

if (isNull _uav) exitWith {};

// comment type check for fpv enhanced
// if !(typeOf _uav in ["O_Crocus_AT", "O_Crocus_AP", "B_Crocus_AT", "B_Crocus_AP", "I_Crocus_AT", "I_Crocus_AP"]) exitWIth {};

cutText ["", "PLAIN"];

private _killer = driver _uav;
private _instigator = (UAVControl _uav) # 0;
private _missileType = "";
private _uavType = toLower (typeOf _uav);

// _killer actionNow ["BackFromUAV"];

if (_uavType find "at" > -1) then {
	_missileType = "R_PG7_F";
} else {
	if (_uavType find "ap" > -1) then {
		_missileType = "DemoCharge_Remote_Ammo";
	};
};

if (local _killer) then {
	_killer setCaptive false;
} else {
	[_killer, false] remoteExec ["setCaptive", 2];
};

_impactPos = _uav modelToWorld [0, 0, 0];
private _missile = createVehicle [_missileType, [0, 0, 100]];
_uav setPosASL [0,0,200];

_missile setVectorDirAndUp [vectorDir _uav, vectorUp _uav];
_missile setPosATL _impactPos;

[_missile, [_killer, _instigator]] remoteExec ["setShotParents", 2];
[_missile, true] remoteExec ["hideObjectGlobal", 2];

// score board
// when _damage > 1, kill will count into statistics, <1 will not
systemChat format ["HITEH: _unit: %1, _source: %2, _damage: %3", _uav, _this#1, _this#2];
// if (_this#2 < 1) then {
// 	// maybe this will work
// 	[_uav, [1, true, _killer, _instigator]] remoteExec ["setDamage", 2];
// };
// call BOT_fnc_fpv_killedEH;

// delete will bug with setDamage
deleteVehicle _uav;
// _uav hideObjectGlobal true;

[
	{
		_this params ["_missile", "_shotParents"];

		(getShotParents _missile) isEqualTo _shotParents;
	}, 
	{
		_this params ["_missile"];

		triggerAmmo _missile;
	}, 
	[_missile, [_killer, _instigator]]
] call CBA_fnc_waitUntilAndExecute;

// remove wreck after interval
// [_uav] spawn {
// 	params ["_uav"];

// 	sleep 1;
// 	deleteVehicle _uav;
// };
