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
			"Hades_UNSC_M6C",
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
	class Hades_apistol_UNSC_M6C_Base_F: Pistol_Base_F
	{
		author="Hades";
		scope=1;
		_generalMacro="Hades_apistol_UNSC_M6C_Base_F";
		magazines[]=
		{
			"Hades_M6C_Mag",
			"Hades_M6C_Mag_Tracer"
		};
		magazineWell[]=
		{
			"Hades_UNSC_M6C_Magwell"
		};

		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_PistolODST";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_PistolODST";
		Eye = "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		cursor = "OPTRE_M6B";
		hiddenSelections[] = {"camo","camo1","camo3"};
		hiddenSelectionsTextures[] = {"UNSC_F_Weapons\weapons\M6_data\m6c_slide_co.paa","UNSC_F_Weapons\weapons\M6_data\m6_details_co.paa","UNSC_F_Weapons\weapons\M6_data\m6_frame_co.paa"};
		reloadAction = "GestureReloadPistol";
		HUD_BulletInARows = 1;
		HUD_TotalPosibleBullet = 12;
		picture = "\OPTRE_Weapons\M6B\icons\m6b_icon.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";

		ACE_barrelTwist=177.8;
		ACE_barrelLength=95;
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
		magazineReloadSwitchPhase=0.8;
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_XMX_Library0";
		};
		maxZeroing=100;
		distanceZoomMin=0;
		distanceZoomMax=100;
		descriptionShort="Standard Issue M6C Magnum";
		muzzles[]=
		{
			"this"
		};
			discreteDistanceInitIndex=1;
	};
	class Hades_UNSC_M6C: Hades_apistol_UNSC_M6C_Base_F
	{
		type=2;
		author="Hades";
		_generalMacro="Hades_UNSC_M6C";
		baseWeapon="Hades_UNSC_M6C";
		scope=2;
		displayName="[Hades] M6C";
		model="\UNSC_F_Weapons\weapons\UNSC_M6C.p3d";
		mass=40;
		picture="\UNSC_F_Weapons\weapons\UI\M6c_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\M6c_UI.paa";
		muzzles[]=
		{
			"this"
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
					"optre_MA5Suppressor",
					"19_UNSC_MA5A_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"optre_bmr_laser",
					"acc_flashlight",
					"19_UNSC_MA5A_LAM",
				};
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.15;
		aimTransitionSpeed=0.95;
		dexterity=5;
			recoil="recoil_mx";
		maxZeroing=100;
		class ItemInfo
		{
			priority=.1;
		};
		descriptionShort="Standard Issue M6C Magnum";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
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
				soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
			reloadTime = 0.167;
			dispersion = 0.005;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 25;
			midRangeProbab = 0.2;
			maxRange = 50;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		};
	};
};
class cfgMagazineWells
{
	class Hades_UNSC_M6C_Magwell 
	{
		UNSC_127x40_12rnd[] = 
		{
			"Hades_M6C_Mag",
			"Hades_M6C_Mag_Tracer"
		};
	};
};
class CfgMagazines
{
    class CA_Magazine;
	class Hades_M6C_Mag: CA_Magazine
	{
		author="Hades";
		scope=2;
		displayName="24Rnd 12.7x40mm Magazine";
		ammo="Hades_127x40_Base";
		count=24;
		initSpeed=750;
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
    class Hades_M6C_Mag_Tracer: Hades_M6C_Mag 
    {
	displayName="24Rnd 12.7x40mm Magazine (Tracer)";
	count=24;
	mass=5;
	tracersEvery=1;
	lastRoundsTracer=32;
	};
};
class CfgAmmo
{
    class BulletBase;
    class Hades_127x40_Base: BulletBase
	{
		caliber=8;
		hit=20;
		indirectHit=0;
		indirectHitRange=1;
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
};