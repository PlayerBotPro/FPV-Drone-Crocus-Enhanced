class CfgPatches {
	class BOT_ArmaFPV_Enhanced {
		author="PlayerBot";
		name="ArmaFPV Enhanced";
		url="";
		requiredAddons[]= {"ArmaFPV_Data"};
		requiredVersion=0.1;
		// add CfgVehicles to units[]
		units[]= {"FPV_Retranslator"};
		weapons[]={};
	};
};

#include "CfgAmmo.hpp"
#include "CfgFunctions.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"