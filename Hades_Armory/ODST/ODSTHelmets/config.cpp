class CfgPatches
{
    class Hades_ODST_Helmets_Gear
    {
        author="Hawkins";
        requiredAddons[]=
        {
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F"
        };
        requiredVersion=1;
        units[]=
        {

        };
        weapons[]=
        {
            "Hades_ODST"
        };
    };
};

class CfgWeapons
{
    class MA_M56SR_Helmet;
    class MA_M56_Scout_Helmet;
    class MA_M56A_Helmet;
    class MA_M56E_Helmet;
	class MA_JFO_Helmet_Gray;
	class MA_Commando_Helmet_Gray;
	class MA_Recon_Helmet_Gray;
	class MA_Grenadier_Helmet_Gray;
	class MA_Mjolnir_Pilot_Helmet_Gray;
	class MA_Mjolnir_MKVB_Helmet;
    class ItemInfo;
    //Helmets for Paladin
    class Bishop_Lead_Helmet: MA_JFO_Helmet_Gray
    {
        scope=2;
        scopeArsenal=2;
        author="HadesModTeam";
        displayName="[Hades Company] Bishop JFO Helmet";
        model="MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2"
        };
         hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Base\Bishop_JFO_Helmet.paa",
            "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Base\Bishop_JFO_Visor.paa"
        };
    };
	class Festive_Scout_Helmet: MA_M56_Scout_Helmet
	{
		author="Hawkins";
		scope=2;
		scopeArsenal=2;
		displayName="[HC Customs] Otto's Helmet";
	    model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
		hiddenSelectionsTextures[]=
		{
	    	"HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Festive_Custom_Scout_Helm_CO.paa",
	    	"HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Festive_Scout_Visor_CO.paa"
		};	
	};
	class Foxtrot_Spartan_Recon_Helmet: MA_Recon_Helmet_Gray
	{
    	scope=2;
    	scopeArsenal=2;
	    displayName="[HC Customs] Foxtrot's Helmet";
	    model="MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
	    hiddenSelections[]=
	    {
	        "Camo1",
	        "Camo2"
	    };
	    hiddenSelectionsTextures[]=
	    {
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Fox_Recon_Helmet_CO.paa",
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Fox_Recon_Visor_CO.paa"
	    };
	};
	class Swag_Spartan_Recon_Helmet: MA_Recon_Helmet_Gray
	{
    	scope=2;
    	scopeArsenal=2;
	    displayName="[HC Customs] Swag's Helmet";
	    model="MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
	    hiddenSelections[]=
	    {
	        "Camo1",
	        "Camo2"
	    };
	    hiddenSelectionsTextures[]=
	    {
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Swag_Custom_Recon_Helmet_CO.paa",
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Swag_Custom_Recon_Visor_CO.paa"
	    };
	};
	class Solid_Spartan_Grenadier_Helmet: MA_Grenadier_Helmet_Gray
	{
    	scope=2;
    	scopeArsenal=2;
	    displayName="[HC Customs] Pliskin's Helmet";
	    model="MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
	    hiddenSelections[]=
	    {
	        "Camo1",
	        "Camo2"
	    };
	    hiddenSelectionsTextures[]=
	    {
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Solid_Custom_Grenadier_Helmet_CO.paa",
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Solid_Custom_Grenadier_Visor_CO.paa"
	    };
	};
	class Hudson_Spartan_Pilot_Helmet: MA_Mjolnir_Pilot_Helmet_Gray
	{
    	scope=2;
    	scopeArsenal=2;
	    displayName="[HC Customs] Hudson's Helmet";
	    model="MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
	    hiddenSelections[]=
	    {
	        "Camo1",
	        "Camo2"
	    };
	    hiddenSelectionsTextures[]=
	    {
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Hudson_Custom_Pilot_Helmet_CO.paa",
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Hudson_Pilot_Visor_CO.paa"
	    };
	};
	class Punisher_Helmet: MA_Mjolnir_MKVB_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[HC Customs] Punisher's Helmet";
		model="MA_Armor\data\Helmets\MKVB\MKVB_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Punisher_Spartan_Helmet.paa",
	        "HCO_Aux\Hades_Armory\ODST\ODSTHelmets\Data\Customs\Punisher_Spartan_Visor.paa"
		};	
	};
};