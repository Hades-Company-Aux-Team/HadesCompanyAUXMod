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
			"Hades_UNSC_BR55_GL",
			"Hades_UNSC_BR55",
			"Hades_UNSC_BR55_HB",
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
	class Hades_arifle_UNSC_br55_gl_Base_F: arifle_Mk20_F
	{
		author="HadesAux";
		scope=1;
		_generalMacro="Hades_arifle_UNSC_br55_gl_Base_F";
		magazines[]=
		{
			"Hades_BR55_Mag",
			"Hades_BR55_Mag_Tracer",
		};
		magazineWell[]=
		{
			"Hades_BR55_Magwell"
		};

		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=36;
		cursor="OPTRE_BR55";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";

		ACE_barrelTwist=177.8;
		ACE_barrelLength=607;
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
		maxZeroing=1000;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{

					//"optre_MA5Suppressor",
					"19_UNSC_br55_Suppressor",
					"19_UNSC_br55L_Suppressor"
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
					//"optre_M7_sight",
					"19_UNSC_br_scope"
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
					//"optre_bmr_laser",
					//"acc_flashlight"
					"19_UNSC_br55_LAM"
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		distanceZoomMin=0;
		distanceZoomMax=1000;
		descriptionShort="Battle Riffle - 55 with UGL";
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"\UNSC_F_Weapons\weapons\animations\br55_gl_standing.rtm",
			"Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single",
			"Burst"
		};
		class GL_3GL_F: UGL_F
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
				"Hades_GL_3Rnd"
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
		aiDispersionCoefY=1;
		aiDispersionCoefX=2;
	};
	class Hades_UNSC_BR55_GL: Hades_arifle_UNSC_br55_gl_Base_F
	{
		author="HadesAux";
		_generalMacro="Hades_UNSC_BR55_GL";
		baseWeapon="Hades_UNSC_BR55_GL";
		scope=2;
		displayName="[Hades] BR55 with UGL";
		model="\UNSC_F_Weapons\weapons\UNSC_br55_gl.p3d";
		mass=85;
		reloadAction="GestureReloadBR55";
		picture="\UNSC_F_Weapons\weapons\UI\BR55_gl_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\BR55_gl_UI.paa";
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"\UNSC_F_Weapons\weapons\animations\br55_gl_standing.rtm",
			"Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm"
		};
		muzzles[]=
		{
			"this",
			"GL_3GL_F"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: MuzzleSlot
			{
				inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
					//"muzzle_snds_b",
					//"optre_MA5Suppressor",
					"19_UNSC_br55_Suppressor",
					"19_UNSC_br55L_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					//"optre_M7_sight",
					"19_UNSC_br_scope"
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.5;
		aimTransitionSpeed=0.85;
		dexterity=2;
		recoil="recoil_trg20";
		maxZeroing=1000;

		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="BR 55, chambered in the Expirimental 9.5 x 40mm cartridge";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
					1.2,
					1,
					2000
				};
			begin4[]=
			{
				"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
				1.2,
				1,
				2000
			};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00050000002;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.89999998;
			maxRange=1000;
			maxRangeProbab=0.60000002;
			aiRateOfFire=2;
			aiRateOfFireDistance=20;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
					1.2,
					1,
					2000
				};
			begin4[]=
			{
				"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
				1.2,
				1,
				2000
			};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.08;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.0005;
			minRange=1;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.89999998;
			maxRange=1000;
			maxRangeProbab=0.60000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
	};
	class Hades_UNSC_BR55: Hades_UNSC_BR55_GL
	{
		author="HadesAux";
		_generalMacro="Hades_UNSC_BR55";
		baseWeapon="Hades_UNSC_BR55";
		scope=2;
		displayName="[Hades] BR55";
		model="\UNSC_F_Weapons\weapons\UNSC_br55.p3d";
		mass=60;
		reloadAction="GestureReloadBR55";
		picture="\UNSC_F_Weapons\weapons\UI\BR55_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\BR55_UI.paa";
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"\UNSC_F_Weapons\weapons\animations\br55_standing.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\optre_BR_handanim_new_SPARTAN.rtm"
		};
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
					//"optre_MA5Suppressor",
					"19_UNSC_br55_Suppressor",
					"19_UNSC_br55L_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					//"optre_M7_sight",
					"19_UNSC_br_scope"
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.5;
		aimTransitionSpeed=0.85;
		dexterity=2;
		recoil="recoil_trg20";
		maxZeroing=1000;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="BR 55, chambered in the Expirimental 9.5 x 40mm cartridge";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
					1.2,
					1,
					2000
				};
			begin4[]=
			{
				"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
				1.2,
				1,
				2000
			};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00050000002;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.89999998;
			maxRange=1000;
			maxRangeProbab=0.60000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
					1.2,
					1,
					2000
				};
			begin4[]=
			{
				"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
				1.2,
				1,
				2000
			};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.08;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.0005;
			minRange=1;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.89999998;
			maxRange=1000;
			maxRangeProbab=0.60000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
	};
	class Hades_UNSC_BR55_HB: Hades_UNSC_BR55_GL
	{
		author="HadesAux";
		_generalMacro="Hades_UNSC_BR55_HB";
		baseWeapon="Hades_UNSC_BR55_HB";
		scope=2;
		displayName="[Hades] BR55HB";
		model="\UNSC_F_Weapons\weapons\UNSC_br55_HB.p3d";
		mass=80;
		reloadAction="GestureReloadBR55";
		picture="\UNSC_F_Weapons\weapons\UI\BR55_HB_UI.paa";
		UiPicture="\UNSC_F_Weapons\weapons\UI\BR55_HB_UI.paa";
		ACE_barrelLength=866;
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"\UNSC_F_Weapons\weapons\animations\br55_standing.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\optre_BR_handanim_new_SPARTAN.rtm"
		};
		magazines[]=
		{
			"Hades_BR55_Mag_AP",
			"Hades_BR55_Mag_AP_Tracer",
		};
		magazineWell[]=
		{
			"Hades_BR55_AP_Magwell"
		};
		muzzles[]=
		{
			"this"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class MuzzleSlot: MuzzleSlot
			{
				inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="Muzzle Slot";
				compatibleItems[]=
				{
					//"optre_MA5Suppressor",
					"19_UNSC_br55_Suppressor",
					"19_UNSC_br55L_Suppressor"
				};
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleitems[]=
				{
					//"optre_M7_sight",
					"19_UNSC_br_scope"
				};
				iconPosition[]={0.5,0.30000001};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
		};
		inertia=0.5;
		aimTransitionSpeed=0.85;
		dexterity=2;
		recoil="recoil_trg20";
		maxZeroing=1000;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="BR 55, chambered in the Expirimental 9.5 x 40mm cartridge";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
					1.2,
					1,
					2000
				};
			begin4[]=
			{
				"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
				1.2,
				1,
				2000
			};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0002;
			minRange=0;
			minRangeProbab=0.9;
			midRange=500;
			midRangeProbab=0.95;
			maxRange=1000;
			maxRangeProbab=0.8;
			aiRateOfFire=1;
			aiRateOfFireDistance=15;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_1.wss",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_2.wss",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_3.wss",
					1.2,
					1,
					2000
				};
			begin4[]=
			{
				"\UNSC_F_Weapons\weapons\data\Sounds\UNSC_br55_4.wss",
				1.2,
				1,
				2000
			};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.1;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.0002;
			minRange=1;
			minRangeProbab=0.8;
			midRange=500;
			midRangeProbab=0.9;
			maxRange=1000;
			maxRangeProbab=0.6;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
	};
};
class cfgMagazineWells
{
	class Hades_BR55_Magwell 
	{
		UNSC_95x40_36rnd[] = 
		{
			"Hades_BR55_Mag_",
			"Hades_BR55_Mag_Tracer",
		};
	};
	class Hades_BR55_AP_Magwell 
	{
		UNSC_95x40_36rnd[] = 
		{
			"Hades_BR55_Mag_AP",
			"Hades_BR55_Mag_AP_Tracer",
		};
	};
	class Hades_GL_3Rnd 
	{
		Hades_GL_3rnd_HEAT[] = 
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
	class Hades_BR55_Mag: CA_Magazine
	{
		author="HadesAux";
		scope=2;
		displayName="36Rnd 9.5X40mm Magazine";
		ammo="Hades_95x40_Base";
		count=36;
		initSpeed=750;
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_36Rnd_95x45_br_55";
		mass=35;
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
    class Hades_BR55_Mag_Tracer: Hades_BR55_Mag
    {
		displayName="36Rnd 9.5x40mm Magazine (Tracer)";
		count=36;
		mass=5;
		tracersEvery=1;
		lastRoundsTracer=36;
	};
	class Hades_BR55_Mag_AP: CA_Magazine
	{
		author="HadesAux";
		scope=2;
		displayName="36Rnd 9.5X40mm AP Magazine";
		ammo="Hades_95x40_AP";
		count=36;
		initSpeed=750;
		//picture="\19thBR\Addons\BR\weapons\UI\BR55_mag_icon.paa";
		tracersEvery=0;
		descriptionShort="UNSC_CfgMagazines_36Rnd_95x45_br_55";
		mass=35;
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
	 class Hades_BR55_Mag_AP_Tracer: Hades_BR55_Mag_AP
    {
		displayName="36Rnd 9.5x40mm AP Magazine (Tracer)";
		count=36;
		mass=5;
		tracersEvery=1;
		lastRoundsTracer=36;
	};
	//GL's
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class Hades_GRL45_3rnd_HEAT: 1Rnd_HE_Grenade_shell
	{
		scope=2;
		scopeArsenal=2;
		author="Task Force Vargr Aux Mod";
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
		author="Task Force Vargr Aux Mod";
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
		author="Task Force Vargr Aux Mod";
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
		author="Task Force Vargr Aux Mod";
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
		author="Task Force Vargr Aux Mod";
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
		author="Task Force Vargr Aux Mod";
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
	class G_40mm_HE;
    class Hades_95x40_Base: BulletBase
	{
		caliber=7;
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=950;
		airFriction=-0.001;
		deflecting=0;
		cartridge="FxCartridge_556";
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
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
	class Hades_95x40_AP: BulletBase
	{
		caliber=6;
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=950;
		airFriction=-0.001;
		deflecting=0;
		cartridge="FxCartridge_556";
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
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
};