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
			"Hades_UNSC_MA5A",
            "Hades_UNSC_MA5A_GL",
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
	class Hades_arifle_UNSC_MA5A_gl_Base_F: arifle_Mk20_F
	{
		author="HadesAux";
		scope=1;
		_generalMacro="Hades_arifle_UNSC_MA5A_gl_Base_F";
		magazines[]=
		{
			"Hades_MA5A_Mag",
			"Hades_MA5A_Mag_Tracer",
		};
		magazineWell[]=
		{
			"Hades_MA5A_Magwell"
		};
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=60;
		cursor="OPTRE_MA5";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
	
		ACE_barrelTwist=177.8;
		ACE_barrelLength=407;
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
		recoil="recoil_trg20";
		maxZeroing=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
				
			//		"optre_MA5Suppressor",
					"19_UNSC_ma5a_Suppressor",
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
					"19_UNSC_MA5A_LAM"
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		distanceZoomMin=0;
		distanceZoomMax=100;
		descriptionShort="Standard Issue MA5A";
		handAnim[] = {
		"OFP2_ManSkeleton",
		"\UNSC_F_Weapons\weapons\animations\ma5a_standing.rtm",
		"Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		class 	GL_3GL_F: UGL_F
		{
			displayName="$STR_A3_cfgweapons_gl0";
			descriptionShort="$STR_A3_cfgweapons_gl1";
			useModelOptics=true;
			useExternalOptic=false;
			magazines[]=
			{
				"Hades_GRL45_3rnd_HEAT",
				"Hades_GRL45_3rnd_Smoke",
				"Hades_GRL45_3rnd_Smoke_Blue",
				"Hades_GRL45_3rnd_Smoke_Purple",
				"Hades_GRL45_3rnd_Smoke_Green",
				"Hades_GRL45_3rnd_Smoke_Red",
				"ACE_HuntIR_M203",
			};
			magazineWell[]=
			{
				"Hades_GL_3rnd_Magwell"
			};
			cameraDir="OP_look";
			discreteDistance[]={100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye2",
				"OP_eye3",
				"OP_eye4",
				"OP_eye5",
				"OP_eye6",
				"OP_eye8"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=2;
		aiDispersionCoefX=2;
	};
	class Hades_UNSC_MA5A: Hades_arifle_UNSC_MA5A_gl_Base_F
	{
		author="HadesAux";
		_generalMacro="Hades_UNSC_MA5A";
		baseWeapon="Hades_UNSC_MA5A";
		scope=2;
		displayName="[Hades] MA5A";
		model="\UNSC_F_Weapons\weapons\UNSC_MA5A.p3d";
		mass=60;
		reloadAction="GestureReloadTRG";
		picture="\UNSC_F_Weapons\weapons\UI\MA5A_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\MA5A_UI.paa";
		handAnim[] = {
		"OFP2_ManSkeleton",
		"\UNSC_F_Weapons\weapons\animations\ma5a_standing.rtm",
		"Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm"
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
					"19_UNSC_ma5a_Suppressor",
					"19_UNSC_ma5b_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					"19_UNSC_MA5A_Smartlink",
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
				//	"optre_bmr_laser",
					//"acc_flashlight"
					"19_UNSC_MA5A_LAM"
				};
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.4;
		aimTransitionSpeed=0.75;
		dexterity=3;
		recoil="recoil_trg20";
		maxZeroing=800;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="UNSC Standard issue MA5A infantry Assault Rifle";
		modes[] = {"Single","FullAuto","close","short","medium","far"};
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
				soundSetShot[] = {"OPTRE_MA5B_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B1.ogg","db10",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B2.ogg","db10",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B3.ogg","db10",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B4.ogg","db10",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B5.ogg","db10",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B6.ogg","db10",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B7.ogg","db10",1,2000};
				soundBegin[] = {"begin1",0.16,"begin2",0.14,"begin3",0.14,"begin4",0.14,"begin5",0.14,"begin6",0.14,"begin7",0.14};
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
			reloadTime = 0.08;
			dispersion = 0.00075;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 150;
			midRangeProbab = 0.01;
			maxRange = 500;
			maxRangeProbab = 0.01;
		};
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
				soundSetShot[] = {"OPTRE_MA5B_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B1.ogg","db10",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B2.ogg","db10",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B3.ogg","db10",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B4.ogg","db10",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B5.ogg","db10",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B6.ogg","db10",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B7.ogg","db10",1,2000};
				soundBegin[] = {"begin1",0.16,"begin2",0.14,"begin3",0.14,"begin4",0.14,"begin5",0.14,"begin6",0.14,"begin7",0.14};
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
			reloadTime = 0.08;
			dispersion = 0.001;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.4;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.4;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.4;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.6;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 200;
			minRangeProbab = 0.4;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
	};
	class Hades_UNSC_MA5A_GL: Hades_arifle_UNSC_MA5A_gl_Base_F
	{
		author="HadesAux";
		_generalMacro="Hades_UNSC_MA5A_GL";
		baseWeapon="Hades_UNSC_MA5A_GL";
		scope=2;
		displayName="[Hades] MA5A UGL";
		model="\UNSC_F_Weapons\weapons\UNSC_MA5A_gl.p3d";
		mass=60;
		reloadAction="GestureReloadTRG";
		picture="\UNSC_F_Weapons\weapons\UI\MA5A_gl_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\MA5A_gl_UI.paa";
		handAnim[] = {
		"OFP2_ManSkeleton",
		"\UNSC_F_Weapons\weapons\animations\ma5a_standing.rtm",
		"Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm"
		};
		muzzles[]=
		{
			"this",
			"GL_3GL_F"
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
				//	"optre_MA5Suppressor",
					"19_UNSC_ma5a_Suppressor",
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					"19_UNSC_MA5A_Smartlink",
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
				//	"optre_bmr_laser",
					//"acc_flashlight"
					"19_UNSC_MA5A_gl_LAM"
				};
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.40000001;
		aimTransitionSpeed=0.75;
		dexterity=2;
		recoil="recoil_trg20";
		maxZeroing=800;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="UNSC Standard issue MA5A infantry Assault Rifle";
		modes[] = {"Single","FullAuto","close","short","medium","far"};
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
				soundSetShot[] = {"OPTRE_MA5B_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B1.ogg","db10",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B2.ogg","db10",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B3.ogg","db10",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B4.ogg","db10",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B5.ogg","db10",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B6.ogg","db10",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B7.ogg","db10",1,2000};
				soundBegin[] = {"begin1",0.16,"begin2",0.14,"begin3",0.14,"begin4",0.14,"begin5",0.14,"begin6",0.14,"begin7",0.14};
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
			reloadTime = 0.08;
			dispersion = 0.00075;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.4;
		};
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
				soundSetShot[] = {"OPTRE_MA5B_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B1.ogg","db10",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B2.ogg","db10",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B3.ogg","db10",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B4.ogg","db10",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B5.ogg","db10",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B6.ogg","db10",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5B7.ogg","db10",1,2000};
				soundBegin[] = {"begin1",0.16,"begin2",0.14,"begin3",0.14,"begin4",0.14,"begin5",0.14,"begin6",0.14,"begin7",0.14};
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
			reloadTime = 0.08;
			dispersion = 0.0001;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.4;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.4;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.4;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.6;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 200;
			minRangeProbab = 0.4;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
	};
};
class cfgMagazineWells
{
	class Hades_MA5A_Magwell 
	{
		UNSC_762x51_32rnd[] = 
		{
			"Hades_MA5A_Mag",
			"Hades_MA5A_Mag_Tracer",
		};
	};
    class Hades_GL_3rnd_Magwell
    {
		Hades_GL_3rnd_HEAT[]=
		{
            "Hades_GRL45_3rnd_HEAT",
            "Hades_GRL45_3rnd_Smoke",
            "Hades_GRL45_3rnd_Smoke_Blue",
            "Hades_GRL45_3rnd_Smoke_Purple",
            "Hades_GRL45_3rnd_Smoke_Green",
            "Hades_GRL45_3rnd_Smoke_Red",
            "ACE_HuntIR_M203",
		};
    };
};
class CfgMagazines
{
    class CA_Magazine;
	class Hades_MA5A_Mag: CA_Magazine
	{
		author="HadesAux";
		scope=2;
		displayName="60Rnd 7.62X51mm Magazine";
		ammo="Hades_762x51_Base";
		count=60;
		initSpeed=830;
		//picture="\19thBR\Addons\BR\weapons\UI\BR55_mag_icon.paa";
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_36Rnd_95x45_br_55";
		mass=50;
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
    class Hades_MA5A_Mag_Tracer: Hades_MA5A_Mag 
    {
	displayName="60Rnd 7.62x51mm Magazine (Tracer)";
	count=60;
	mass=50;
	tracersEvery=1;
	lastRoundsTracer=32;
	};
    class 1Rnd_HE_Grenade_shell;
    class 1Rnd_SmokeRed_Grenade_shell;
    class Hades_GRL45_3rnd_HEAT: 1Rnd_HE_Grenade_shell
    {
        scope=2;
        scopeArsenal=2;
        author="HadesAux";
        ammo="Hades_HEAT";
        displayName="Hades 3Rnd HEAT";
        displayNameShort="HEAT";
        descriptionshort="6 Round High Explosive Dual Purpose Grenades";
        count=3;
        mass=10;
    };
    class Hades_GRL45_3rnd_Smoke: 1Rnd_SmokeRed_Grenade_shell
    {
        scope=2;
        scopeArsenal=2;
        author="HadesAux";
        ammo="Hades_40mm_Smoke";
        displayName="Hades 3Rnd Smoke (White)";
        displayNameShort="SMOKE";
        descriptionshort="6 Round Smoke Grenades";
        count=3;
        mass=10;
    };
    class Hades_GRL45_3rnd_Smoke_Blue: 1Rnd_SmokeRed_Grenade_shell
    {
        scope=2;
        scopeArsenal=2;
        author="HadesAux";
        ammo="Hades_40mm_SmokeBlue";
        displayName="Hades 3Rnd Smoke (Blue)";
        displayNameShort="SMOKE";
        descriptionshort="6 Round Smoke Grenades";
        count=3;
        mass=10;
    };
    class Hades_GRL45_3rnd_Smoke_Purple: 1Rnd_SmokeRed_Grenade_shell
    {
        scope=2;
        scopeArsenal=2;
        author="HadesAux";
        ammo="Hades_40mm_SmokePurple";
        displayName="Hades 3Rnd Smoke (Purple)";
        displayNameShort="SMOKE";
        descriptionshort="6 Round Smoke Grenades";
        count=3;
        mass=10;
    };
    class Hades_GRL45_3rnd_Smoke_Green: 1Rnd_SmokeRed_Grenade_shell
    {
        scope=2;
        scopeArsenal=2;
        author="HadesAux";
        ammo="Hades_40mm_SmokeGreen";
        displayName="Hades 3Rnd Smoke (Green)";
        displayNameShort="SMOKE";
        descriptionshort="6 Round Smoke Grenades";
        count=3;
        mass=10;
    };
    class Hades_GRL45_3rnd_Smoke_Red: 1Rnd_SmokeRed_Grenade_shell
    {
        scope=2;
        scopeArsenal=2;
        author="HadesAux";
        ammo="Hades_40mm_SmokeRed";
        displayName="Hades 3Rnd Smoke (Red)";
        displayNameShort="SMOKE";
        descriptionshort="6 Round Smoke Grenades";
        count=3;
        mass=10;
    };
};
class CfgAmmo
{
    class BulletBase;
    class Hades_762x51_Base: BulletBase
	{
        hit = 14;                        // Base hit value for standard ball
        caliber = 4;                     // Moderate armor penetration
        typicalSpeed = 830;              // Standard muzzle velocity
        airFriction = -0.0012;           // Drag
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white"; // Tracer effect
        tracerScale = 1.2;
        tracerStartTime = 0;
        tracerEndTime = 1.6;
        nvgOnly = 0;
        cartridge = "FxCartridge_762";   // Shell casing effect
        ACE_caliber = 7.62;              // Real-world bullet diameter in mm
        ACE_bulletLength = 28;           // Bullet length in mm
        ACE_bulletMass = 9.5;            // Mass in grams
        ACE_ballisticCoefficients[] = {0.275};
        ACE_dragModel = 1;
	};
};