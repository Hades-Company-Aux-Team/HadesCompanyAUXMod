class CfgPatches
{
    class Hades_Rucks
    {
        author="HadesModTeam";
        requiredAddons[]=
        {
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F"            
        };
        requiredVersion=1;
        units[]={};
        weapons[]={};
    
    };
};

class CfgVehicles
{
    class 19th_H2A_marine_backpack;
    class 19th_H2A_marine_backpack_light;
    class 19th_H2A_marine_backpack_heavy;
    class 19th_H2A_marine_backpack_light_rto;
    class 19th_H2A_marine_backpack_rto;
    class 19th_H2A_marine_backpack_heavy_rto;
    class OPTRE_ANPRC_515;
	class OPTRE_ILCS_Rucksack_Black;
    class MA_M56S_Rucksack;
	class MA_M56S_Rucksack_ODST_Radio;
    class ODST_Ruck: MA_M56S_Rucksack
    {
		author="HadesModTeam";
		scope=2;
		scopeArsenal=2;
		displayName="[Hades Company] Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
		maximumLoad=900;
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Hades_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
    };
    class ODST_Mortar_Ruck: MA_M56S_Rucksack
    {
		author="HadesModTeam";
		scope=2;
		scopeArsenal=2;
		displayName="[Hades Company] Mortarman Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
		maximumLoad=2000;
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Hades_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
    };
    class Medic_Ruck: MA_M56S_Rucksack
    {
		author="HadesModTeam";
		scope=2;
		scopeArsenal=2;
		displayName="[Hades Company] Corpsman Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
		maximumLoad=1500;
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Medic_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
    }; 
    class Engineer_Ruck: MA_M56S_Rucksack
    {
		author="HadesModTeam";
		scope=2;
		scopeArsenal=2;
		displayName="[Hades Company] Engineer Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";
		maximumLoad=1500;
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Engineer_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
    }; 
	class ODST_Radio_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		displayName="[Hades Company] LR Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=1500;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Hades_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
	};
	class Corpsman_Radio_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		displayName="[Hades Company] Corpsman LR Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=1500;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Medic_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
	};
	class Engineer_Radio_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		displayName="[Hades Company] Engineer LR Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=1500;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Backpacks\Data\Engineer_Ruck_CO.paa",
			"HCO_Aux\Hades_Armory\Backpacks\Data\Paladin_Backpack_Radio.paa"
		};
	};
	class Jump_Packs
	{
		label="Jump Packs";
		author="HadesModTeam";
		options[]=
		{
			"role"
		};
		class role
		{
			label="Role";
			alwaysSelectable=1;
			values[]=
			{
				"squadJump"
			};
			class squadJump
			{
				label="JumpPack";
				description="Standard Jumppack";
			};
		};
	};
    class Hades_Marine_Ruck: 19th_H2A_marine_backpack
	{
		author="HadesModTeam";
		scope=2;
		displayName="[Hades Company] Reserves Rucksack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
		maximumLoad=900;
		mass=20;
    };
    class Hades_Marine_Ruck_Invis: 19th_H2A_marine_backpack
	{
		author="HadesModTeam";
		scope=2;
		displayName="[Hades Company] Reserves Rucksack (Invis)";
		model="Hades_Test_New\Hades_Ruck\data\null.p3d";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
		maximumLoad=900;
		mass=20;
    };
	class Hades_Jump_Packs: OPTRE_ILCS_Rucksack_Black
	{
		author="HadesModTeam";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Hades Company] Jump Pack";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa";  
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=1100;
        model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=100;
		NSM_jumppack_recharge=4;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{14,7,30,0,1,1}
			}
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"NSM_Objects\Data\XD_1_JumpPack_CO.paa"
		};
	};
};