class CfgVehicles {
	class Land_SatelliteAntenna_01_F;
	class FPV_Retranslator: Land_SatelliteAntenna_01_F {
		scope=2;
		scopeCurator=2;
		displayName="FPV Signal Booster";
	};

	// The real flying FPV
class drone_base_F;
	class B_Crocus_AT: drone_base_F {
		class ViewOptics;
	};
	class B_Crocus_AP: B_Crocus_AT {
		class ViewOptics;
	};
	class O_Crocus_AT;

	// in this CfgVehicles I need to create seperate class for seperate sides??? what a pain
	// High Definition
	class BOT_vehicle_FPV_AT_HD_base: B_Crocus_AT {
		displayName = "FPV AT HD";
		scope = 1;
		scopeCurator = 1;
	};
	class BOT_vehicle_FPV_AP_HD_base: B_Crocus_AP {
		displayName = "FPV AP HD";
	};
	
	class BOT_vehicle_B_FPV_AT_HD: BOT_vehicle_FPV_AT_HD_base {
		scope = 2;
		scopeCurator = 2;
	};
	class BOT_vehicle_B_FPV_AP_HD: BOT_vehicle_FPV_AP_HD_base {
		scope = 2;
		scopeCurator = 2;
	};
	class BOT_vehicle_O_FPV_AT_HD: BOT_vehicle_B_FPV_AT_HD {
		side = 0;
		faction="OPF_F";
		crew="O_UAV_AI_F";
	};
	class BOT_vehicle_O_FPV_AP_HD: BOT_vehicle_B_FPV_AP_HD {
		side = 0;
		faction="OPF_F";
		crew="O_UAV_AI_F";
	};
	class BOT_vehicle_I_FPV_AT_HD: BOT_vehicle_B_FPV_AT_HD {
		side = 2;
		faction="IND_F";
		crew="I_UAV_AI_F";
	};
	class BOT_vehicle_I_FPV_AP_HD: BOT_vehicle_B_FPV_AP_HD {
		side = 2;
		faction="IND_F";
		crew="I_UAV_AI_F";
	};
	class BOT_vehicle_C_FPV_AT_HD: BOT_vehicle_B_FPV_AT_HD {
		side = 3;
		faction = "CIV_F";
		crew = "C_UAV_AI_F";
	};
	class BOT_vehicle_C_FPV_AP_HD: BOT_vehicle_B_FPV_AP_HD {
		side = 3;
		faction = "CIV_F";
		crew = "C_UAV_AI_F";
	};

	class BOT_vehicle_B_FPV_AT: B_Crocus_AT {
		displayName = "FPV AT";
	};
	class BOT_vehicle_B_FPV_AP: B_Crocus_AP {
		displayName = "FPV AP";
	};
	class BOT_vehicle_FPV_Fiber: O_Crocus_AT {
		//inherent from O_Crocus_AT?
	};
	class BOT_vehicle_FPV_TI: O_Crocus_AT {
		//inherent from O_Crocus_AT?
	};
	class BOT_vehicle_B_FPV_xx: O_Crocus_AT {
		//inherent from O_Crocus_AT?
	};

	// currently not needed for throwable FPVs
	// Item (Ground weapon holder)
	// class Item_Base_F;
	// // maybe add a base class
	// class Bot_Item_FPV_xx: Item_Base_F {
	// 	scope = 2;
	// 	scopeCurator = 2;
	// 	displayName = "$STR_Mavic_Item_Mavic3_displayName";
	// 	author = "$STR_Mavic_Author";
	// 	vehicleClass = "Items";
	// 	class TransportItems {
	// 		// make sure its CfgWeapons class?
	// 		class _xx_BOT_weapon_ItemFPV_1 {
	// 			name = "BOT_weapon_ItemFPV_1";
	// 			count = 1;
	// 		};
	// 	};
	// };
};
