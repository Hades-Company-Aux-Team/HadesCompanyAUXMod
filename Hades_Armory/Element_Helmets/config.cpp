class CfgPatches
{
    class Hades_Element_Helmets
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
    class CH252D_Helmet;
    class CH252D_Helmet_dp;
    class ItemInfo;

    //Ground Helmets//


    class Ground_Helmet: CH252D_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[Hades Company] Ground Forces Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            "HCO_Aux\Hades_Armory\Element_Helmets\ODSTTest.rvmat"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };

    class Ground_Helmet_dp: CH252D_Helmet
    {
        scope=1;
        scopeArsenal=1;
        displayName="[Hades Company] Ground Forces Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };


    //Ground Customs//


    class Hawkins_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Hawkins's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hawkins_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hawkins_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hawkins_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hawkins_Visor.paa"     
            };
        };
    };
    class Hawkins_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Hawkins's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hawkins_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hawkins_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Ridder_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Ridder's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Ridder_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Ridder_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Ridder_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Ridder_Visor.paa"     
            };
        };
    };
    class Ridder_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Ridder's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Ridder_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Ridder_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Apex_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Apex's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";   
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Visor.paa"     
            };
        };
    };
    class Apex_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Apex's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Tech_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Tech's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Tech_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Tech_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Tech_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Tech_Visor.paa"     
            };
        };
    };
    class Tech_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Apex's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";   
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Tech_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Tech_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Zack_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Zack's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Zack_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Zack_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };
    class Zack_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Zack's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Zack_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Zack_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Cole_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Cole's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";   
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Cole_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Cole_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };
    class Cole_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Cole's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Cole_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Cole_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Calloway_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Calloway's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Calloway_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Calloway_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };
    class Calloway_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Calloway's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Calloway_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Calloway_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Grif_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Grif's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Grif_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Grif_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };
    class Grif_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Grif's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Grif_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Grif_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class King_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] King's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\King_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\King_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };
    class King_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] King's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\King_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\King_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Pax_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Pax's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Pax_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Pax_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Apex_Visor.paa"     
            };
        };
    };   
    class Pax_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Pax's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Pax_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Pax_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Viper_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Viper's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Viper_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Viper_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Ground_Force_Visor.paa"     
            };
        };
    };   
    class Viper_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Viper's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Viper_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Viper_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };


    //Air Helmets//


    class BishopII_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[Hades Company] Air Forces Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Air_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Air_Visor.paa"   
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Air_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Air_Visor.paa"  
            };
        };
    };
    class BishopII_Helmet_dp: CH252D_Helmet
    {
        scope=1;
        scopeArsenal=1;
        displayName="[Hades Company] Air Forces Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Air_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Base\Air_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };

    class Hudson_Helmet: Ground_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[HC Customs] Hudson's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hudson_Helmet.paa",
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hudson_Visor.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2", 
            //  "Helmet",
            //  "Visor"    
            };
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hudson_Helmet.paa",
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hudson_Visor.paa"     
            };
        };
    };
    class Hudson_Helmet_dp: Ground_Helmet_dp
    {
        scope=1;
        scopeArsenal=1;
        displayName="[HC Customs] Hudson's Helmet";
        model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hudson_Helmet.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
        };
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
            hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Helmets\Data\Custom\Hudson_Helmet.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"     
            };
        };
    };
};