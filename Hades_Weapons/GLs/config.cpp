class CfgPatches
{
	class Hades_GLs
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
			"Hades_GRL_45",
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
class GunParticles;
class arifle_Mk20_F;
class Pistol_Base_F;
class WeaponSlotsInfo;
class UGL_F;
class CfgWeapons
{	
class Rifle_Base_F;
class Hades_GRL_45: Rifle_Base_F
	{
		optics=0;
		scope=2;
		scopeArsenal=2;
		ace_overheating_mrbs=3000000000;
		ACE_Overheating_SlowdownFactor=0;
		ACE_Overheating_JamChance=0;
		ACE_Overheating_Dispersion=0;
		ACE_overheating_allowSwapBarrel=0;
		author="Hawkins";
		model="\MA_Weapons\data\GRL_45.p3d";
		displayName="[Hades] GRL-45";
		descriptionShort="Rotary Grenade Launcher";
		cursor="GL_Crosshair";
		picture="\MA_Weapons\data\GRL45\UI\GRL45_icon_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"MA_Weapons\data\anim\GRL45.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\MA_Weapons\data\GRL45\GL_Black_co.paa",
			"\MA_Weapons\data\GRL45\GL_Black2_co.paa",
			"\MA_Weapons\data\GRL45\GL_Sight_ca.paa"
		};
		ace_clearJamAction="GestureReloadGRL45";
		reloadAction="GestureReloadGRL45";
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",
			0.31622776,
			1,
			5
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",
			0.56234133,
			1,
			10
		};
		magazines[]=
		{
			"Hades_GRL45_6rnd_HEAT",
			"Hades_GRL45_6rnd_Smoke",
			"Hades_GRL45_6rnd_Smoke_Blue",
			"Hades_GRL45_6rnd_Smoke_Purple",
			"Hades_GRL45_6rnd_Smoke_Green",
			"Hades_GRL45_6rnd_Smoke_Red",
		};
		magazineWell[]=
		{
			"Hades_GRL45",
			"UGL_40x36",
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
					1,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"MA_Weapons\data\GRL45\GRL45_Fire.ogg",
					1.5,
					1,
					1800
				};
				begin2[]=
				{
					"MA_Weapons\data\GRL45\GRL45_Fire.ogg",
					1.5,
					1.015,
					1800
				};
				begin3[]=
				{
					"MA_Weapons\data\GRL45\GRL45_Fire.ogg",
					1.5,
					0.985,
					1800
				};
				begin4[]=
				{
					"MA_Weapons\data\GRL45\GRL45_Fire.ogg",
					1.5,
					1.01,
					1800
				};
				begin5[]=
				{
					"MA_Weapons\data\GRL45\GRL45_Fire.ogg",
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
			};
			reloadTime=0.075000003;
			dispersion=0.0002909;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		ffMagnitude=0.1;
		ffFrequency=1;
		ffCount=1;
		dispersion=0.0070000002;
		cartridgePos="";
		cartridgeVel="";
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.0099999998,
			1
		};
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				opticsDisplayName="";
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				discretefov[]={};
				discreteDistance[]={50};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				discreteInitIndex=0;
				cameraDir="";
			};
			class Indirect
			{
				opticsID=2;
				opticsDisplayName="";
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				visionMode[]={};
				discretefov[]={};
				cameraDir="opticview";
				memoryPointCamera="GRL_eye100m";
				discreteDistance[]={100,150,200,250,300,350,400};
				discreteDistanceCameraPoint[]=
				{
					"GRL_100m",
					"GRL_150m",
					"GRL_200m",
					"GRL_250m",
					"GRL_300m",
					"GRL_350m",
					"GRL_400m"
				};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=400;
				discreteInitIndex=0;
			};
		};
		aimTransitionSpeed=0.69999999;
		magazineReloadSwitchPhase=0.5;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		useModelOptics=0;
		useExternalOptic=0;
		muzzlePos="usti_granatometu";
		muzzleEnd="konec_granatometu";
		class CowsSlot{};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles: GunParticles
		{
			class effect1
			{
				effectName="GrenadeLauncherCloud";
				positionName="usti_granatometu";
				directionName="konec_granatometu";
			};
		};
	};
};

