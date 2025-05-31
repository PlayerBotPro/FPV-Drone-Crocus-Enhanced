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
	class fpv_1_muzzle_ammo: GrenadeHand {
		explosionTime = -1;
		timeToLive = 1e+10;
		// https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Ammo_Config_Events
		class Eventhandlers {
			init = "_this call BOT_fnc_fpv_deploy";
		};
	};
};
