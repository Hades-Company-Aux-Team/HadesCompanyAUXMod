class CfgPatches
{
    class Hades_Spartan_Project
    {
        author="Hawkins";
        requiredAddons[]=
        {
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"OPTRE_Core"            
        };
        requiredVersion=1;
        units[]={};
        weapons[]={};
    };
};
class CfgWeapons
{
    class MAPO_MKIV_Helmet;
    class MAPO_MKIV_Armor;
    class Uniform_Base;
    class UniformItem;
    class ItemInfo;
    //Base
    class Hades_Spartan_Helmet: MAPO_MKIV_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[Hades Company] Spartan Project Helmet";
        model="MA_Armor_ORION\data\Helmets\MKIV\MKIV_Helmet_Spartan.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Spartans\Data\Spartan_Helmet_co.paa",
            "HCO_Aux\Hades_Armory\Spartans\Data\Erebus_Visor_co.paa"
        };
    };
    //Customs
    class Festive_Helmet: Hades_Spartan_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[Hades Company] Spartan Project Helmet";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Spartans\Data\Festive_Helmet_co.paa",
            "HCO_Aux\Hades_Armory\Spartans\Data\Erebus_Visor_co.paa"
        };     
    };
    //Base
    class Hades_Spartan_Armor: MAPO_MKIV_Armor
    {
        scope=2;
        scopeArsenal=2;
        author="Hawkins";
        displayName="[Hades Company] Spartan Project Armor";
        model="MA_Armor_ORION\data\Vests\MKIV\MKIV_Spartan.p3d";
        picture="";
        maximumLoad=500;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Spartans\Data\Spartan_Upper_co.paa",
            "HCO_Aux\Hades_Armory\Spartans\Data\Spartan_Lower_co.paa",
            "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa"
        };
    };
    //Customs
    class Festive_Spartan_Armor: Hades_Spartan_Armor
    {
        scope=2;
        scopeArsenal=2;
        author="Hawkins";
        displayName="[HC Customs] S-141";
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Spartans\Data\Festive_Upper_co.paa",
            "HCO_Aux\Hades_Armory\Spartans\Data\Spartan_Lower_co.paa",
            "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa"
        };
    };
};
class CfgVehicles
{
    class Mjolnir_MKIV_Shoulders_Spartan;
    class Hades_Spartan_Shoulders: Mjolnir_MKIV_Shoulders_Spartan
  {
        scope=2;
        scopeArsenal=2;
        displayName="[Hades Company] Spartan Project Shoulders";
        model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
        picture="";
        maximumLoad=1400;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9",
            "camo10",
            "camo11",
            "camo12",
            "camo13",
            "camo14",
            "camo15",
            "camo16",
            "camo17",
            "camo18",
            "camo19",
            "camo20",
            "camo21",
            "camo22",
            "camo23",
            "camo24",
            "camo25",
            "camo26",
            "camo27",
            "camo28",
            "commando_left",
            "commando_right",
            "cqc_left",
            "cqc_right",
            "eva_left",
            "eva_right",
            "gren_left",
            "gren_right",
            "gungnir_left",
            "gungnir_right",
            "hayabusa_left",
            "hayabusa_right",
            "jfo_left",
            "jfo_right",
            "mkv_left",
            "mkv_right",
            "odst_left",
            "odst_right",
            "operator_left",
            "operator_right",
            "recon_left",
            "recon_right",
            "security_left",
            "security_right",
            "scout_left",
            "scout_right"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "HCO_Aux\Hades_Armory\Spartans\Data\Spartan_Shoulder_co.paa",
            "HCO_Aux\Hades_Armory\Spartans\Data\Spartan_Shoulder_co.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };   
};