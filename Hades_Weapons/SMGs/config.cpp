class CfgPatches
{
	class Hades_SMGs
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
			"Hades_M7_Sub",
			"Hades_M7_Side",
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
    // SMGs
	class Hades_arifle_UNSC_m7_Base_F: arifle_Mk20_F
	{
		scope=1;
		author="Hades Aux Team";
		_generalMacro="Hades_arifle_UNSC_m7_Base_F";
		magazines[]=
		{
			"Hades_M7_Mag",
			"Hades_M7_Mag_Tracer",
		};
		magazineWell[]=
		{
			"Hades_M7_Magwell"
		};

		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows=3;
		HUD_TotalPosibleBullet=60;
		cursor="OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";

		ACE_barrelTwist=177.8;
		ACE_barrelLength=200;
		ACE_overheating_mrbs=99999;
		ACE_overheating_jamchance=0;
		ACE_overheating_slowdownFactor=0;
		ACE_overheating_allowSwapBarrel=0;
		ACE_overheating_dispersion=0;
		ACE_overheating_closedbolt=0;
		ACE_arsenal_hide=0;
		ACE_twistDirection=1;
		ACE_clearJamAction="GestureReload";
		ACE_checkTemperatureAction="Gear";
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_XMX_Library0";
		};
		//reloadAction="GestureReloadTRG";
		reloadAction="OPTRE_GestureReloadM7";
			recoil="recoil_smg_03";
		maxZeroing=300;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{

			//		"optre_MA5Suppressor",
					"19_UNSC_m7_Suppressor"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					//"OPTRE_M7_Sight",
					"19_UNSC_M7_optic",
				};
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
				compatibleItems[]=
				{
				//	"optre_bmr_laser",
					//"acc_flashlight"
					"19_UNSC_M7_LAM"
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		distanceZoomMin=0;
		distanceZoomMax=100;
		descriptionShort="Standard Issue M7";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\smg\data\anim\m7_handpos.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\smg_handanim_Spartan.rtm"};
		muzzles[]=
		{
			"this"
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=4;
	};
	class Hades_M7_Sub: Hades_arifle_UNSC_m7_Base_F
	{
		author="Hawkins";
		_generalMacro="Hades_M7_Sub";
		baseWeapon="Hades_M7_Sub";
		scope=2;
		displayName="[Hades] M7";
		model="\UNSC_F_Weapons\weapons\UNSC_M7.p3d";
		mass=20;
		reloadAction="OPTRE_GestureReloadM7";
		//reloadAction="GestureReloadBR55";
		picture="\UNSC_F_Weapons\weapons\UI\M7_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\M7_UI.paa";
	handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\smg\data\anim\m7_handpos.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\smg_handanim_Spartan.rtm"};
		muzzles[]=
		{
			"this"
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterOffset = "";	// name of a memory point in weapon to serve as zero of the model
			holsterScale = .75;
			mass=20;
			class MuzzleSlot: MuzzleSlot
			{
				inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
			//		"optre_MA5Suppressor",
					"19_UNSC_m7_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					"19_UNSC_M7_optic",
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
				//	"optre_bmr_laser",
					//"acc_flashlight"
					"19_UNSC_M7_LAM"
				};
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.25;
		aimTransitionSpeed=0.85;
		dexterity=4;
		maxZeroing=100;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="UNSC Standard issue M7 Infantry Sub Machinegun";
		modes[] = {"FullAuto","close","short","medium","far"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{

				begin1[] = {"\UNSC_F_Weapons\weapons\M7_data\Sounds\UNSC_M7_1.wss","db10",1,2000};
				begin2[] = {"\UNSC_F_Weapons\weapons\M7_data\Sounds\UNSC_M7_2.wss","db10",1,2000};
				begin3[] = {"\UNSC_F_Weapons\weapons\M7_data\Sounds\UNSC_M7_3.wss","db10",1,2000};
				begin4[] = {"\UNSC_F_Weapons\weapons\M7_data\Sounds\UNSC_M7_4.wss","db10",1,2000};
				soundBegin[] = {"begin1",0.14,"begin2",0.14,"begin3",0.14,"begin4",0.14};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet","Msbs65_01_Tail_Int_Silencer_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0666;
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 75;
			midRangeProbab = 0.01;
			maxRange = 150;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 20;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 35;
			maxRangeProbab = 0.4;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 12;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 35;
			minRangeProbab = 0.5;
			midRange = 55;
			midRangeProbab = 0.7;
			maxRange = 75;
			maxRangeProbab = 0.4;
		};
		class medium: close
		{
			burst = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 75;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.6;
			maxRange = 125;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 125;
			minRangeProbab = 0.4;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefY =3;
		aiDispersionCoefX = 4;
	};
	class Hades_M7_Side: Hades_M7_Sub
	{
		type=2;
		author="Hawkins";
		_generalMacro="Hades_M7_Side";
		baseWeapon="Hades_M7_Side";
		scope=2;
		displayName="[Hades] M7 (Sidearm)";
		model="\UNSC_F_Weapons\weapons\UNSC_M7_Side.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterOffset = "";	// name of a memory point in weapon to serve as zero of the model
			holsterScale = .8;			// scale of gun in holster relative to standard size (0.5 means the gun is 50 % of original size)
		};
	};
};
class cfgMagazineWells
{
	class Hades_M7_Magwell 
	{
		UNSC_5x23_36rnd[] = 
		{
			"Hades_M7_Mag",
			"Hades_M7_Mag_Tracer",
		};
	};
};
class CfgMagazines
{
    class CA_Magazine;
	class Hades_M7_Mag: CA_Magazine
	{
		author="Hawkins";
		scope=2;
		displayName="60Rnd 5X23mm Magazine";
		ammo="Hades_5x23";
		count=60;
		initSpeed=1000;
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_36Rnd_95x45_br_55";
		mass=5;
		ace_isbelt=0;
		ace_attachable=0;
		ace_placeable=0;
		ace_setupobject=0;
		ace_delaytime=0;
		ace_triggers=0;
		ace_magazines_forcemagazinemuzzlevelocity=1;
		model="\OPTRE_Weapons\Ammo\BR55Ammo.p3d";
		picture="\OPTRE_weapons\br\icons\magazine.paa";
		lastRoundsTracer = 0;
	};
    class Hades_M7_Mag_Tracer: Hades_M7_Mag
    {
	displayName="60Rnd 5x23mm Magazine (Tracer)";
	count=60;
	mass=5;
	tracersEvery=3;
	lastRoundsTracer=60;
	};
};
class CfgAmmo
{
    class BulletBase;
    class Hades_Bullet_Base: BulletBase
	{
		caliber=6;
		hit=35;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=950;
		airFriction=-0.001;
		deflecting=0;
		cartridge="FxCartridge_556";
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.2;
		tracerStartTime=0.0;
		tracerEndTime=8;
		nvgOnly=0;
		audibleFire=40;
		visibleFire=3;
		initspeed=950;
		visibleFireTime=3;
		dangerRadiusBulletClose=8;
		suppressionRadiusBulletClose=6;
		dangerRadiusHit=12;
		suppressionRadiusHit=8;
		ACE_caliber=10;
		ACE_bulletLength=29.464001;
		ACE_bulletMass=20.1;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};
		ACE_ballisticCoefficients[]={0.62};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocityVariationSD=0.1;
		ACE_muzzleVelocities[]={900,923,947,992,1016,1035};
		ACE_barrelLengths[]={400,450,500,550,600,660.40002};
	};
    class Hades_5x23: Hades_Bullet_Base
    {
		caliber=6;
		hit=35;
		typicalSpeed=1000;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        initspeed=1000;
    }
    class Hades_50cal: Hades_Bullet_Base
    {
		caliber=7;
		hit=40;
		typicalSpeed=1000;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    }
};