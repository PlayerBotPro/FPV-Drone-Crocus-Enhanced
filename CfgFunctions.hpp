class CfgFunctions {
	// Overwrite function from original mod
	class DB {
		// you can change FPV to any name you want??
		class FPV {
            // need change file path
			// BIKI: The file attribute can override the category's loading path segment - it is required for mods.
			file="\ArmaFPV\functions";
			class fpv_onDestroy {};
		};
	};

	class BOT {
		class aCategoryName {
			// file could under category or function. see BIKI
			// pbo name = BOT_ArmaFPV_Enhanced
			file = "\BOT_ArmaFPV_Enhanced\functions";
			class fpv_deploy {}; //BOT_fnc_fpv_deploy
		};
	};
};