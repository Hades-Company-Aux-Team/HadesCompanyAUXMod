class CfgPatches
{
	class Hades_Weapons
	{
		units[]={};
		weapons[]=
		{
			"Hades_Etilka",
			"Hades_Shield_Etilka"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Weapons"
		};
		addonRootClass="OPTRE_Weapons";
		magazines[]={};
	};
};
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class cfgWeapons
{
	class OPTRE_M247H_Etilka;
	class Hades_Etilka: OPTRE_M247H_Etilka
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		displayName="[Hades] Etilka";
		descriptionShort="$STR_OPTRE_Weapons_M247H_HMG_Etilka_shortDescription";
		model="\OPTRE_Weapons\Etilka\M247H_Jorge.p3d";
		cursor="OPTRE_M41";
		magazines[]=
		{
			"Hades_1000Rnd_Etilka_Ball",
			"Hades_500Rnd_Etilka_HE"
		};
		magazineWell[]=
		{
			"Hades_Magwell_Etilka"
		};
		baseWeapon="Hades_Etilka";
		picture="\OPTRE_Weapons\Etilka\data\etika_icon.paa";
		pictureMjolnirHud="\OPTRE_Suit_Scripts\textures\weaponIcons\MachineGuns\Etilka_icon.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Etilka\data\anim\Chainsaw.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\Etilka\data\anim\Chainsaw_Spartan.rtm"
		};
		class WeaponSlotsInfo
		{
			mass=250;
			class MuzzleSlot: OPTRE_MuzzleSlot
			{
			};
			class CowsSlot: OPTRE_CowsSlot_Rail
			{
			};
			class PointerSlot: OPTRE_Pointers
			{
			};
			class UnderBarrelSlot: OPTRE_UnderBarrelSlot_rail
			{
			};
		};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
		};
		reloadAction="WBK_Etilka_Mag_RightSide_reload";
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
				soundSetShot[]=
				{
					"OPTRE_EtilkaMG_SoundSet",
					"SMGVermin_Tail_SoundSet",
					"Zafir_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			dispersion=0.00085;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=1;
			displayName="$STR_DN_MODE_FULLAUTO";
			textureType="fullAuto";
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far: medium
		{
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\etilka\data\m247_co.paa",
			"OPTRE_Weapons\etilka\data\mag_co.paa",
			"OPTRE_Weapons\etilka\data\heavyattach_co.paa"
		};
	};
	class Hades_Shield_Etilka: Hades_Etilka
	{
		displayName="[Hades] Etilka (Shielded)";
		model="OPTRE_Weapons\Etilka\M247H_Jorge_Shield.p3d";
		baseWeapon="Hades_Shield_Etilka";
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class OPTRE_Etilka_model
		{
			label="Etilka";
			author="A2S";
			options[]=
			{
				"variant"
			};
			class variant
			{
				alwaysSelectable=1;
				label="Volor";
				values[]=
				{
					"noShield",
					"shield"
				};
				class noShield
				{
					label="No Shield";
				};
				class shield
				{
					label="Shield";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Hades_Etilka
		{
			model="OPTRE_Etilka_model";
			variant="noShield";
		};
		class Hades_Shield_Etilka: Hades_Etilka
		{
			variant="shield";
		};
	};
};
class cfgMagazineWells
{
	class Hades_Magwell_Etilka 
	{
		Hades_Etilka_Ball_Ammo[] = 
		{
			"Hades_500Rnd_Etilka_HE",
			"Hades_1000Rnd_Etilka_Ball",
		};
	};
};
class cfgMagazines
{
	class OPTRE_100Rnd_762x51_Box;
	class Hades_500Rnd_Etilka_HE: OPTRE_100Rnd_762x51_Box
	{
		dlc="OPTRE";
		displayName="Etilka Ammo Box (HE)";
		displayNameShort="12.7x99 HE";
		ammo="Hades_Etilka_HE_Ammo";
		initSpeed=900;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=500;
		mass=320;
		descriptionshort="500 Round HE Box Magazine";
	};
	class Hades_1000Rnd_Etilka_Ball: Hades_500Rnd_Etilka_HE
	{
		dlc="OPTRE";
		displayName="Etilka Ammo Box (Ball)";
		displayNameShort="12.7x99";
		ammo="Hades_Etilka_Ball_Ammo";
		initSpeed=900;
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=1000;
        mass=640;
		descriptionshort="1000 Round Box Magazine";
	};
};
class CfgAmmo
{
    class B_127x99_Ball;
    class Hades_Etilka_Ball_Ammo: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerStartTime=0;
		tracerEndTime=10;
		caliber=8;
		aiAmmoUsageFlags="64 + 128 + 256";
		cost=15;
		airFriction=-0.00036000001;
		hit=50;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=1215;
		tracerScale=1.3;
	};
    class Hades_Etilka_HE_Ammo: Hades_Etilka_Ball_Ammo
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		aiAmmoUsageFlags="64 + 128 + 256";
		hit=30;
		indirectHit=8;
		indirectHitRange=1.5;
		cost=20;
		caliber=2;
		typicalSpeed=900;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00058678997;
		tracerScale=1.3;
		explosive=0.80000001;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		explosionSoundEffect="DefaultExplosion";
	};
};
