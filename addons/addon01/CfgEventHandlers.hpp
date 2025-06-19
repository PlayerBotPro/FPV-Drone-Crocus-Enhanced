class Extended_PreInit_EventHandlers
{
	// CfgPatches class name
	class BOT_FPV_Enhanced
	{
        // #include "\x\cba\addons\main\script_macros_common.hpp"
		// init= QUOTE(call COMPILE_FILE(XEH_postInit));
		init="call compileScript ['x\BOT_FPV_Enhanced\addons\addon01\XEH_preInit.sqf']";
	};
};
