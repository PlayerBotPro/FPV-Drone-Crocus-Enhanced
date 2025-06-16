// BOT_fnc_fpv_handleDamage = compileScript ["x\BOT_FPV_Enhanced\addons\addon01\functions\fn_fpv_handleDamage.sqf"];

params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitPartIndex", "_instigator", "_hitPoint", "_directHit", "_context"];

systemChat str(_this);

if (_damage > 0.1) exitWith {

    // save uav data before delete
    _uavType = toLower (typeOf _unit);
    _missileType = "";
    _vectorDir = vectorDir _unit;
    _vectorUp = vectorUp _unit;
    _impactPos = _unit modelToWorld [0, 0, 0];
    _killer = (UAVControl _unit) # 0;

    deleteVehicle _unit;

    // warhead create
    // maybe we can change warhead type via CBA settings in the future
    if (_uavType find "at" > -1) then {
        _missileType = "FPV_RPG42_AT";
    } else {
        if (_uavType find "ap" > -1) then {
            _missileType = "R_TBG32V_F";
        };
    };
    private _missile = createVehicle [_missileType, [0, 0, 100]];
    _missile setVectorDirAndUp [_vectorDir, _vectorUp];
    [_missile, [_killer, _killer]] remoteExec ["setShotParents", 2];

    // warhead attack
    waitUntil {
        (getShotParents _missile) isEqualTo [_killer, _killer];
    };
    systemChat str(getShotParents _missile);
    _missile setPosATL _impactPos;
    triggerAmmo _missile;
    0
};
