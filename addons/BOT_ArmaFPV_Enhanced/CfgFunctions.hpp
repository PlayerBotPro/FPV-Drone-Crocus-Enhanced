class CfgFunctions {
	// Overwrite function from original mod
	class DB {
		// you can change FPV to any name you want??
		class FPV {
			// BIKI: The file attribute can override the category's loading path segment - it is required for mods.
			// But in here we only want to rewrite only one function, so we use file in side function
			class fpv_onDestroy {
				file="x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions\fn_fpv_onDestroy.sqf";
			};
		};
	};

	class BOT {
		file = "x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions";
		class aCategoryName {
			// file could under category or function. see BIKI
			// pbo name = BOT_FPV_Enhanced
			
			// commented for dev, cuz it gonna be final
			// class fpv_deploy {}; //BOT_fnc_fpv_deploy
			// class fpv_killedEH {}; //
			// class fpv_handleDamage {}; //BOT_fnc_fpv_handleDamage
		};
	};
};

// func path is in $PREFIX$???