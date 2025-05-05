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
			"Hades_392_DMR",
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
	class Hades_392_arifle_base: arifle_Mk20_F
	{
		author="Hades";
		scope=1;
		_generalMacro="Hades_392_arifle_base";
		magazines[]=
		{
			"Hades_M392_Mag",
			"Hades_M392_Mag_Tracer",
		};
		magazineWell[]=
		{
			"Hades_M392_Magwell"
		};
	
		ODST_1="OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye="OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=20;
		cursor="srifle";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
	
		ACE_barrelTwist=400;
		ACE_barrelLength=800;
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
		reloadAction="GestureReloadBR55";
		recoil="recoil_dmr_06";
		maxZeroing=750;
	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
				
			//		"optre_MA5Suppressor",
					"19_UNSC_MA5A_Suppressor",
					"19_UNSC_MA5B_Suppressor"
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
					//"UNSC_br_scope"
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
					"19_UNSC_BR55_LAM"
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {"bipod_01_F_blk"};
			};
		};
		distanceZoomMin=0;
		distanceZoomMax=100;
		descriptionShort="Standard Issue MA5A";
		handAnim[] = {"OFP2_ManSkeleton",		"\UNSC_F_Weapons\weapons\animations\dmr_standing.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_DMR_Spartan.rtm"};
	};
	class Hades_392_DMR: Hades_392_arifle_base
	{
		author="Hades";
		_generalMacro="Hades_392_DMR";
		baseWeapon="Hades_392_DMR";
		scope=2;
		displayName="[Hades] M392 DMR";
		model="\UNSC_F_Weapons\weapons\UNSC_M392.p3d";
		mass=60;
		//reloadAction="GestureReloadTRG";
		reloadAction="GestureReloadBR55";
		picture="\UNSC_F_Weapons\weapons\UI\M392_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\M392_UI.paa";
		handAnim[] = 
		{
			"OFP2_ManSkeleton",		
			"\UNSC_F_Weapons\weapons\animations\dmr_standing.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_DMR_Spartan.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		class FlashLight
		{
			color[] = {180,160,130};
			ambient[] = {0.9,0.8,0.7};
			intensity = 100;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 10;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 100;
			dayLight = 1;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			scale[] = {0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class MuzzleSlot: MuzzleSlot
			{
				inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
			//		"optre_MA5Suppressor",
					"19_UNSC_BR55_Suppressor",
					"19_UNSC_BR55L_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					//"19_UNSC_br_scope",
					"19_UNSC_evosd",
					"19_UNSC_evo"
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
				//	"optre_bmr_laser",
					//"acc_flashlight"
					"19_UNSC_BR55_LAM"
				};
				iconPosition[]={0.2,0.40000001};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {"bipod_01_F_blk"};
			};
		};
		inertia=0.6;
		aimTransitionSpeed=0.95;
		dexterity=2;
		recoil="recoil_dmr_06";
		maxZeroing=2000;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="UNSC Standard issue M392 infantry Designated Marksman Rifle";
		modes[] = {"Single","close","short","medium","far"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
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
					"\UNSC_F_Weapons\weapons\M392_data\Sounds\UNSC_DMR_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\M392_data\Sounds\UNSC_DMR_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\M392_data\Sounds\UNSC_DMR_3.wss",
					1.2,
					1,
					2000
				};
				soundBegin[] = {"begin1",0.16,"begin2",0.14,"begin3",0.14};
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
			reloadTime = 0.2;
			dispersion = 0.00005;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 2000;
			maxRangeProbab = 0.1;
		};
		class close: Single
		{
			burst = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.4;
		};
		class medium: close
		{
			burst = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 350;
			midRangeProbab = 0.6;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 500;
			minRangeProbab = 0.4;
			midRange = 800;
			midRangeProbab = 0.5;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefY = 1;
		aiDispersionCoefX = 1;
	};
};
class cfgMagazineWells
{
	class Hades_M392_Magwell 
	{
		UNSC_762x51_15rnd[] = 
		{
			"Hades_M392_Mag",
			"Hades_M392_Mag_Tracer",
		};
	};
};
class CfgMagazines
{
    class CA_Magazine;
	class Hades_M392_Mag: CA_Magazine
	{
		author="Hades";
		scope=2;
		displayName="20Rnd 7.62X51mm Magazine";
		ammo="Hades_762x51_Base";
		count=20;
		initSpeed=750;
		//picture="\19thBR\Addons\BR\weapons\UI\BR55_mag_icon.paa";
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_36Rnd_95x45_br_55";
		mass=20;
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
    class Hades_M392_Mag_Tracer: Hades_M392_Mag 
    {
	displayName="20Rnd 7.62x51mm Magazine (Tracer)";
	count=20;
	mass=5;
	tracersEvery=1;
	lastRoundsTracer=20;
	};
};
class CfgAmmo
{
    class BulletBase;
    class Hades_762x51_Base: BulletBase
	{
		caliber=10;
		hit=80;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=1250;
		airFriction=-0.0003;
		deflecting=0;
		cartridge="FxCartridge_762";
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=.8;
		tracerStartTime=0.0;
		tracerEndTime=8;
		nvgOnly=0;
		audibleFire=40;
		visibleFire=3;
		initspeed=1250;
		visibleFireTime=3;
		dangerRadiusBulletClose=8;
		suppressionRadiusBulletClose=6;
		dangerRadiusHit=12;
		suppressionRadiusHit=8;
		ACE_caliber=7.62;
		ACE_bulletLength=30;
		ACE_bulletMass=12.6;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};
		ACE_ballisticCoefficients[]={0.43};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocityVariationSD=0.1;
		ACE_muzzleVelocities[]={935,977,998,1021,1040,1055,1350};
		ACE_barrelLengths[]={400,450,500,550,600,700,800};
	};
};
class cfgMods
{
	author="Hades";
	timepacked="";
};