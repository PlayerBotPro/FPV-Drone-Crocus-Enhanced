// BOT_fnc_fpv_killedEH = compileScript ["x\BOT_FPV_Enhanced\addons\addon01\functions\fn_fpv_killedEH.sqf"];
params ["_unit", "_killer", "_instigator"];

// _killer actionNow ["BackFromUAV"];

systemChat format ["KILLEH: _unit: %1, _killer: %2, _instigator: %3, player controling: %4", driver _unit, _killer, _instigator, getConnectedUAVUnit player];

// if (driver _unit == _killer) then {
//     [player, [0, 0, 0, 1, 0]] remoteExec ["addPlayerScores", 2];
// };

// doesnt work
// player connectTerminalToUAV objNull;
// player remoteControl objNull;