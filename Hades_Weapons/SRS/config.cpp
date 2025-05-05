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
            "Hades_UNSC_SRS99",
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
	class srifle_gm6_F;
	class Hades_arifle_19_UNSC_SRS99AM_Base_F: srifle_gm6_F
	{
		author="Hades Aux";
		scope=1;
		_generalMacro="arifle_19_UNSC_SRS99AM_Base_F";
		magazines[]=
		{
			"Hades_MA5A_SRS_APFSDS_Mag",
			"Hades_MA5A_SRS_APFSDS_Mag_tracer",
			"Hades_MA5A_SRS_HEAP_Mag",
			"Hades_MA5A_SRS_HEAP_Mag_Tracer",
		};
		magazineWell[]=
		{
			"Hades_UNSC_SRS99_Magwell"
		};

		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_Snipor";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_Snipor";
		Eye = "OPTRE_ODST_EYE_AmmoCount_Snipor";
		HUD_BulletInARows=4;
		HUD_TotalPosibleBullet=4;
		cursor = "OPTRE_SRS99";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Sniper\SNIPER.paa";

		ACE_barrelTwist=400;
		ACE_barrelLength=1000;
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
		reloadAction = "WBK_SRS99C_Reload";
		maxZeroing=20000;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{

			//		"optre_MA5Suppressor",
			//		"19_UNSC_MA5A_Suppressor"
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
				//	"19_UNSC_BR55_LAM"
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
		descriptionShort="Standard Issue SRS99 Anti-Material Rifle";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\UNSC_F_Weapons\weapons\animations\SRS_standing.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\srs99D_Spartan_handpos.rtm"
		};
	};
	class OPAEX_SRS99AM_Scope {
	    idd = 8493;
	    movingEnable = 1;
	    duration = 9999999;
	    fadein = 0;
	    fadeout = 0;
	    onLoad = "uiNamespace setVariable ['OPAEX_SRS99AM_Scope',_this select 0]; ['SRS99AM_scope_display',player] spawn OPAEX_19TH_fnc_CounterAddHandler;";
	    onUnLoad = "uinamespace setVariable ['OPAEX_SRS99AM_Scope', displayNull]";

	    class ControlsBackground {
	        class AmmoCounterCompassImage {
	            idc = 3400;
	            moving = 1;
	            type = 0;
	            style = "48 + 2048";
	            x = 0;
	            y = 0;
	            w = 1;
	            h = 1;
	            font = "TahomaB";
	            sizeEx = 8;
	            colorBackground[] = {0, 0, 0, 0};
	            colorText[] = {1, 1, 1, 1};
	            text = "unsc_f_weapons\weapons\ar_data\compass_ca.paa";
	            lineSpacing = 1;
	        };
	    };

	    class controls {
	        //Empty.
	    };
	};
	class Hades_UNSC_SRS99: Hades_arifle_19_UNSC_SRS99AM_Base_F
	{
		author="19th Fleet Mod Team";
		_generalMacro="Hades_UNSC_SRS99";
		baseWeapon="Hades_UNSC_SRS99";
		scope=2;
		displayName="[Hades] SRS99";
		model="\UNSC_F_Weapons\weapons\UNSC_SRS99AM.p3d";
		mass=300;
		//reloadAction="GestureReloadTRG";
		reloadAction = "WBK_SRS99C_Reload";
		picture="\UNSC_F_Weapons\weapons\UI\srs99_UI.paa"; //replace me
		UiPicture="\UNSC_F_Weapons\weapons\UI\srs99_ui.paa"; //replace me
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\UNSC_F_Weapons\weapons\animations\SRS_standing.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\srs99D_Spartan_handpos.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		weaponInfoType = "RscWeaponZeroing";
		modelOptics[]=
		{
			"\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"
		};
		opticType=1;
		optics=1;
		opticsID=1;
		useModelOptics=1;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.25;
		opticsZoomInit=0.25;
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		discretefov[]={0.25,0.050000001,0.025,0.0099999998};
		discreteinitIndex=0;
		discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
		discreteDistanceInitIndex=1;
		distanceZoomMin=100;
		distanceZoomMax=2000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=300;
			class MuzzleSlot: MuzzleSlot
			{
				inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
					//		"optre_MA5Suppressor",
					//		"19_UNSC_BR55_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					"19_UNSC_srs99am_scope",
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		inertia=1.25;
		aimTransitionSpeed=1.2;
		dexterity=1;
		maxZeroing=3000;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="UNSC Standard issue SRS99 infantry Anti-Material Rifle";
		modes[] = {"Single"};
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
			class StandardSound: BaseSoundModeType //replace meeeeeeeeeeee
			{

							begin1[] = {"\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_1.ogg","db10",1,2000};
							begin2[] = {"\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_3.ogg","db10.5",1,2000};
							begin3[] = {"\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_4.ogg","db10",1,2000};
							begin4[] = {"\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_2.ogg","db10.5",1,200};
							soundBegin[] = {"begin1",0.14,"begin2",0.14,"begin3",0.14,"begin4",0.14};
							class SoundTails
							{
								class TailForest
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
										1,
										1,
										2000
									};
									frequency=1;
									volume="(1-interior/1.4)*forest";
								};
								class TailHouses
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
										5,
										1,
										2000
									};
									frequency=1;
									volume="(1-interior/1.4)*houses";
								};
								class TailInterior
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
										7,
										1,
										2000
									};
									frequency=1;
									volume="interior";
								};
								class TailMeadows
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
										6,
										1,
										2000
									};
									frequency=1;
									volume="(1-interior/1.4)*(meadows/2 max sea/2)";
								};
								class TailTrees
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
										6,
										1,
										2000
									};
									frequency=1;
									volume="(1-interior/1.4)*trees";
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
			reloadTime = 0.5;
			dispersion = 0.00002;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 2000;
			maxRangeProbab = 0.1;
		};

		aiDispersionCoefY = 1;
		aiDispersionCoefX = 1;
	};
};
class cfgMagazineWells
{
	class Hades_UNSC_SRS99_Magwell 
	{
		UNSC_145x114_4rnd[] = 
		{
			"Hades_MA5A_SRS_APFSDS_Mag",
			"Hades_MA5A_SRS_APFSDS_Mag_tracer",
			"Hades_MA5A_SRS_HEAP_Mag",
			"Hades_MA5A_SRS_HEAP_Mag_Tracer"
		};
	};
};

