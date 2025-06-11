// in inventory item, after pick up

// throwables
class CfgMagazines {
    class HandGrenade;
    class BOT_magazine_fpv_throwable_base: HandGrenade {
        scope = 1;
		mass = 10;
    };
    class BOT_magazine_fpv_AT_muzzle: BOT_magazine_fpv_throwable_base {
        scope = 2;
		displayName = "FPV AT";
		displayNameShort = "FPV AT";
		descriptionShort = "Throw me out to fly";
		picture = "\ArmaFPV\data\krokus1.jpg";
        model = "\ArmaFPV\drone.p3d";
		ammo = "BOT_ammo_fpv_AT_muzzle";
    };
    class BOT_magazine_fpv_AP_muzzle: BOT_magazine_fpv_AT_muzzle {
        displayName = "FPV AP";
		displayNameShort = "FPV AP";
		descriptionShort = "Throw me out to fly";
        picture = "\ArmaFPV\data\termo.jpg";
		model = "\ArmaFPV\drone2\drone2.p3d";
        ammo = "BOT_ammo_fpv_AP_muzzle";
    };
};
