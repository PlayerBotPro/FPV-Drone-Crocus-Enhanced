// BOT_fnc_fpv_handleDamage = compileScript ["x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions\fn_fpv_handleDamage.sqf"];

params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitPartIndex", "_instigator", "_hitPoint", "_directHit", "_context"];

systemChat str(_this);

_uavType = toLower (typeOf _unit);
_missileType = "";
_vectorDir = vectorDir _unit;
_vectorUp = vectorUp _unit;
_impactPos = _unit modelToWorld [0, 0, 0];

if (_damage > 0.1) then {
    // _unit call DB_fnc_fpv_onDestroy;
    deleteVehicle _unit;

    if (_uavType find "at" > -1) then {
        _missileType = "R_PG7_F";
    } else {
        if (_uavType find "ap" > -1) then {
            _missileType = "DemoCharge_Remote_Ammo";
        };
    };

    private _missile = createVehicle [_missileType, [0, 0, 100]];

    _missile setVectorDirAndUp [_vectorDir, _vectorUp];
    _missile setPosATL _impactPos;
};

0
