#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgPatches
{
	class Hades_Supply_Pods
	{
		units[]=
		{
		"Hades_Ammo_SupplyPod_Empty",
		"Hades_Ammo_SupplyPod_Rifleman",
		"Hades_Ammo_SupplyPod_Sniper",
		"Hades_Ammo_SupplyPod_AA",
		"Hades_Ammo_SupplyPod_AR",
		"Hades_Ammo_SupplyPod_GL",
		"Hades_SupplyPod_Medical"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
	};
};
class CfgVehicles
{
	class OPTRE_Ammo_Rack_Weapons;
	class Hades_Ammo_SupplyPod_Empty: OPTRE_Ammo_Rack_Weapons
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="Hades Supply Pods";
		editorCategory = "Hades_cat_faction";
		displayName="[Hades] Supply Pod (Empty)";
		model="\OPTRE_misc\crates\Supply_pod.p3d";
		author="Hawkins";
		icon="iconCrateWpns";
		transportMaxWeapons=8;
		transportMaxMagazines=50;
		maximumLoad=2000;
		transportMaxBackpacks=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.5;
		armor=10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Hades_Ammo_SupplyPod_Rifleman: Hades_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "Hades_cat_faction";
		displayName="[Hades] Supply Pod (Rifleman/CQB)";
		author="Hades Aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "HCO_Aux\Hades_Aviation\Crates\SupplyPod_co_Rifleman.paa"
        };
		class TransportMagazines
		{
			mag_xx(Hades_MA5A_Mag_Tracer,50);
			mag_xx(Hades_MA5A_Mag,50);
			mag_xx(Hades_BR55_Mag,50);
			mag_xx(Hades_8Guage_Mag,50);
			mag_xx(Hades_M7_Mag,50);
			mag_xx(OPTRE_M2_Smoke,10);
			mag_xx(OPTRE_M2_Smoke_Blue,30);
			mag_xx(OPTRE_M9_Frag,30);
			mag_xx(OPTRE_M8_Flare_Blue,30);
			mag_xx(ACE_M84,30);
		};
		class TransportWeapons
		{
			weap_xx(Hades_UNSC_M90,3);
			weap_xx(Hades_M7_Sub,3);
			weap_xx(Hades_UNSC_MA5A,3);
			weap_xx(Hades_UNSC_BR55,3);
		};
		class TransportItems
		{
			item_xx(19_UNSC_MA5A_smartlink,4);
			item_xx(19_UNSC_M7_optic,2);
			item_xx(19_UNSC_br_scope,4);
		};
	};
	class Hades_Ammo_SupplyPod_AA: Hades_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "Hades_cat_faction";
		displayName="[Hades] Supply Pod (Anti-Armor)";
		author="Hades Aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "HCO_Aux\Hades_Aviation\Crates\SupplyPod_co_AA.paa"
        };
		class TransportMagazines
		{
			mag_xx(OPTRE_M41_Twin_HEAP,10);
			mag_xx(OPTRE_M41_Twin_HEAT_G_AA,10);
			mag_xx(OPTRE_M41_Twin_HEAT_G,10);
			mag_xx(OPTRE_M41_Twin_HEAT_SACLOS,10);
			mag_xx(OPTRE_M41_Twin_HEAT_SALH,10);
			mag_xx(Hades_M96_HEAT,10);
		};
		class TransportWeapons
		{
			weap_xx(OPTRE_M41_SSR,2);
			weap_xx(Hades_Law,2);
		};
	};
class Hades_Ammo_SupplyPod_AR: Hades_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "Hades_cat_faction";
		displayName="[Hades] Supply Pod (Automatic Rifleman)";
		author="Hades Aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "HCO_Aux\Hades_Aviation\Crates\SupplyPod_co_AR.paa"
        };
		class TransportMagazines
		{
			mag_xx(Hades_400Rnd_Mag,30);
			mag_xx(Hades_1000Rnd_Etilka_Ball,30);
		};
		class TransportWeapons
		{
			weap_xx(Hades_H4_SAW,2);
			weap_xx(Hades_Etilka,2);
		};
	};
