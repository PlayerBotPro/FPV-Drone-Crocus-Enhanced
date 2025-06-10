class CfgFunctions {
	// Overwrite function from original mod
	class DB {
		// you can change FPV to any name you want??
		class FPV {
			// BIKI: The file attribute can override the category's loading path segment - it is required for mods.
			file="x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions";
			class fpv_onDestroy {};
		};
	};

	class BOT {
		file = "x\ArmaFPVEN\addons\BOT_ArmaFPV_Enhanced\functions";
		class aCategoryName {
			// file could under category or function. see BIKI
			// pbo name = BOT_FPV_Enhanced
			
			// commented for dev, cuz it gonna be final
			// class fpv_deploy {}; //BOT_fnc_fpv_deploy
		};
	};
};

// func path is in $PREFIX$???