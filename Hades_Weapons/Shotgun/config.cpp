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
			"Hades_UNSC_M90",
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
	
	enum
	{
		destructengine = 2,
		destructdefault = 6,
		destructwreck = 7,
		destructtree = 3,
		destructtent = 4,
		stabilizedinaxisx = 1,
		stabilizedinaxesxyz = 4,
		stabilizedinaxisy = 2,
		stabilizedinaxesboth = 3,
		destructno = 0,
		stabilizedinaxesnone = 0,
		destructman = 5,
		destructbuilding = 1
	};
	class Hades_arifle_UNSC_M90_Base_F: arifle_Mk20_F
	{
		author="Task Force Vargr Aux Mod";
		scope=1;
		_generalMacro="Hades_arifle_UNSC_M90_Base_F";
		magazines[]=
		{
			"Hades_8Gauge_Mag",
			"Hades_8Gauge_Mag_Tracer",
			"Hades_8Gauge_slug_tracer"
		};
		magazineWell[]=
		{
			"Hades_UNSC_M90_Magwell"
		};

		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_Shotgun";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_Shotgun";
		Eye = "OPTRE_EYE_HUD_AmmoCount_Shotgun";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=12;
		cursor="OPTRE_M45";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Shotgun\Shotgun.paa";

		ACE_barrelTwist=177.8;
		ACE_barrelLength=807;
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
		reloadAction = "WBK_HaloShotgun_Reload";
		reloadMagazineSound[] = {"\OPTRE_Wbk_WeaponImprovements\reload\shotgun_reload.ogg",2,1,25};
		recoil="recoil_gm6";
		maxZeroing=100;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{

					//"optre_MA5Suppressor"
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
				//	"OPTRE_M7_Sight",
				//	"UNSC_br_scope"
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
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		distanceZoomMin=0;
		distanceZoomMax=100;
		descriptionShort="Standard Issue M90";
		handAnim[] =
		{
		"OFP2_ManSkeleton",
		"\UNSC_F_Weapons\weapons\animations\m90_caws_standing.rtm",
		"Spartan_ManSkeleton",
		"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\benelli_Spartan.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		aiDispersionCoefY=2;
		aiDispersionCoefX=3;
	};
	class Hades_UNSC_M90: Hades_arifle_UNSC_M90_Base_F
	{
		author="Task Force Vargr Aux Mod";
		_generalMacro="Hades_UNSC_M90";
		baseWeapon="Hades_UNSC_M90";
		scope=2;
		displayName="[Hades] M90 CAWS";
		model="\UNSC_F_Weapons\weapons\UNSC_M90.p3d";
		mass=60;
		reloadAction = "WBK_HaloShotgun_Reload";
		reloadMagazineSound[] = {"\OPTRE_Wbk_WeaponImprovements\reload\shotgun_reload.ogg",2,1,25};
		//reloadAction="GestureReloadBR55";
		picture="\UNSC_F_Weapons\weapons\UI\M90_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\M90_UI.paa";
		handAnim[] =
		{
		"OFP2_ManSkeleton",
		"\UNSC_F_Weapons\weapons\animations\m90_caws_standing.rtm",
		"Spartan_ManSkeleton",
		"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\benelli_Spartan.rtm"
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
				//	"optre_MA5Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
				//	"UNSC_MA5A_Smartlink",
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.7;
		aimTransitionSpeed=0.69999999;
		dexterity=2;
		recoil="recoil_gm6";
		maxZeroing=100;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="UNSC Standard issue M90 Shotgun";
		modes[] = {"Single","close","short","medium","far"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
			};
			reloadTime = 0.5;
			dispersion = 0.001;
			recoil = "recoil_single_ksg";
			recoilProne = "recoil_single_prone_ksg";
			minRange = 1;
			minRangeProbab = 0.02;
			midRange = 50;
			midRangeProbab = 0.03;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class close: Single
		{
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 35;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 35;
			minRangeProbab = 0.05;
			midRange = 55;
			midRangeProbab = 0.7;
			maxRange = 75;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 75;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.6;
			maxRange = 125;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 125;
			minRangeProbab = 0.04;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 3;
	};
};
class cfgMagazineWells
{
		class Hades_UNSC_M90_Magwell 
	{
		UNSC_8ga_12rnd[] = 
		{
			"Hades_8Gauge_Mag",
			"Hades_8Gauge_Mag_Tracer",
			"Hades_8Gauge_slug_tracer"
		};
	};
};
class CfgMagazines
{
    class CA_Magazine;
	class Hades_8Gauge_Mag: CA_Magazine
	{
		author="HadesAux";
		scope=2;
		displayName="12Rnd 8 Gauge Buckshot";
		ammo="Hades_UNSC_8Gauge";
		count=12;
		initSpeed=500;
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_36Rnd_95x45_br_55";
		mass=10;
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
    class Hades_8Gauge_Mag_Tracer: Hades_8Gauge_Mag 
    {
	displayName="12Rnd 8 Gauge Buckshot (Tracer)";
	count=12;
	mass=10;
	tracersEvery=1;
	lastRoundsTracer=12;
	};
    class Hades_8Gauge_slug_tracer: Hades_8Gauge_Mag
	{
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope = 2;
		displayname = "12Rnd 8 Gauge Tracer Slug";
		displaynameshort = "8 Gauge Tracer Slug";
		ammo = "Hades_UNSC_8Gauge_Slugs";
		count = 12;
		initspeed = 500;
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort = "12 Rounds of 8 Gauge Tracer Slugs";
		mass = 22;
		lastRoundsTracer =12;
	};
};
class CfgAmmo
{
    class BulletBase;
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Slug_NoCartridge;
    class Hades_762x51_AP: BulletBase
	{
		caliber=12;
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=1000;
		airFriction=-0.0005;
		deflecting=0;
		cartridge="FxCartridge_762";
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=.8;
		tracerStartTime=0.0;
		tracerEndTime=8;
		nvgOnly=0;
		audibleFire=40;
		visibleFire=3;
		initspeed=1000;
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
    class UNSC_shotgun_pellet: Hades_762x51_AP
    {
    caliber=4;
    hit=20;
    initspeed=500;
    tracerScale=.2;
    ACE_ballisticCoefficients[]={0.13};
    tracerStartTime=0.0;
    tracerEndTime=.75;
    };
    class Hades_UNSC_8Gauge: B_12Gauge_Pellets_Submunition
    {
    	cartridge = "FxCartridge_slug";
    	submunitionAmmo = "UNSC_shotgun_pellet";
    	triggerTime = 0;
    	submunitionConeType[]={"random", 12};
    	submunitionConeAngle=1;
    };
    class Hades_UNSC_8Gauge_Slugs: Hades_762x51_AP
    {
    	cartridge = "FxCartridge_slug";
    	caliber = 6;
    	hit = 100;
    	typicalSpeed=550;
    	initspeed=550;
    	tracerScale=3;
    	visibleFire=3;
    	airFriction=-0.003;
    	nvgonly=0;
    	tracerStartTime=0.0;
    	tracerEndTime=3;
    	ACE_caliber=20;
    	ACE_bulletLength=60;
    	ACE_bulletMass=85.4;
    	ACE_ballisticCoefficients[]={0.23};
    };
};