//Made the Mass for the mags 10 instead of 5

class CfgMagazines
{
    class CA_Magazine;
	class Hades_MA5A_SRS_APFSDS_Mag: CA_Magazine
	{
		author="Hades Aux";
		scope=2;
		displayName="4Rnd 14.5x114mm APFSDS";
		ammo="Hades_145x114_APFSDS";
		count=4;
		initSpeed=1800;
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_4Rnd_145x114_srs99_apfsds";
		mass=20;
		ace_isbelt=0;
		ace_attachable=0;
		ace_placeable=0;
		ace_setupobject=0;
		ace_delaytime=0;
		ace_triggers=0;
		ace_magazines_forcemagazinemuzzlevelocity=1;
		model="\OPTRE_Weapons\Ammo\BR55Ammo.p3d";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		lastRoundsTracer = 0;
	};
	class Hades_MA5A_SRS_APFSDS_Mag_tracer: Hades_MA5A_SRS_APFSDS_Mag
	{
		displayName="4Rnd 14.5x114mm APFSDS (Tracer)";
		descriptionShort="UNSC_CfgMagazines_4Rnd_145x114_srs99_apfsds_tracer";
		lastRoundsTracer = 4;
	};
    class Hades_MA5A_SRS_HEAP_Mag: Hades_MA5A_SRS_APFSDS_Mag
	{
		displayName="4Rnd 14.5x114mm HEAP";
		ammo="Hades_145x114_HEAP";
		count=4;
		initSpeed=1800;
	};
    class Hades_MA5A_SRS_HEAP_Mag_Tracer: Hades_MA5A_SRS_HEAP_Mag
	{
		displayName="4Rnd 14.5x114mm HEAP (Tracer)";
		lastRoundsTracer = 4;
	};
};
class CfgAmmo
{
    class BulletBase;
    class Hades_145x114_APFSDS: BulletBase
	{
	    caliber=12;
	    hit=100;
	    indirectHit=0;
	    indirectHitRange=0;
	    typicalSpeed=1800;
	    airFriction=-0.0001;
	    deflecting=0;
	    cartridge = "FxCartridge_127";
	    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	    tracerScale=3;
	    tracerStartTime=0.0;
	    tracerEndTime=8;
	    nvgOnly=0;
	    audibleFire=40;
	    visibleFire=3;
	    initspeed=1800;
	    visibleFireTime=3;
	    dangerRadiusBulletClose=7;
	    suppressionRadiusBulletClose=5;
	    dangerRadiusHit=20;
	    suppressionRadiusHit=15;
	    ACE_caliber=14.5;
	    ACE_bulletLength=50;
	    ACE_bulletMass=65;
	    ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};
	    ACE_ballisticCoefficients[]={0.92};
	    ACE_velocityBoundaries[]={};
	    ACE_standardAtmosphere="ICAO";
	    ACE_dragModel=1;
	    ACE_muzzleVelocityVariationSD=0.1;
	    ACE_muzzleVelocities[]={1235,1277,1298,1321,1340,1355,1450};
	    ACE_barrelLengths[]={400,450,500,550,600,700,1000};
    };
    class Hades_145x114_HEAP: BulletBase
    {
    	caliber=8;
    	hit=120;
    	indirectHit=10;
    	indirectHitRange=1;
    	typicalSpeed=1800;
    	airFriction=-0.0001;
    	deflecting=0;
    	cartridge = "FxCartridge_127";
    	model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    	tracerScale=4;
    	tracerStartTime=0.0;
    	tracerEndTime=8;
    	nvgOnly=0;
    	audibleFire=40;
    	visibleFire=3;
    	initspeed=1800;
    	visibleFireTime=3;
    	dangerRadiusBulletClose=7;
    	suppressionRadiusBulletClose=5;
    	dangerRadiusHit=20;
    	suppressionRadiusHit=15;
    	ACE_caliber=14.5;
    	ACE_bulletLength=50;
    	ACE_bulletMass=75;
    	ACE_ammoTempMuzzleVelocityShifts[]={-2.55,-2.47,-2.25,-2.1199999,-1.6799999,-1.28,-7.6399999,-1.3,0.58999997,1.51,2.6099999};
    	ACE_ballisticCoefficients[]={0.92};
    	ACE_velocityBoundaries[]={};
    	ACE_standardAtmosphere="ICAO";
    	ACE_dragModel=1;
    	ACE_muzzleVelocityVariationSD=0.1;
    	ACE_muzzleVelocities[]={1035,1077,1098,1121,1140,1155,1250};
    	ACE_barrelLengths[]={400,450,500,550,600,700,1000};
    };
};