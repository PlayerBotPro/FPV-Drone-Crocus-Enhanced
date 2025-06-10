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
		displayName = "BOT FPV AT test";
		displayNameShort = "BOT FPV AT test short";
		descriptionShort = "BOT FPV AT test descriptionShort";
		picture = "\ArmaFPV\data\krokus1.jpg";
        model = "\ArmaFPV\drone.p3d";
		ammo = "BOT_ammo_fpv_AT_muzzle";
    };
    class BOT_magazine_fpv_AP_muzzle: BOT_magazine_fpv_AT_muzzle {
        displayName = "BOT FPV AP test";
        ammo = "BOT_ammo_fpv_AP_muzzle";
        picture = "\ArmaFPV\data\termo.jpg";
		model = "\ArmaFPV\drone2\drone2.p3d";
    };
};
