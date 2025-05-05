class CfgPatches
{
    class Hades_UNSC_Units
    {
        units[]=
        {
            "Hades_ODST_Rifleman",
            "Hades_ODST_Lead",
            "Hades_ODST_Corpsman",
            "Hades_ODST_Engineer",
            "Hades_ODST_Shotgun",
            "Hades_ODST_M7",
            "Hades_ODST_AR",
            "Hades_ODST_BR",
            "Hades_ODST_Marksman",
            "Hades_ODST_AT",
            "Hades_ODST_Lancer",
            "Hades_ODST_Pilot",
            "Hades_ODST_Brigand",
            "Hades_Marine",
            "Hades_ODST_Hawkins",
            "Hades_ODST_Tech",
            "Hades_ODST_Ridder",
            "Hades_ODST_Pax",
            "Hades_ODST_King",
            "Hades_Pelican",
            "Hades_Pelican_Grey",
            "Hades_Marine_Armed_Pelican",
            "Hades_Marine_Unarmed_Pelican",
            "Hades_Falcon",
            "Hades_Hornet_CAS",
            "Hades_Hornet_CAP",
            "Hades_Sparrowhawk_AV22",
            "Hades_Sparrowhawk_AV22A",
            "Hades_Sparrowhawk_AV22B",
            "Hades_Sparrowhawk_AV22C",
            "Hades_Sabre",
            "Hades_Warthog_MG";
            "Hades_Warthog_AA";
            "Hades_Warthog_Transport";
            "Hades_Warthog_Command";
            "Hades_Warthog_Gauss";
            "Hades_Springbok_APC",
            "Hades_Springbok_MGS",
            "Hades_Springbok_AA",
            "Hades_Springbok_IFV",
            "Hades_Scorpion",
            "Hades_Wildebeast",
            "Hades_Bison_MGS",
            "Hades_Bison_APC",
            "Hades_Bison_IFV"
        };
        weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};        
    };
};

class CfgEditorCatergories
{
    class Hades_UNSC
    {
        displayName = "Hades Company";
    };
};

class CfgEditorSubcategories
{
    class Hades_Hanger
    {
        displayName="Flight Deck";
    };
    class Hades_Motorpool
    {
        displayName="Motor Pool"
    };
};

class CfgFactionClasses 
{
    class Hades_UNSC
    {
        displayName = "Hades Company";
        side = 1;
        priority = 1;
		disableRandomization[] = { "Facewear" };
    };
};

class CfgVehicles
{
    class I_G_Soldier_base_F;
    class B_medic_F;
    class B_Soldier_SL_F;

    class OPTRE_M12_LRV;
    class OPTRE_M12R_AA;
    class OPTRE_M813_TT;
    class OPTRE_M12_FAV;
    class OPTRE_M12G1_LRV;
    class DMNS_M511_Springbok_MGS;
    class DMNS_M511_Springbok_IFV;
    class DMNS_M511_Springbok_APC;
    class DMNS_M511_Springbok_AA;
    class DMNS_M808B_F;
    class OPTRE_M125_APC;
    class OPTRE_M413_MGS_UNSC;
    class OPTRE_M412_IFV_UNSC;
    class OPTRE_M411_APC_UNSC;

    class Splits_UNSC_D77_TC_Pelican;
    class OPTRE_Pelican_unarmed_marine;
    class OPTRE_Pelican_armed_marine;
    class OPTRE_UNSC_falcon_armed;
    class OPTRE_UNSC_hornet_CAS;
    class OPTRE_UNSC_hornet_CAP;
    class OPTRE_AV22_Sparrowhawk;
    class OPTRE_AV22A_Sparrowhawk;
    class OPTRE_AV22B_Sparrowhawk;
    class OPTRE_AV22C_Sparrowhawk;
    class OPTRE_YSS_1000_A_VTOL_Single;   
    
