class ItemInfo;
class CfgPatches
{
    class Hades_Uniforms
    {
        units[]=
        {
            "Hades_Base"
        };
        author="Hawkins";
        version=1;
        weapons[]=
        {
            "HadesBaseUni"
        };
        requiredVersion=1;
        requiredAddons[]={};
    };
};
class CfgVehicles
{
    class 19th_H2A_U;
    class 19th_H2A_U_med;
    class Hades_Marine: 19th_H2A_U
    {
		scope=2;
        scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"HCO_Aux\Hades_Armory\Uniforms\Data\Base\chest_co.paa",
			"HCO_Aux\Hades_Armory\Uniforms\Data\Base\Arms_co.paa",
			"HCO_Aux\Hades_Armory\Uniforms\Data\Base\legs_co.paa",
			"\19th_H2A_armor\textures\bdu_co.paa",
			"\19th_H2A_armor\textures\misc_co.paa"
		};
    };
};
class cfgWeapons
{
    class Uniform_Base;
    class UniformItem;
    class Uni_Hades_Marine: Uniform_Base
    {
		scope=2;
		author="HadesModTeam";
		displayName="[Hades Company] Marine Armor";
		picture="HCO_Aux\Company_Logo\HadesLogo.paa"; 
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hades_Marine";
			containerClass="Supply100";
			mass=80;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
    };
};