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
        //    "ace_common"
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]=
        {
            "Hades_Law",
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
    class Launcher_Base_F;
    class Hades_launcher_base: Launcher_Base_F
    {
        class Single;
    };
    class Hades_Law: Hades_launcher_base
    {
        scope=2;
        scopearsenal=2;
        displayName="[Hades] M96 Law (Reusable)";
        baseWeapon="Hades_Law";
        picture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
        model="DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
        handAnim[]=
        {
            "OFP2_ManSkeleton",
            "\A3\Weapons_F_Exp\Launchers\RPG7\Data\Anim\RPG7V.rtm"
        };
        weaponInfoType="RscOpticsRangeFinderNLAW";
        reloadAction="ReloadRPG";
        recoil="recoil_rpg";
        maxZeroing=600;
        magazines[]=
        {
            "Hades_M96_HEAT"
        };
        magazineWell[]={};
        class Single: Single
        {
            sounds[]=
            {
                "StandardSound"
            };
            class BaseSoundModeType
            {
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
                    1.99526,
                    1,
                    1500
                };
                soundBegin[]=
                {
                    "begin1",
                    1
                };
                soundSetShot[]=
                {
                    "Launcher_RPG32_Shot_SoundSet",
                    "Launcher_RPG32_Tail_SoundSet"
                };
            };
            maxRange=600;
            maxRangeProbab=0.1;
            midRange=400;
            midRangeProbab=0.80000001;
            minRange=100;
            minRangeProbab=0.30000001;
        };
        modelOptics="\A3\Weapons_F\acc\reticle_RPG_F";
        class OpticsModes
        {
            class optic
            {
                cameraDir="look";
                distanceZoomMax=600;
                distanceZoomMin=100;
                memoryPointCamera="eye";
                opticsDisablePeripherialVision=1;
                opticsFlare=1;
                opticsID=1;
                opticsPPEffects="[""OpticsCHAbera1"",""OpticsBlur1""]";
                opticsZoomInit=0.087499999;
                opticsZoomMax=0.087499999;
                opticsZoomMin=0.087499999;
                useModelOptics=1;
                visionMode="[""Normal"",""NVG""]";
            };
        };
    };
};
class cfgMagazineWells
{
    class Hades_M96 
    {
        RPG32[] = 
        {
            "Hades_M96_AT",
        };
    };
};
class CfgMagazines
{
    class RPG32_F;
    class Hades_M96_HEAT: RPG32_F
    {
        displayName="[Hades] Hades M96 HEAT";
        descriptionShort="HEAT Rocket";
        author="Hades";
        ammo="Hades_M96_HEAT_Rocket";
        mass=100;
    };
};
class CfgAmmo
{
    class R_PG32V_F;
    class Hades_M96_HEAT_Rocket: R_PG32V_F
    {
        hit=350;
        submunitionAmmo="ammo_Penetrator_Titan_AT";
    };
};