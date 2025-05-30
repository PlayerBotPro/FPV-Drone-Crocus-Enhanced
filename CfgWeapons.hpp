class CfgWeapons {
    class CBA_MiscItem;
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
};