class Hades_Ammo_SupplyPod_Sniper: Hades_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "Hades_cat_faction";
		displayName="[Hades] Supply Pod (Sniper/Marksman)";
		author="Hades Aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "HCO_Aux\Hades_Aviation\Crates\SupplyPod_co_Sniper.paa"
        };
		class TransportMagazines
		{
			mag_xx(Hades_MA5A_SRS_APFSDS_Mag_tracer,15);
			mag_xx(Hades_MA5A_SRS_HEAP_Mag_Tracer,15);
			mag_xx(Hades_MA5A_SRS_APFSDS_Mag,15);
			mag_xx(Hades_MA5A_SRS_HEAP_Mag,15);
			mag_xx(Hades_MRS_Mag_Tracer,60);
			mag_xx(Hades_M392_Mag_Tracer,60);
		};
		class TransportWeapons
		{
			weap_xx(Hades_UNSC_SRS99,2);
			weap_xx(Hades_Etilka,2);
			weap_xx(Hades_MRS_Rifle,4);
			weap_xx(Hades_392_DMR,4);
		};
	};class Hades_Ammo_SupplyPod_GL: Hades_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "Hades_cat_faction";
		displayName="[Hades] Supply Pod (Grenadier)";
		author="Hades Aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "HCO_Aux\Hades_Aviation\Crates\SupplyPod_co_GL.paa"
        };
		class TransportMagazines
		{
			mag_xx(Hades_GRL45_6rnd_HEAT,10);
			mag_xx(Hades_GRL45_6rnd_Smoke,10);
			mag_xx(Hades_GRL45_6rnd_Smoke_Blue,10);
			mag_xx(Hades_GRL45_6rnd_Smoke_Purple,10);
			mag_xx(Hades_GRL45_6rnd_Smoke_Green,10);
			mag_xx(Hades_GRL45_6rnd_Smoke_Red,10);
			mag_xx(Hades_GRL45_3rnd_HEAT,10);
            mag_xx(Hades_GRL45_3rnd_Smoke,10);
            mag_xx(Hades_GRL45_3rnd_Smoke_Blue,10);
            mag_xx(Hades_GRL45_3rnd_Smoke_Purple,10);
            mag_xx(Hades_GRL45_3rnd_Smoke_Green,10);
            mag_xx(Hades_GRL45_3rnd_Smoke_Red,10);
			mag_xx(ACE_HuntIR_M203,10);
		};
		class TransportWeapons
		{
			weap_xx(Hades_UNSC_MA5A_GL,4);
			weap_xx(Hades_GRL_45,4);
		};
	};
    class Hades_SupplyPod_Medical: Hades_Ammo_SupplyPod_Empty
    {
		scope = 2;
       	scopeCurator = 2;
		editorCategory = "Hades_cat_faction";
        displayName = "[Hades] Supply Pod (Medical)";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "HCO_Aux\Hades_Aviation\Crates\SupplyPod_co_M.paa"
        };
		class TransportItems
		{
           	item_xx(ACE_PlasmaIV,20);
           	item_xx(ACE_plasmaIV_500,20);
            item_xx(MEU_PlasmaIV,10);
            item_xx(ACE_Tourniquet,20);
           	item_xx(ACE_splint,20);
            item_xx(MEU_Biofoam_Light,60);
            item_xx(MEU_Medigel_Light,60);
            item_xx(ACE_morphine,20);
			item_xx(ACE_adenosine,20);
           	item_xx(ACE_epinephrine,20);
            item_xx(kat_naloxone,20);
            item_xx(kat_IV_16,20);
            item_xx(kat_IO_FAST,20);
			item_xx(kat_EACA,20);
			item_xx(kat_lidocaine,20);
			item_xx(kat_larynx,30);
			item_xx(kat_chestSeal,230);
			item_xx(kat_TXA,20);
			item_xx(kat_reboa,20);
			item_xx(kat_nasal,20);
			item_xx(kat_scapel,20);
            item_xx(kat_X_AED,2);
			item_xx(kat_stethoscope,2);
			item_xx(kat_ultrasound,2);
			item_xx(kat_accuvac,2);
			item_xx(kat_vacuum,2);
			item_xx(kat_carbonate,20);
			item_xx(kat_Painkiller,10);
			item_xx(kat_Penthrox,10);
			item_xx(kat_oxygenTank_300,10);
			item_xx(surgicalKit,2);
			item_xx(kat_Pulseoximeter,2);
            item_xx(MEU_Emergency_MedKit,2);
		};
		class TransportMagazines
		{
			mag_xx(kat_Painkiller,20);
			mag_xx(MEU_Deployable_Bubbleshield_mag,1);
		};
		class TransportWeapons
		{
		};
        ace_cargo_size = 1;
        ace_cargo_canLoad = 0;
        ace_cargo_noRename = 1;
    };
    
    //Define the Pods
	class OPTRE_Ammo_SupplyPod_Empty;
	class OPTRE_Ammo_SupplyPod_Launcher;
    class Module_F;
    class Module_OPTRE_PelicanSupplyDrop: Module_F
    {
        class Arguments
        {
            class box1
            {
                defaultValue = "rdm";
					class values
					{
						class n1
						{
							name = "none";
							value = "none";
						};
						class n2
						{
							name = "Random Supply Pod";
						};
						class n531
						{
							name = "Rifleman/CQB [Hades]";
							value = "Hades_Ammo_SupplyPod_Rifleman";
						};
						class n532
						{
							name = "Anti-Armor [Hades]";
							value = "Hades_Ammo_SupplyPod_AA";
						};
						class n533
						{
							name = "Sniper/Marksman [Hades]";
							value = "Hades_Ammo_SupplyPod_Sniper";
						};
						class n534
						{
							name = "Automatic Rifleman [Hades]";
							value = "Hades_Ammo_SupplyPod_AR";
						};
						class n535
						{
							name = "Grenadier [Hades]";
							value = "Hades_Ammo_SupplyPod_GL";
						};
						class n536
						{
							name = "Medical [Hades]";
							value = "Hades_SupplyPod_Medical";
						};
                };
            };
        };
    };

};
