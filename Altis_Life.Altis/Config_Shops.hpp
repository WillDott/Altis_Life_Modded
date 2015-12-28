class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_TRG20_F", "", 25000 },
			{ "30Rnd_556x45_Stanag", "", 300 },
            { "arifle_Katiba_F", "", 30000 },
			{ "30Rnd_65x39_caseless_green", "", 275 },
            { "srifle_DMR_01_F", "", 50000 },
			{ "10Rnd_762x51_Mag", "", 500 },
			{ "hlc_rifle_ak12", "AK12", 50000 },
			{ "hlc_30Rnd_545x39_B_AK", "", 500 },
			{ "hlc_rifle_ak47", "Ak47", 50000 },
			{ "hlc_30Rnd_762x39_b_ak", "", 500 },
			{ "hlc_rifle_ak74", "Ak74", 50000 },
			{ "hlc_30Rnd_545x39_B_AK", "", 500 },
			{ "hlc_rifle_akm", "AKM", 50000 },
			{ "hlc_30Rnd_762x39_b_ak", "", 500 },
			{ "hlc_rifle_aks74", "AKS74", 50000 },
			{ "hlc_30Rnd_545x39_B_AK", "", 500 },
			{ "hlc_rifle_aks74u", "AKS74U", 50000 },
			{ "hlc_30Rnd_545x39_B_AK", "", 500 },
			{ "hlc_rifle_rpk", "RPK", 50000 },
			{ "hlc_75Rnd_762x39_m_rpk", "", 500 },
			{ "hlc_optic_kobra", "", 3500 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 }
                       
            
            
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "hlc_rifle_hk53", "Rubber Bullet Rifle - HK53", 20000 },
			{ "hgun_P07_snds_F", "Stun Pistol", 2000 },
			{ "hgun_P07_F", "", 7500 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "muzzle_snds_L", "", 650 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 1000 },
			{ "NVGoggles", "", 2000 },
			{ "16Rnd_9x21_Mag", "", 50 },
			{ "hlc_30rnd_556x45_b_hk33", "Rubber Bullet Ammo - HK53", 125 }
        };
    };
    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Patrol Officer Rank!";
        items[] = {
        	{ "arifle_MX_F", "", 35000 },
			{ "SMG_02_ACO_F", "", 30000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "MineDetector", "", 1000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "30Rnd_9x21_Mag", "", 250 }
        };
    };
    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a Sergeant Rank!";
        items[] = {
            { "hlc_rifle_g3sg1", "", 15000 },
			{ "hlc_20rnd_762x51_b_G3", "", 15000 },
			{ "hlc_rifle_psg1", "", 15000 },
			{ "hlc_20rnd_762x51_b_G3", "", 15000 },
			{ "hlc_rifle_c1A1", "", 15000 },
			{ "hlc_20Rnd_762x51_B_fal", "", 15000 },
			{ "hlc_rifle_Bushmaster300", "", 15000 },
			{ "29rnd_300BLK_STANAG", "", 15000 },
			{ "hlc_rifle_bcmjack", "", 15000 },
			{ "hlc_30rnd_556x45_EPR", "", 15000 },
			{ "hlc_rifle_vendimus", "", 15000 },
			{ "29rnd_300BLK_STANAG", "", 15000 },
			{ "hlc_rifle_samr2", "", 15000 },
			{ "hlc_30rnd_556x45_EPR", "", 15000 },
			{ "hlc_rifle_M21", "", 15000 },
			{ "hlc_20Rnd_762x51_B_M14", "", 15000 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "SMG_02_ACO_F", "", 15000 },
			{ "hgun_ACPC2_F", "", 17500 },
			{ "arifle_MXC_F", "", 30000 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_9x21_Mag", "", 60 },
			{ "9Rnd_45ACP_Mag", "", 200 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };
};
