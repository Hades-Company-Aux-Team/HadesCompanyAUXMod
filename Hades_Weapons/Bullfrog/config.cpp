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
            "Hades_Bulldog",
		};
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class OPTRE_MuzzleSlot;
class OPTRE_Pointers;
class OPTRE_CowsSlot_Rail;
class CfgWeapons
{
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class Single;
		class single_far_optics2;
		class single_medium_optics1;
		class FullAuto;
		class fullauto_medium;
	};
	class Hades_Bulldog: arifle_Mk20_F
	{
		scope=2;
		baseWeapon="Hades_Bulldog";
		displayName="[Hades] Bulldog";
		descriptionShort="Combat Shotgun";
		description="The CQS48 Bulldog is a pump-action combat shotgun which fires 12-gauge shells from an 7-round rotating drum";
		pictureWire="\OPTRE_Weapons\bulldog\data\wire\bulldog.paa";
		pictureMjolnirHud="\OPTRE_Suit_Scripts\textures\weaponIcons\Shotguns\Bulldog_icon.paa";
		model="\OPTRE_Weapons\bulldog\bulldog_auto.p3d";
		cursor="OPTRE_M45";
		hiddenSelections[]=
		{
			"camoBody",
			"camoDecal"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons\bulldog\data\Body_Black.paa",
			"\OPTRE_Weapons\bulldog\data\decal\cqs48a\DecalSheet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\OPTRE_Weapons\bulldog\data\body.rvmat",
			"\OPTRE_Weapons\bulldog\data\decal\cqs48a\decal.rvmat"
		};
		magazines[]=
		{
			"Hades_12Gauge_Mag",
			"Hades_12Gauge_Mag_Tracer",
			"Hades_12Gauge_Slug_Tracer"
		};
		magazineWell[]=
		{
			"Hades_Magwell_Bulldog",
		};
		reloadAction="WBK_Commando_Reload";
		picture="\OPTRE_Weapons\MA37K\icons\ma37k_icon.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\bulldog\data\anim\bulldog.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\bulldog\data\anim\bulldog_spartan.rtm"
		};
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=24;
		recoil="OPTRE_Recoil_Bulldog";
		class WeaponSlotsInfo
		{
			mass=40;
			class MuzzleSlot: OPTRE_MuzzleSlot
			{
				compatibleitems[]={};
			};
			class CowsSlot: OPTRE_CowsSlot_Rail
			{
				compatibleitems[]={};
			};
			class PointerSlot: OPTRE_Pointers
			{
				compatibleitems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Single_Medium",
			"FullAuto",
			"fullauto_medium",
			"fullauto_far"
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"",
					1,
					1,
					200
				};
				closure2[]=
				{
					"",
					1,
					1,
					200
				};
				soundClosure[]=
				{
					"closure1",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"OPTRE_Shotgun_SoundSet",
					"M320_Tail_SoundSet",
					"M320_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime="60/350";
			aiDispersionCoefX=1.5;
			aiDispersionCoefY=2.5;
			aiRateOfFire=1;
			aiRateOfFireDispersion=0.75;
			aiRateOfFireDistance=215;
			maxRange=300;
			maxRangeProbab=0.15000001;
			midRange=215;
			midRangeProbab=0.80000001;
			minRange=175;
			minRangeProbab=0.1;
		};
		class Single_Medium: Single
		{
			showToPlayer=0;
			aiDispersionCoefX=1;
			aiDispersionCoefY=1.5;
			aiRateOfFire=1.25;
			aiRateOfFireDistance=350;
			maxRange=425;
			maxRangeProbab=0.15000001;
			midRange=350;
			midRangeProbab=0.80000001;
			minRange=215;
			minRangeProbab=0.1;
			burst="1 + round random 1";
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"",
					1,
					1,
					200
				};
				closure2[]=
				{
					"",
					1,
					1,
					200
				};
				soundClosure[]=
				{
					"closure1",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"OPTRE_Shotgun_SoundSet",
					"M320_Tail_SoundSet",
					"M320_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime="60/350";
			aiRateOfFireDistance=50;
			aiRateOfFire=0.5;
			maxRange=20;
			maxRangeProbab=0.15000001;
			midRange=10;
			midRangeProbab=0.80000001;
			minRange=0;
			minRangeProbab=0.1;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.55000001;
			aiRateOfFireDistance=75;
			maxRange=0;
			maxRangeProbab=0.44999999;
			midRange=25;
			midRangeProbab=0.94999999;
			minRange=75;
			minRangeProbab=0.44999999;
			burst="2 + round random 3";
		};
		class fullauto_far: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=120;
			maxRange=175;
			maxRangeProbab=0.44999999;
			midRange=115;
			midRangeProbab=0.94999999;
			minRange=55;
			minRangeProbab=0.25;
			burst="3 + round random 3";
		};
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
};
class cfgMagazineWells
{
	class Hades_Magwell_Bulldog
	{
		OPTRE_12Gauge_12Rnd[]=
		{
			"Hades_12Gauge_Mag",
			"Hades_12Gauge_Mag_Tracer",
			"Hades_12Gauge_slug_Tracer",
		};
	};
};
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class Hades_12Gauge_Mag: 20Rnd_762x51_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\bulldog\drum.p3d";
		modelSpecial="\OPTRE_Weapons\bulldog\drum.p3d";
		modelSpecialIsProxy=1;
		scope=2;
		displayname="24Rnd Bulldog Drum";
		displaynameshort="Standard";
		ammo="OPTRE_12Gauge_Pellets";
		count=24;
		initspeed=700;
		picture="\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort="12 Rounds of 12 Gauge Pellets";
		mass=20;
		hiddenSelections[]=
		{
			"camoBody"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Weapons\bulldog\data\Body_co.paa"
		};
	};
    class Hades_12Gauge_Mag_Tracer: Hades_12Gauge_Mag 
    {
		displayName="24Rnd Bulldog Drum (Tracer)";
		displaynameshort="Tracers";
		tracersEvery=1;
	};
    class Hades_12Gauge_slug_Tracer: Hades_12Gauge_Mag
	{
		displayname = "24Rnd Bulldog Drum (Slug)";
		displaynameshort = "Slug";
		ammo = "Hades_UNSC_12Gauge_Slugs";
		tracersEvery=1;
	};
};
class CfgAmmo
{
	class BulletBase;
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Slug_NoCartridge;
    class Hades_762x51_AP: BulletBase
	{
		caliber=8;
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=650;
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
		initspeed=650;
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
    class Hades_UNSC_12Gauge: B_12Gauge_Pellets_Submunition
    {
    	cartridge = "FxCartridge_slug";
    	submunitionAmmo = "UNSC_shotgun_pellet";
    	triggerTime = 0;
    	submunitionConeType[]={"random", 12};
    	submunitionConeAngle=1;
    };
    class Hades_UNSC_12Gauge_Slugs: Hades_762x51_AP
    {
    	cartridge = "FxCartridge_slug";
    	caliber = 6;
    	hit = 120;
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