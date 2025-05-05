class CfgPatches
{
	class HCO_Helmets
	{
		author="Hawkins";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"OPTRE_Core",
            "OPTRE_FC_Units"
		};
		requiredVersion=1;
		units[]={};
		weapons[]=
		{
			"Hades_Marines"
		};
	};
};
class CfgWeapons
{
    class 19th_Helmet_Corpsman_Wood;
    class 19th_Helmet_Corpsman_NV_Wood;
    class 19th_H_Wood;
    class 19th_H_NV_Wood;	
    class MA_JFO_Helmet_Gray;
    class MA_Commando_Helmet_Gray;
    class DMNS_IHADSS_HELMET_01;
	class ItemInfo;
	class HeadgearItem;
    class Hades_Helmet: 19th_H_Wood
    {
        author="HadesModTeam";
        scope=2;
        displayName="[Hades Company] Reserves Helmet";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Helmets\Data\Base\Base_Helmet_co.paa"
        };
    };
    class Hades_Helmet_NV: 19th_H_NV_Wood
    {
        author="HadesModTeam";
        scope=2;
		scopeArsenal=2;
        displayName="[Hades Company] Reserves Helmet (No Visor)";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Helmets\Data\Base\Base_Helmet_co.paa"
        };
    };
};
class cfgMods
{
	author="Knight of Rage";
	timepacked="1685728963";
};