// in inventory item, after pick up

// throwables
class CfgMagazines {
    class HandGrenade;
    // base class, same as CfgAmmo
    class BOT_magazine_FPV_AT_base: HandGrenade {
        scope = 1;
		mass = 33;
		descriptionShort = "Throw me out to fly";
		picture = "\ArmaFPV\data\krokus1.jpg";
        model = "\ArmaFPV\drone.p3d";
    };
    class BOT_magazine_FPV_AP_base: BOT_magazine_FPV_AT_base {
        picture = "\ArmaFPV\data\termo.jpg";
		model = "\ArmaFPV\drone2\drone2.p3d";
    };

    // magazine class, shows to player.
    // Low Definition
    class BOT_magazine_FPV_AT_LD: BOT_magazine_FPV_AT_base {
        scope = 2;
        displayName = "FPV AT Low Definition";
		displayNameShort = "FPV AT LD";
        ammo = "BOT_ammo_FPV_AT_LD_fake";
    };
    class BOT_magazine_FPV_AP_LD: BOT_magazine_FPV_AP_base {
        scope = 2;
        displayName = "FPV AP Low Definition";
		displayNameShort = "FPV AP LD";
        ammo = "BOT_ammo_FPV_AP_LD_fake";
    };

    // High Definition
    class BOT_magazine_FPV_AT_HD: BOT_magazine_FPV_AT_base {
        scope = 2;
        displayName = "FPV AT High Definition";
		displayNameShort = "FPV AT HD";
        ammo = "BOT_ammo_FPV_AT_HD_fake";
    };
    class BOT_magazine_FPV_AP_HD: BOT_magazine_FPV_AP_base {
        scope = 2;
        displayName = "FPV AP High Definition";
		displayNameShort = "FPV AP HD";
        ammo = "BOT_ammo_FPV_AP_HD_fake";
    };

    // Thermal Imagery 
    class BOT_magazine_FPV_AT_TI: BOT_magazine_FPV_AT_base {
        scope = 2;
        displayName = "FPV AT Thermal Imagery";
		displayNameShort = "FPV AT TI";
        ammo = "BOT_ammo_FPV_AT_TI_fake";
    };
    class BOT_magazine_FPV_AP_TI: BOT_magazine_FPV_AP_base {
        scope = 2;
        displayName = "FPV AP Thermal Imagery";
		displayNameShort = "FPV AP TI";
        ammo = "BOT_ammo_FPV_AP_TI_fake";
    };
};
