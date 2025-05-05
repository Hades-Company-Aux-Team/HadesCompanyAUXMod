class CfgPatches
{
	class Hades_Weapons
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Weapons_F"
		//	"ace_common"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"Hades_H4_SAW",
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class arifle_Mk20_F;
	class Pistol_Base_F;
	class WeaponSlotsInfo;
	class UGL_F;
	class Hades_Rifle_Base: arifle_Mk20_F
	{
		scope=1;
		displayName="-";
		recoil="";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class Hades_H4_SAW: Hades_Rifle_Base
	{
		scope=2;
		scopeArsenal=2;
		ace_overheating_mrbs=3000000000;
		ACE_Overheating_SlowdownFactor=0;
		ACE_Overheating_JamChance=0;
		ACE_Overheating_Dispersion=0;
		ACE_overheating_allowSwapBarrel=0;
		author="Hades Aux";
		model="MA_Weapons\data\SAW.p3d";
		displayName="[Hades] H4 SAW";
		descriptionShort="UNSC Squad Automatic Weapon";
		canShootInWater=1;
		baseweapon="Hades_H4_SAW";
		cursor="LMG_Crosshair";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"
		};
		ace_clearJamAction="GestureReloadAK12_Drum";
		reloadAction="GestureReloadAK12_Drum";
		reloadMagazineSound[]=
		{
			"MA_Weapons\data\SAW\Saw_Reload.ogg",
			2.5,
			1,
			100
		};
		recoil="MA_recoil_MA5";
		magazines[]=
		{
			"Hades_400Rnd_Mag",
			"Hades_400Rnd_Mag_Tracer",
		};
		magazineWell[]=
		{
			"Hades_LMG_Magwell",
		};
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					1,
					1800
				};
				begin2[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					1.015,
					1800
				};
				begin3[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					0.985,
					1800
				};
				begin4[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					1.01,
					1800
				};
				begin5[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.20,
					"begin2",
					0.20,
					"begin3",
					0.20,
					"begin4",
					0.20,
					"begin5",
					0.20,
				};
				beginwater1[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1,
				};
			};
			reloadTime=0.0667;
			dispersion=0.00085;
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					1,
					1800
				};
				begin2[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					1.015,
					1800
				};
				begin3[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					0.985,
					1800
				};
				begin4[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					1.01,
					1800
				};
				begin5[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1.5,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.20,
					"begin2",
					0.20,
					"begin3",
					0.20,
					"begin4",
					0.20,
					"begin5",
					0.20,
				};
				beginwater1[]=
				{
					"MA_Weapons\data\SAW\Saw_Shot.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1,
				};
			};
			reloadTime=0.0667;
			dispersion=0.00075000001;
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optre_br55hb_scope",
					"OPTRE_M7_Sight",
					"OPTRE_Evo_Sight",
					"OPTRE_M73_SmartLink",
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_IR",
					"ace_acc_pointer_green",
					"optre_m45_flashlight_red",
					"optre_bmr_laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
};
class cfgMagazineWells
{
	class Hades_LMG_Magwell 
	{
		UNSC_762x51_32rnd[] = 
		{
			"Hades_400Rnd_Mag",
			"Hades_400Rnd_Mag_Tracer",
		};
	};
};
class CfgMagazines
{
    class 20Rnd_762x51_Mag;
	class Hades_400Rnd_Mag: 20Rnd_762x51_Mag
	{
		scope=2;
		scopeArsenal=2;
		author="Hades Aux Team";
		displayName="400Rnd 7.62x51mm Magazine";
		count=400;
		displaynameshort="7.62x51mm";
		descriptionshort="400 Rounds of Full Metal Jacket-Armor Piercing ammo";
		mass=255;
		ammo="Hades_762x51_LMG_Base";
		tracersEvery=0;
		lastRoundsTracer=400;
	};
    class Hades_400Rnd_Mag_Tracer: Hades_400Rnd_Mag 
    {
	displayName="400Rnd 7.62x51mm Magazine (Tracer)";
	count=400;
	mass=255;
	tracersEvery=1;
	lastRoundsTracer=400;
	};
};
class CfgAmmo
{
    class B_762x51_Ball;
	class Hades_762x51_LMG_Base: B_762x51_Ball
	{
		caliber=7;
		hit=40;
		typicalSpeed=1000;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class cfgMods
{
	author="Hades Aux";
	timepacked="";
};;
