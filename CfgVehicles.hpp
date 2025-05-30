class CfgVehicles {
	class Land_SatelliteAntenna_01_F;
	class FPV_Retranslator: Land_SatelliteAntenna_01_F {
		scope=2;
		scopeCurator=2;
		displayName="FPV Signal Booster";
	};

	// The real flying FPV
	class BOT_vehicle_FPV_xx: O_Crocus_AT {
		//inherent from O_Crocus_AT?
	};
};
