class rebels {
    class AllUnits {
        uniform[] = {
            "U_I_C_Soldier_Para_4_F",
            "U_I_C_Soldier_Bandit_5_F",
            "U_I_C_Soldier_Bandit_1_F",
            "U_BG_Guerrilla_6_1",
            "U_BG_Guerilla2_3",
            "U_B_CTRG_Soldier_2_F",
            "U_I_C_Soldier_Para_5_F"
        };
        backpack[] = {
            "rhs_sidor",
            "rhs_assault_umbts"
        };
        headgear[] = {
            "H_Bandanna_khk",
            "H_Bandanna_sgg",
            "H_Bandanna_khk_hs",
            "H_Bandanna_cbr",
            "H_Bandanna_gry",
            "H_Bandanna_camo",
            "H_HeadBandage_bloody_F",
            "H_HeadBandage_stained_F"
        };
        goggles[] = {
            "",
            "",
            "",
            "",
            "",
            "rhs_scarf",
            "G_Balaclava_blk",
            "G_Balaclava_oli",
            "rhs_balaclava1_olive"
        };
        primaryWeapon[] = {
            "rhs_weap_m70b1",
            "rhs_weap_m70ab2"
        };
        primaryWeaponMagazine = "rhs_30Rnd_762x39mm";
        binoculars = "Binocular";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ItemWatch";
        gps = "ItemGPS";
        radio = "tf_anprc148jem";
        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
            LIST_4("ACE_morphine"),
            "ACE_epinephrine",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools",
            "ACE_key_lockpick",
            "ACE_key_indp",
            LIST_4("ACE_splint")
        };
    };
    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToBackpack[] = {
                LIST_7("rhs_30Rnd_762x39mm"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_mag_f1"),
                LIST_4("ACE_splint")
            };
        };

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
            addVest = "V_Chestrig_rgr";
            addItemsToVest[] = {
                LIST_2("rhs_100Rnd_762x54mmR"),
                LIST_1("ACE_EntrenchingTool")
            };
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
            headgear = "";
            primaryWeapon = "rhs_weap_pkm";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR";
            addItemsToBackpack[] = {
                LIST_2("rhs_100Rnd_762x54mmR")
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            vest = "V_BandollierB_rgr";
            backpack = "rhs_medic_bag";
            addItemsToVest[] = {
                LIST_5("rhs_30Rnd_762x39mm")
            };
            addItemsToBackpack[] = {
                LIST_15("ACE_fieldDressing"),
                LIST_8("ACE_epinephrine"),
                LIST_8("ACE_morphine"),
                LIST_2("ACE_salineIV"),
                LIST_15("ACE_splint")
            };
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
            headgear = "grad_beret_black";
            primaryWeapon = "rhs_weap_ak103_gp25";
            primaryWeaponUnderbarrelMagazine = "rhs_GRD40_White";
            vest = "V_BandollierB_rgr";
            addItemsToVest[] = {
                LIST_2("rhs_GRD40_White"),
                LIST_2("rhs_GRD40_Red")
            };
        };

        //Team Leader
        class Soldier_TL_F: Soldier_SL_F {
            headgear = "grad_beret_green";
        };
    };
};
