class CfgAmmo {
	// ******
	// I forget whats this, so i leave it commented:
	// ******
	// class M_Vorona_HEAT;
	// class FPV_RPG42_AT: M_Vorona_HEAT {
	// 	explosive=0.80000001;
	// 	hit=150;
	// 	htMax=1800;
	// 	htMin=60;
	// 	indirectHit=25;
	// 	indirectHitRange=3.5;
	// 	submunitionInitSpeed=1000;
	// 	warheadName="TandemHEAT";
	// 	submunitionAmmo="FPV_RPG42_AT_Penetrator";
	// 	submunitionDirectionType="SubmunitionModelDirection";
	// 	submunitionParentSpeedCoef=0;
	// 	submunitionInitialOffset[]={0,0,-0.1};
	// 	triggerOnImpact=1;
	// 	deleteParentWhenTriggered=0;
	// };
	// class ammo_Penetrator_Vorona;
	// class FPV_RPG42_AT_Penetrator: ammo_Penetrator_Vorona {
	// 	hit=480;
	// 	indirectHit=0;
	// 	indirectHitRange=0;
	// 	warheadName="TandemHEAT";
	// };

	// FPV throwable ammo
	// The Real job: how to convert to a actual vehicle FPV from ammo? RF CDLC! 
	class GrenadeHand;

	// Base class for model
	class BOT_ammo_FPV_AT_fake_base: GrenadeHand {
		// https://community.bistudio.com/wiki/Arma_3:_Weapon_Config_Guidelines#Ammo_changes_on_fly_and_on_hit
		simulation = "shotSubmunitions";
		triggerTime = 1;
		deleteParentWhenTriggered = true;
		triggerSpeedCoef = 0;
		submunitionParentSpeedCoef = 1;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionConeAngle = 0;
		submunitionConeAngleHorizontal = 0;
		submunitionConeType[] = { "custom", { { 0, 0 } } };
		//

		model = "\ArmaFPV\drone.p3d";
	};
	class BOT_ammo_FPV_AP_fake_base: BOT_ammo_FPV_AT_fake_base {
		model = "\ArmaFPV\drone2\drone2.p3d";
	};
	// another base class for Eventhandlers
	class BOT_ammo_FPV_base: GrenadeHand {
		class Eventhandlers {
			init = "_this call BOT_fnc_fpv_deploy";
		};
	};

	// low definition FPVs, from original ArmaFPV mod
	// Fake ammo for ACE throw
	class BOT_ammo_FPV_AT_LD_fake: BOT_ammo_FPV_AT_fake_base {
		submunitionAmmo = "BOT_ammo_FPV_AT_LD";
	};
	class BOT_ammo_FPV_AP_LD_fake: BOT_ammo_FPV_AP_fake_base {
		submunitionAmmo = "BOT_ammo_FPV_AP_LD";
	};
	// real ammo class. If everything is proper, when this class shows up, the vehicle should be spawned
	class BOT_ammo_FPV_AT_LD: BOT_ammo_FPV_base {
		BOT_vehicleSide[] = {
			"B_Crocus_AT",
			"O_Crocus_AT",
			"I_Crocus_AT",
			// origin mod didnt have C_Crocus_AT
			"B_Crocus_AT"
		};
	};
	class BOT_ammo_FPV_AP_LD: BOT_ammo_FPV_base {
		BOT_vehicleSide[] = {
			"B_Crocus_AP",
			"O_Crocus_AP",
			"I_Crocus_AP",
			"B_Crocus_AP"
		};
	};

	// high definition FPVs, new added
	class BOT_ammo_FPV_AT_HD_fake: BOT_ammo_FPV_AT_fake_base {
		submunitionAmmo = "BOT_ammo_FPV_AT_HD";
	};
	class BOT_ammo_FPV_AP_HD_fake: BOT_ammo_FPV_AP_fake_base {
		submunitionAmmo = "BOT_ammo_FPV_AP_HD";
	};
	class BOT_ammo_FPV_AT_HD: BOT_ammo_FPV_base {
		BOT_vehicleSide[] = {
			"BOT_vehicle_B_FPV_AT_HD",
			"BOT_vehicle_O_FPV_AT_HD",
			"BOT_vehicle_I_FPV_AT_HD",
			"BOT_vehicle_C_FPV_AT_HD"
		};
	};
	class BOT_ammo_FPV_AP_HD: BOT_ammo_FPV_base {
		BOT_vehicleSide[] = {
			"BOT_vehicle_B_FPV_AP_HD",
			"BOT_vehicle_O_FPV_AP_HD",
			"BOT_vehicle_I_FPV_AP_HD",
			"BOT_vehicle_C_FPV_AP_HD"
		};
	};

	// thermal imagery FPVs, new added
	class BOT_ammo_FPV_AT_TI_fake: BOT_ammo_FPV_AT_fake_base {
		submunitionAmmo = "BOT_ammo_FPV_AT_TI";
	};
	class BOT_ammo_FPV_AP_TI_fake: BOT_ammo_FPV_AP_fake_base {
		submunitionAmmo = "BOT_ammo_FPV_AP_TI";
	};
	class BOT_ammo_FPV_AT_TI: BOT_ammo_FPV_base {
		BOT_vehicleSide[] = {
			"BOT_vehicle_B_FPV_AT_TI",
			"BOT_vehicle_O_FPV_AT_TI",
			"BOT_vehicle_I_FPV_AT_TI",
			"BOT_vehicle_C_FPV_AT_TI"
		};
	};
	class BOT_ammo_FPV_AP_TI: BOT_ammo_FPV_base {
		BOT_vehicleSide[] = {
			"BOT_vehicle_B_FPV_AP_TI",
			"BOT_vehicle_O_FPV_AP_TI",
			"BOT_vehicle_I_FPV_AP_TI",
			"BOT_vehicle_C_FPV_AP_TI"
		};
	};
};
