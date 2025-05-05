class CfgPatches
{
    class Hades_Elements_Vests
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
            "Hades_Elements"
        };
    };
};

class CfgWeapons
{
    class M52_ODST_Vest_Base;
    class M52_ODST_Vest_ODS;
    class ItemInfo;
    class VestItem;
    class HitpointsProtectionInfo;
    class Element_Base_Vest: M52_ODST_Vest_Base
    {
        scope=1;
		scopeArsenal=1;
		author="Hades Aux Team";
		displayName="[Hades Company] Visual Test";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            "ODST_Bracer_Left",
            "ODST_Bracer_Right",
            "ODST_Chest",
            "ODST_Left",
            "ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            "WaistBack",
            "WaistGLeft",
            "WaistGRight",
            "WaistPLeft",
            "WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            "WaistSRight",
            "LegPouchL",
            "LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Bracer_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Vest_CO.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulders_CO.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulders_CO.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
                "Camo1", //CQB Left
                "Camo2", //CQB Right
                "Camo3", //Marksman_Left
                "Camo4", //Marksman_Right
                "Camo5", //ODST_Bracer_Left
                "Camo6", //ODST_Bracer_Right
                "Camo7", //ODST_Chest
                "Camo8", //ODST_Left
                "Camo9", //ODST_Right
                "Camo10", //ChestPMLeft
                "Camo11", //ChestPMRight
                "Camo12", //ChestPouch
                "Camo13", //LShoulderRadio
                "Camo14", //RShoulderRadio
                "Camo15", //StomachPouch
                "Camo16", //TorsoPMLeft
                "Camo17", //TorsoPMRight
                "Camo18", //TorsoPouch
                "Camo19", //WaistBack
                "Camo20", //WaistGLeft
                "Camo21", //WaistGRight
                "Camo22", //WaistPLeft
                "Camo23", //WaistPRight
                "Camo24", //WaistRLeft
                "Camo25", //WaistRRight
                "Camo26", //WaistSLeft
                "Camo27", //WaistSRight
                "Camo28", //LegPouchL
                "Camo29", //LegPouchR
                "CQB_Left",
                "CQB_Right",
                "Marksman_Left",
                "Marksman_Right",
                "ODST_Bracer_Left",
                "ODST_Bracer_Right",
                "ODST_Chest",
                "ODST_Left",
                "ODST_Right",
                "ChestPMLeft",
                "ChestPMRight",
                "ChestPouch",
                "LShoulderRadio",
                "RShoulderRadio",
                "StomachPouch",
                "TorsoPMLeft",
                "TorsoPMRight",
                "TorsoPouch",
                "WaistBack",
                "WaistGLeft",
                "WaistGRight",
                "WaistPLeft",
                "WaistPRight",
                "WaistRLeft",
                "WaistRRight",
                "WaistSLeft",
                "WaistSRight",
                "LegPouchL",
                "LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Bracer_Left
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Vest_CO.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulders_CO.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulders_CO.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };

    //KNIGHT//


    class Knight_Element_Base: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Knight ODST Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Knight_Element_Leader: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Knight Leader Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Knight_Element_Corpsman: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Knight Corpsman Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Knight_Element_Engi: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Knight Engineer Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    //KNIGHT CUSTOMS//


    class Hawkins_Custom: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Hawkins's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Hawkins_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };

    class Tech_Custom: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Tech's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Tech_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Tech_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Tech_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Tech_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Tech_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Tech_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };

    class Ridder_Custom: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Ridder's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            //"Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            "ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Marksman.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Marksman.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            //"Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            "ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Marksman.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Marksman.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Ridder_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Apex_Custom: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Apex's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Apex_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Apex_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Apex_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Apex_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Apex_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Apex_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Lead_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };

    class Custom_Zack_Corp: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Zack's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Zack_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Zack_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Zack_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Zack_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Zack_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Zack_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Corp_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Custom_Pax_Corp: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Pax's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Pax_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Pax_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Pax_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Pax_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Pax_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Pax_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Custom_Grif: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] Grif's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Grif_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\Grif_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Custom_King_Engi: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[HC Customs] King's Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\King_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Custom\King_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_Engi_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    //BISHOP//


    class Bishop_Element_Base: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Bishop Pilot Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_ODST_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_ODST_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_ODST_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_ODST_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Bishop_Element_Flight_Lead: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Bishop Flight Leader Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_Lead_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_Lead_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Air_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_Lead_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Bishop_Lead_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    //BRIGAND//


    class Brigand_Element_Base: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Brigand ODST Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_ODST_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_ODST_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_ODST_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_ODST_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };
    class Brigand_Element_Lead: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Brigand Lead Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_Lead_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_Lead_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_Lead_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Brigand_Lead_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    //LANCER//


    class Lancer_Element_Base: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Lancer ODST Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_ODST_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_ODST_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_ODST_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_ODST_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };


    class Lancer_Element_Lead: Element_Base_Vest
    {
        scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="[Hades Company] Lancer Lead Armor";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";    
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
        };
        hiddenSelectionsTextures[]=
        {
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_Lead_Shoulder.paa", //ODST_Left
            "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_Lead_Shoulder.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
            {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            //"WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            //"WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            //"LegPouchR"
            };
           hiddenSelectionsTextures[]=
            {
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_CQB_CO.paa", //CQB Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Knight_ODST_Marksman_CO.paa", //Marksman_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Bracer_Right
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Ground_Force_Vest.paa", //ODST_Chest
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_Lead_Shoulder.paa", //ODST_Left
                "HCO_Aux\Hades_Armory\Element_Vests\Data\Base\Lancer_Lead_Shoulder.paa", //ODST_Right
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
            };
        };
    };
};