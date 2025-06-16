class CfgFunctions {
	// Overwrite function from original mod
	class DB {
		// category name: FPV
		class FPV {
			// BIKI: The file attribute can override the category's loading path segment - it is required for mods.
			// But in here we only want to rewrite only one function, so we use file inside function
			class fpv_onDestroy {
				file="x\BOT_FPV_Enhanced\addons\addon01\functions\fn_fpv_onDestroy.sqf";
			};
		};
	};

	class BOT {
		class aCategoryName {
			// file could under category or function. see BIKI
			// file = should use path in $PREFIX$
			file = "x\BOT_FPV_Enhanced\addons\addon01\functions";
			
			// these two not used
			// class fpv_deploy {}; //BOT_fnc_fpv_deploy
			// class fpv_killedEH {}; //
			class fpv_handleDamage {}; //BOT_fnc_fpv_handleDamage
		};
	};
};
