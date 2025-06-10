class CfgVehicles {
	class Land_SatelliteAntenna_01_F;
	class FPV_Retranslator: Land_SatelliteAntenna_01_F {
		scope=2;
		scopeCurator=2;
		displayName="FPV Signal Booster";
	};

	// The real flying FPV
	class BOT_vehicle_B_FPV_AT: B_Crocus_AT {
	};
	class BOT_vehicle_B_FPV_AP: B_Crocus_AP {
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

	// Item (Ground weapon holder)
	class Item_Base_F;
	// maybe add a base class
	class Bot_Item_FPV_xx: Item_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_Mavic_Item_Mavic3_displayName";
		author = "$STR_Mavic_Author";
		vehicleClass = "Items";
		class TransportItems {
			// make sure its CfgWeapons class?
			class _xx_BOT_weapon_ItemFPV_1 {
				name = "BOT_weapon_ItemFPV_1";
				count = 1;
			};
		};
	};
};
