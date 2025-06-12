// BOT_fnc_fpv_killedEH = compileScript ["x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions\fn_fpv_killedEH.sqf"];
params ["_unit", "_killer", "_instigator"];

systemChat format ["KILEH: _unit: %1, _killer: %2, _instigator: %3", driver _unit, _killer, _instigator];

if (driver _unit == _killer) then {
    [player, [0, 0, 0, 1, 0]] remoteExec ["addPlayerScores", 2];
};

// doesnt work
// player connectTerminalToUAV objNull;
// player remoteControl objNull;