class CfgPatches {
	class BOT_FPV_Enhanced {
		units[]= {
			"FPV_Retranslator",

			"BOT_vehicle_B_FPV_AT_HD","BOT_vehicle_B_FPV_AP_HD",
			"BOT_vehicle_O_FPV_AT_HD","BOT_vehicle_O_FPV_AP_HD",
			"BOT_vehicle_I_FPV_AT_HD","BOT_vehicle_I_FPV_AP_HD",
			"BOT_vehicle_C_FPV_AT_HD","BOT_vehicle_C_FPV_AP_HD",

			"BOT_vehicle_B_FPV_AT_TI","BOT_vehicle_B_FPV_AP_TI",
			"BOT_vehicle_O_FPV_AT_TI","BOT_vehicle_O_FPV_AP_TI",
			"BOT_vehicle_I_FPV_AT_TI","BOT_vehicle_I_FPV_AP_TI",
			"BOT_vehicle_C_FPV_AT_TI","BOT_vehicle_C_FPV_AP_TI"
		};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[]= {"ArmaFPV_Data"};
	};
};

#include "CfgAmmo.hpp"
#include "CfgFunctions.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"