class cfgMagazineWells
{
	class Hades_GRL45 
	{
		Hades_GRL45_6rnd_HEAT[] = 
		{
			"Hades_GRL45_6rnd_HEAT",
			"Hades_GRL45_6rnd_Smoke",
			"Hades_GRL45_6rnd_Smoke_Blue",
			"Hades_GRL45_6rnd_Smoke_Purple",
			"Hades_GRL45_6rnd_Smoke_Green",
			"Hades_GRL45_6rnd_Smoke_Red",
		};
	};
	class UGL_40x36;
};
class CfgMagazines
{
    class 1Rnd_HE_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class Hades_GRL45_6rnd_HEAT: 1Rnd_HE_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Hawkins";
		ammo="Hades_HEAT";
		displayName="Hades 6Rnd HEAT";
		displayNameShort="HEAT";
		descriptionshort="6 Round High Explosive Dual Purpose Grenades";
		count=6;
		mass=10;
	};
	class Hades_GRL45_6rnd_Smoke: 1Rnd_SmokeRed_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Hawkins";
		ammo="Hades_40mm_Smoke";
		displayName="Hades 6Rnd Smoke (White)";
		displayNameShort="SMOKE";
		descriptionshort="6 Round Smoke Grenades";
		count=6;
		mass=10;
	};
	class Hades_GRL45_6rnd_Smoke_Blue: 1Rnd_SmokeRed_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Hawkins";
		ammo="Hades_40mm_SmokeBlue";
		displayName="Hades 6Rnd Smoke (Blue)";
		displayNameShort="SMOKE";
		descriptionshort="6 Round Smoke Grenades";
		count=6;
		mass=10;
	};
	class Hades_GRL45_6rnd_Smoke_Purple: 1Rnd_SmokeRed_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Hawkins";
		ammo="Hades_40mm_SmokePurple";
		displayName="Hades 6Rnd Smoke (Purple)";
		displayNameShort="SMOKE";
		descriptionshort="6 Round Smoke Grenades";
		count=6;
		mass=10;
	};
	class Hades_GRL45_6rnd_Smoke_Green: 1Rnd_SmokeRed_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Hawkins";
		ammo="Hades_40mm_SmokeGreen";
		displayName="Hades 6Rnd Smoke (Green)";
		displayNameShort="SMOKE";
		descriptionshort="6 Round Smoke Grenades";
		count=6;
		mass=10;
	};
	class Hades_GRL45_6rnd_Smoke_Red: 1Rnd_SmokeRed_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Hawkins";
		ammo="Hades_40mm_SmokeRed";
		displayName="Hades 6Rnd Smoke (Red)";
		displayNameShort="SMOKE";
		descriptionshort="6 Round Smoke Grenades";
		count=6;
		mass=10;
	};
};
class CfgAmmo 
{
	class M319_HEAT;
	class G_40mm_Smoke;
	class G_40mm_SmokeBlue;
	class G_40mm_SmokePurple;
	class G_40mm_SmokeRed;
	class G_40mm_SmokeGreen;
	class Hades_HEAT: M319_HEAT 
	{
    	model = "OPTRE_weapons\gl\mag_hedp.p3d";
		ACE_damageType="explosive";
		ace_frag_enabled=1;
		ace_frag_classes[]=
		{
			"ace_frag_medium_HD"
		};
		ace_frag_metal=2000;
		ace_frag_charge=450;
		ace_frag_gurney_c=2830;
		ace_frag_gurney_k="1/2";
		ace_vehicle_damage_incendiary=0.80000001;
		hit=450;
		indirectHit=200;
		explosive=0.60000001;
		indirectHitRange=3;
		caliber=6;
		warheadName="TandemHEAT";
		ace_frag_force=1;
		ace_rearm_caliber=39;
		class CamShakeHit
		{
			power=40;
			duration=0.40000001;
			frequency=20;
			distance=2;
		};
  	};
	class Hades_40mm_Smoke: G_40mm_Smoke
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_White";
	};
	class Hades_40mm_SmokeBlue: G_40mm_SmokeBlue
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Blue";
	};
	class Hades_40mm_SmokePurple: G_40mm_SmokePurple
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Purple";
	};
	class Hades_40mm_SmokeRed: G_40mm_SmokeRed
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Red";
	};
	class Hades_40mm_SmokeGreen: G_40mm_SmokeGreen
	{
		deflecting=5;
		explosive=1;
		simulation="shotShell";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Green";
	};
};