    class Hades_ODST_Lead: B_Soldier_SL_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST Leader";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Leader";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Leader";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Rifleman: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Corpsman: B_medic_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST Corpsman";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Corpsman";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Corpsman";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="Medic_Ruck"
    };
    class Hades_ODST_Engineer: B_medic_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST Engineer";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Engi";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Engi";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="Engineer_Ruck"
    };
    class Hades_ODST_Shotgun: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST M90";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_M90";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_M90";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_8Gauge_Mag",
            "Hades_8Gauge_Mag",
            "Hades_8Gauge_Mag",
            "Hades_8Gauge_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_8Gauge_Mag",
            "Hades_8Gauge_Mag",
            "Hades_8Gauge_Mag",
            "Hades_8Gauge_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_M7: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST M7";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_M7_Sub";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_M7_Sub";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_M7_Mag",
            "Hades_M7_Mag",
            "Hades_M7_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_M7_Mag",
            "Hades_M7_Mag",
            "Hades_M7_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_BR: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST BR55";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_BR55";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_BR55";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_AR: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST Autorifle";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_H4_Saw";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_H4_Saw";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_400Rnd_Mag",
            "Hades_400Rnd_Mag",
            "Hades_400Rnd_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_400Rnd_Mag",
            "Hades_400Rnd_Mag",
            "Hades_400Rnd_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Marksman: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST Marksman";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_392_DMR";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_392_DMR";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_M392_Mag",
            "Hades_M392_Mag",
            "Hades_M392_Mag",
            "Hades_M392_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_M392_Mag",
            "Hades_M392_Mag",
            "Hades_M392_Mag",
            "Hades_M392_Mag"          
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_AT: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="ODST Anti-Tank";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_BR55";
            "Hades_Law";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_BR55";
            "Hades_Law";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag"  
        };
        respawnMagazines[]=
        {
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag"              
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Knight_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };

    class Hades_ODST_Lancer: B_Soldier_SL_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Tanker";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Lancer_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Lancer_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };

    class Hades_ODST_Brigand: B_Soldier_SL_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Sniper";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_SRS99";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_SRS99";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_SRS_APFSDS_Mag",
            "Hades_MA5A_SRS_APFSDS_Mag",
            "Hades_MA5A_SRS_APFSDS_Mag",
            "Hades_MA5A_SRS_APFSDS_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_SRS_APFSDS_Mag",
            "Hades_MA5A_SRS_APFSDS_Mag",
            "Hades_MA5A_SRS_APFSDS_Mag",
            "Hades_MA5A_SRS_APFSDS_Mag"           
        };
        linkedItems[]=
        {
            "Ground_Helmet";
            "Brigand_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ground_Helmet";
            "Brigand_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Pilot: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Pilot";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Pilot_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"            
        };
        linkedItems[]=
        {
            "BishopII_Helmet";
            "Bishop_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "BishopII_Helmet";
            "Bishop_Element_Base";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="Hades_Jump_Pack"
    };
    class Hades_Marine: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Marine";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Uni_Hades_Marine";
        weapons[]=
        {
            "Hades_UNSC_BR55";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_BR55";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag",
            "Hades_BR55_Mag"            
        };
        linkedItems[]=
        {
            "Hades_Helmet";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Hades_Helmet";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="Hades_Marine_Ruck"
    };
    class Hades_ODST_Hawkins: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Hawkins";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"            
        };
        linkedItems[]=
        {
            "Hawkins_Helmet";
            "Hawkins_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Hawkins_Helmet";
            "Hawkins_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Tech: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Tech";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"            
        };
        linkedItems[]=
        {
            "Tech_Helmet";
            "Tech_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Tech_Helmet";
            "Tech_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Ridder: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Ridder";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"            
        };
        linkedItems[]=
        {
            "Ridder_Helmet";
            "Ridder_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Ridder_Helmet";
            "Ridder_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_Pax: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Pax";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"          
        };
        linkedItems[]=
        {
            "Pax_Helmet";
            "Pax_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "Pax_Helmet";
            "Pax_Custom";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };
    class Hades_ODST_King: I_G_Soldier_base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="King";
        faction="Hades_UNSC";
        side=1;
        identityTypes[]=
        {
            "LanguageRUS_F",
            "Head_Euro",
            "G_EURO_default"
        };
        genericNames="EnochMen";
        uniformClass="Hades_Urban_Tiger_Uni";
        weapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"
        };
        respawnWeapons[]=
        {
            "Hades_UNSC_MA5A";
            "Thorw";
            "Put"            
        };
        magazine[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"
        };
        respawnMagazines[]=
        {
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag",
            "Hades_MA5A_Mag"          
        };
        linkedItems[]=
        {
            "King_Helmet";
            "Custom_King_Engi";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        respawnLinkedItems[]=
        {
            "King_Helmet";
            "Custom_King_Engi";
            "OPTRE_Binoculars",
            "ItemMap",
            "ItemGPS",
            "TFAR_anprc152",
            "ItemCompass",
            "OPTRE_NVGT_C"
        };
        backpack="ODST_Ruck"
    };

    //Vics
    class Hades_Warthog_MG: OPTRE_M12_LRV
    {
		scope=2;
		displayName="MG Warthog";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Warthog_AA: OPTRE_M12R_AA
    {
		scope=2;
		displayName="AA Warthog";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Warthog_Transport: OPTRE_M813_TT
    {
		scope=2;
		displayName="Transport Warthog";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Warthog_Command: OPTRE_M12_FAV
    {
		scope=2;
		displayName="Command Warthog";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Warthog_Gauss: OPTRE_M12G1_LRV
    {
		scope=2;
		displayName="Gauss Warthog";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Scorpion: DMNS_M808B_F
    {
		scope=2;
		displayName="Scorpion";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;  
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Springbok_AA: DMNS_M511_Springbok_AA
    {
		scope=2;
		displayName="Springbok AA";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Springbok_MGS: DMNS_M511_Springbok_MGS
    {
		scope=2;
		displayName="Springbok MGS";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };

    class Hades_Springbok_IFV: DMNS_M511_Springbok_IFV
    {
		scope=2;
		displayName="Springbok IFV";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };  

    class Hades_Springbok_APC: DMNS_M511_Springbok_APC
    {
		scope=2;
		displayName="Springbok APC";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    }; 
    class Hades_Wildebeast: OPTRE_M125_APC
    {
		scope=2;
		displayName="Wildebeast";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Bison_IFV: OPTRE_M412_IFV_UNSC
    {
		scope=2;
		displayName="Bison IFV";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Bison_APC: OPTRE_M411_APC_UNSC
    {
		scope=2;
		displayName="Bison APC";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Bison_MGS: OPTRE_M413_MGS_UNSC
    {
		scope=2;
		displayName="Bison MGS";
		editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Motorpool";
		author="Hawkins";
		faction="Hades_UNSC";
		side=1;
		crew="Hades_ODST_Lancer";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };   

    //AIR
    class Hades_Pelican: Splits_UNSC_D77_TC_Pelican
    {
        displayname = "Pelican (Foundries)";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Pelican_Grey: Splits_UNSC_D77_TC_Pelican
    {
        displayname = "Grey Pelican (Foundries)";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Marine_Unarmed_Pelican: OPTRE_Pelican_unarmed_marine
    {
        displayname = "Unarmed Marine Pelican";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Marine_Armed_Pelican: OPTRE_Pelican_armed_marine
    {
        displayname = "Armed Marine Pelican";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Falcon: OPTRE_UNSC_falcon_armed
    {
        displayname = "Falcon";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Hornet_CAP: OPTRE_UNSC_hornet_CAP
    {
        displayname = "Hornet (CAP)";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Hornet_CAS: OPTRE_UNSC_hornet_CAS
    {
        displayname = "Hornet (CAS)";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Sparrowhawk_AV22: OPTRE_AV22_Sparrowhawk
    {
        displayname = "AV22 Sparrowhawk";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Sparrowhawk_AV22A: OPTRE_AV22A_Sparrowhawk
    {
        displayname = "AV22A Sparrowhawk";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Sparrowhawk_AV22B: OPTRE_AV22B_Sparrowhawk
    {
        displayname = "AV22B Sparrowhawk";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Sparrowhawk_AV22C: OPTRE_AV22C_Sparrowhawk
    {
        displayname = "AV22C Sparrowhawk";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
    class Hades_Sabre: OPTRE_YSS_1000_A_VTOL_Single
    {
        displayname = "Sabre";
        editorCategory = "Hades_UNSC";
        editorSubcategory = "Hades_Hanger";
        faction="Hades_UNSC";
        scope = 2;
        crew="Hades_ODST_Pilot";
        scopeCurator = 2;
        tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
    };
};
class CfgGroups
{
    class West
    {
        class Hades_UNSC
        {
            name="Hades Company";
            class Infantry
            {
                name="Infantry"
                class Hades_Squad
                {
                    name="Squad Element";
                    faction="Hades_UNSC";
                    side=1;
                    class Unit0
                    {
                        side=1;
                        Vehicle="Hades_ODST_Lead";
                        rank="SERGEANT";
                        position[]={0, 0, 0};
                    };
                    class Unit1
                    {
                        side=1;
                        Vehicle="Hades_ODST_Corpsman";
                        rank="SERGEANT";
                        position[]={0, -2, 0};                        
                    };
                    class Unit2
                    {
                        side=1;
                        Vehicle="Hades_ODST_Engineer";
                        rank="SERGEANT";
                        position[]={0, -4, 0};       
                    };
                    class Unit3
                    {
                        side=1;
                        Vehicle="Hades_ODST_Lead";
                        rank="CORPORAL";
                        position[]={0, -6, 0};       
                    };
                    class Unit4
                    {
                        side=1;
                        Vehicle="Hades_ODST_AT";
                        rank="PRIVATE";
                        position[]={0, -8, 0};       
                    };
                    class Unit5
                    {
                        side=1;
                        Vehicle="Hades_ODST_Shotgun";
                        rank="PRIVATE";
                        position[]={0, -10, 0};       
                    };   
                    class Unit6
                    {
                        side=1;
                        Vehicle="Hades_ODST_Corpsman";
                        rank="PRIVATE";
                        position[]={0, -12, 0};       
                    };
                    class Unit7
                    {
                        side=1;
                        Vehicle="Hades_ODST_Lead";
                        rank="CORPORAL";
                        position[]={0, -14, 0};       
                    };        
                    class Unit8
                    {
                        side=1;
                        Vehicle="Hades_ODST_AR";
                        rank="PRIVATE";
                        position[]={0, -16, 0};       
                    };
                    class Unit9
                    {
                        side=1;
                        Vehicle="Hades_ODST_M7";
                        rank="PRIVATE";
                        position[]={0, -18, 0};       
                    };
                    class Unit10
                    {
                        side=1;
                        Vehicle="Hades_ODST_Corpsman";
                        rank="PRIVATE";
                        position[]={0, -20, 0};       
                    };
                };
                class Hades_Tank_Crew
                {
                    name="Tank Crew";
                    faction="Hades_UNSC";
                    side=1;
                    class Unit0
                    {
                        side=1;
                        Vehicle="Hades_ODST_Lancer";
                        rank="SERGEANT";
                        position[]={0, 0, 0};
                    };
                    class Unit1
                    {
                        side=1;
                        Vehicle="Hades_ODST_Lancer";
                        rank="SERGEANT";
                        position[]={0, -2, 0};                        
                    };
                    class Unit2
                    {
                        side=1;
                        Vehicle="Hades_ODST_Lancer";
                        rank="SERGEANT";
                        position[]={0, -4, 0};       
                    };
                };
                class Hades_Snipper_Team
                {
                    name="Sniper Team";
                    faction="Hades_UNSC";
                    side=1;
                    class Unit0
                    {
                        side=1;
                        Vehicle="Hades_ODST_Brigand";
                        rank="SERGEANT";
                        position[]={0, 0, 0};
                    };
                    class Unit1
                    {
                        side=1;
                        Vehicle="Hades_ODST_Marksman";
                        rank="SERGEANT";
                        position[]={0, -2, 0};                        
                    };
                };
                class Hades_Marine_Squad
                {
                    name="Marine Squad";
                    faction="Hades_UNSC";
                    side=1;
                    class Unit0
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="SERGEANT";
                        position[]={0, 0, 0};
                    };
                    class Unit1
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="SERGEANT";
                        position[]={0, -2, 0};                        
                    };
                    class Unit2
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="SERGEANT";
                        position[]={0, -4, 0};       
                    };
                    class Unit3
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="CORPORAL";
                        position[]={0, -6, 0};       
                    };
                    class Unit4
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="PRIVATE";
                        position[]={0, -8, 0};       
                    };
                    class Unit5
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="PRIVATE";
                        position[]={0, -10, 0};       
                    };   
                    class Unit6
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="PRIVATE";
                        position[]={0, -12, 0};       
                    };
                    class Unit7
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="CORPORAL";
                        position[]={0, -14, 0};       
                    };        
                    class Unit8
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="PRIVATE";
                        position[]={0, -16, 0};       
                    };
                    class Unit9
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="PRIVATE";
                        position[]={0, -18, 0};       
                    };
                    class Unit10
                    {
                        side=1;
                        Vehicle="Hades_Marine";
                        rank="PRIVATE";
                        position[]={0, -20, 0};       
                    };
                };
            };
        };
    };
};