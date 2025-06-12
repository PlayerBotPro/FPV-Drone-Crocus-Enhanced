class CfgWeapons {
    // ******
    // its currently not useful if fpv is a throwable
/*     class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    // in inventory item
	class BOT_weapon_ItemFPV_base: CBA_MiscItem {
		scope = 1;
		displayName = "FPV";
		picture = "\mavik\interface\game\Mavick_map.paa";
		model = "\mavik\mavik3.p3d";
		descriptionShort = "";
		ACE_asItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 20;
		};
    };

    class BOT_weapon_ItemFPV_1: BOT_weapon_ItemFPV_base {
        scope = 2;
    };
    class BOT_weapon_ItemFPV_2: BOT_weapon_ItemFPV_base {
        scope = 2;
    };
 */
 
    //throwables to fly a UAV
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        // add new muzzle
        Muzzles[] += {
            "BOT_weapon_FPV_AT_LD",
            "BOT_weapon_FPV_AP_LD",
            "BOT_weapon_FPV_AT_HD",
            "BOT_weapon_FPV_AP_HD",
            "BOT_weapon_FPV_AT_TI",
            "BOT_weapon_FPV_AP_TI",
            "BOT_weapon_fpv_AT_muzzle",
            "BOT_weapon_fpv_AP_muzzle"
        };
        class ThrowMuzzle: GrenadeLauncher {};

        // I dont know why but other mods do this
		class BOT_weapon_FPV_AT_LD: ThrowMuzzle {
            magazines[] = {"BOT_magazine_FPV_AT_LD"};
        };
		class BOT_weapon_FPV_AP_LD: ThrowMuzzle {
            magazines[] = {"BOT_magazine_FPV_AP_LD"};
        };
		class BOT_weapon_FPV_AT_HD: ThrowMuzzle {
            magazines[] = {"BOT_magazine_FPV_AT_HD"};
        };
		class BOT_weapon_FPV_AP_HD: ThrowMuzzle {
            magazines[] = {"BOT_magazine_FPV_AP_HD"};
        };
		class BOT_weapon_FPV_AT_TI: ThrowMuzzle {
            magazines[] = {"BOT_magazine_FPV_AT_TI"};
        };
		class BOT_weapon_FPV_AP_TI: ThrowMuzzle {
            magazines[] = {"BOT_magazine_FPV_AP_TI"};
        };

		class BOT_weapon_fpv_AT_muzzle: ThrowMuzzle {
            // CfgMagazines class name
            magazines[] = {"BOT_magazine_fpv_AT_muzzle"};
        };
		class BOT_weapon_fpv_AP_muzzle: ThrowMuzzle {
            magazines[] = {"BOT_magazine_fpv_AP_muzzle"};
        };
    };
};