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
class CfgWeapons
{
    class TCF_MRS10;
    class Hades_MRS_Rifle: TCF_MRS10
    {
		dlc="TCF";
		author="Hawkins";
		scope=2;
		scopeArsenal=2;
		displayName="[Hades] MRS Rifle";
		baseWeapon="Hades_MRS_Rifle";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye="OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=20;
		cursor="srifle";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
        magazines[]=
        {
			"Hades_MRS_Mag",
			"Hades_MRS_Mag_Tracer",
        };
        magazineWell[]=
        {
			"Hades_MRS_Magwell"
        };
    };
};
class cfgMagazineWells
{
    class Hades_MRS_Magwell
    {
        UNSC_762x51_15rnd[] = 
        {
			"Hades_MRS_Mag",
			"Hades_MRS_Mag_Tracer",            
        };
    };
};
class  CfgMagazines
{
    class CA_Magazine;
    class Hades_MRS_Mag: CA_Magazine
	{
		author="Hades";
		scope=2;
		displayName="20Rnd 7.62X51mm Magazine";
		ammo="Hades_762x51_Base";
		count=20;
		initSpeed=1000;
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
    class Hades_MRS_Mag_Tracer: Hades_MRS_Mag
    {
        displayName="20Rnd 7.62x51mm Magazine (Tracer)";
        count=20;
        mass=20;
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
		initspeed=1450;
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
