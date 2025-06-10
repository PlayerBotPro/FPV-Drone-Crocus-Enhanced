class CfgPatches {
	class BOT_ArmaFPV_Enhanced {
		author="PlayerBot";
		name="ArmaFPV Enhanced";
		url="";
		requiredAddons[]= {"ArmaFPV_Data"};
		requiredVersion=0.1;
		// add CfgVehicles to units[]
		units[]= {"FPV_Retranslator","BOT_vehicle_B_FPV_AT","BOT_vehicle_B_FPV_AP","BOT_vehicle_FPV_Fiber","BOT_vehicle_FPV_TI","BOT_vehicle_B_FPV_xx"};
		weapons[]={};
	};
};

#include "CfgAmmo.hpp"
#include "CfgFunctions.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"