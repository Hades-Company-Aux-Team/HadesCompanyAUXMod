class CfgPatches {
    class HadesCovenant {
        units[] = 
		{
			"Hades_Phantom",
			"Hades_Geist",
			"Hades_Banshee_Type_A",
			"Hades_Banshee_Type_C",
			"Hades_Shadow",
			"Hades_Shadow_Troop",
			"Hades_Weevil",
			"Hades_Spirit",
			"Hades_AA_Wraith",
			"Hades_Spectre",
			"Hades_Ghost",
			"Hades_Wraith",
			"Hades_Locust",
			"Hades_Plasma_Mortar",
			"Hades_T26_AA",
			"Hades_T26_AI",
			"Hades_T26_AT",
			"Hades_Draugr",
			"Hades_AA_Draugr",
			"Hades_Tyrant",
			"Hades_Shrike",
			"Hades_Shrike_INV"
		}; 
        weapons[] = {};
        requiredAddons[] = {"OPTRE_FC_Core"};
    };
};

class CfgFactionClasses 
{
    class Hades_Covenant_Military 
	{
        displayName = "Hades Covenant";
        priority = 1;
        side = 0; // 0: OPFOR
    };
};

class CfgVehicles
{
class MEU_Phantom_Light; 
class MEU_Type_14_Geist; 
class MEU_CE_Banshee; 
class MEU_H3_Banshee;
class MEU_Shadow; 
class MEU_Shadow_Troop; 
class MEU_Weevil; 
class OPTRE_FC_Spirit; 
class OPTRE_FC_SAM_Wraith_Needle; 
class OPTRE_FC_Spectre_AI; 
class OPTRE_FC_Ghost; 
class OPTRE_FC_Wraith; 
class OPTRE_FC_Locust; 
class Plasma_Mortar; 
class OPTRE_FC_T26_AA; 
class OPTRE_FC_T26_AI; 
class OPTRE_FC_T26_AT; 
class OPTRE_FC_T29B_NVar; 
class OPTRE_FC_T29N_SAM; 
class OPTRE_FC_TyrantAA; 
class OPTRE_FC_T56_AA; 
class OPTRE_FC_T56_AA_INV;

class Hades_Phantom: MEU_Phantom_Light
{
scope = 2;
scopeCurator = 2;
displayName = "Phantom";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Geist: MEU_Type_14_Geist
{
scope = 2;
scopeCurator = 2;
displayName = "Geist";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Banshee_Type_A: MEU_CE_Banshee
{
scope = 2;
scopeCurator = 2;
displayName = "Type-26A Banshee CAS";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Banshee_Type_C: MEU_H3_Banshee
{
scope = 2;
scopeCurator = 2;
displayName = "Type-26A Banshee CAP";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Shadow: MEU_Shadow
{
scope = 2;
scopeCurator = 2;
displayName = "Shadow";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Shadow_Troop: MEU_Shadow_Troop
{
scope = 2;
scopeCurator = 2;
displayName = "Shadow Troop Transport";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Weevil: MEU_Weevil
{
scope = 2;
scopeCurator = 2;
displayName = "Weevil";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Spirit: OPTRE_FC_Spirit
{
scope = 2;
scopeCurator = 2;
displayName = "Spirit";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_AA_Wraith: OPTRE_FC_SAM_Wraith_Needle
{
scope = 2;
scopeCurator = 2;
displayName = "Anti-Air Wraith";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Spectre: OPTRE_FC_Spectre_AI
{
scope = 2;
scopeCurator = 2;
displayName = "Spectre";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Ghost: OPTRE_FC_Ghost
{
scope = 2;
scopeCurator = 2;
displayName = "Ghost";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Wraith: OPTRE_FC_Wraith
{
scope = 2;
scopeCurator = 2;
displayName = "Wraith";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Locust: OPTRE_FC_Locust
{
scope = 2;
scopeCurator = 2;
displayName = "Locust";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Plasma_Mortar: Plasma_Mortar
{
scope = 2;
scopeCurator = 2;
displayName = "Plasma Mortar";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_T26_AA: OPTRE_FC_T26_AA
{
scope = 2;
scopeCurator = 2;
displayName = "AA Shade Turret";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_T26_AI: OPTRE_FC_T26_AI
{
scope = 2;
scopeCurator = 2;
displayName = "Shade Turret";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_T26_AT: OPTRE_FC_T26_AT
{
scope = 2;
scopeCurator = 2;
displayName = "AT Shade Turret";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Draugr: OPTRE_FC_T29B_NVar
{
scope = 2;
scopeCurator = 2;
displayName = "Draugr";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_AA_Draugr: OPTRE_FC_T29N_SAM
{
scope = 2;
scopeCurator = 2;
displayName = "AA Draugr";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Tyrant: OPTRE_FC_TyrantAA
{
scope = 2;
scopeCurator = 2;
displayName = "Tyrant";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Shrike: OPTRE_FC_T56_AA
{
scope = 2;
scopeCurator = 2;
displayName = "Shrike";
faction = "Hades_Covenant_Military";
side = 0;
};

class Hades_Shrike_INV: OPTRE_FC_T56_AA_INV
{
scope = 2;
scopeCurator = 2;
displayName = "Shrike Inverted";
faction = "Hades_Covenant_Military";
side = 0;
};
};

class CfgGroups {
    class East { // Matches OPFOR side
        class Hades_Covenant_Military {
            name = "Hades Covenant";
            class Infantry {
                name = "Mixed Infantry";

                class Hades_Cov_Grunt_Levy {
                    name = "Grunt Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                };
				
				class Hades_Cov_Hunter_Pair {
                    name = "Hunter Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_HaloHunter_1_IF";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_HaloHunter_1_IF";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                };
				
				class Hades_Cov_Grunt_Suicide_Levy {
                    name = "Grunt Suicide Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_Cov_Grunt_Heavy_Levy {
                    name = "Grunt Heavy Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_Grunt_Heavy";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_Grunt_Heavy";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_Grunt_Heavy";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "WBK_Grunt_Heavy";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_Cov_Grunt_Deacon_Demi_Lance {
                    name = "Grunt Deacon Demi-Lance";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_Grunt_Ultra";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_Grunt_Ultra";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
					class Unit4 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
					class Unit5 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                };

                class Hades_Cov_Demi_Lance {
                    name = "Demi-Lance";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                };

                class Hades_Cov_Lance {
                    name = "Lance";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Major_Carbine";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
                };
				
				class Hades_Cov_File {
                    name = "File";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Major";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
					class Unit7 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -14, 0};
                    };
					class Unit8 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -16, 0};
                    };
					class Unit9 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -18, 0};
                    };
					class Unit10 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
                };
				
				class Hades_Cov_Legion {
                    name = "Legion";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Ultra_T51";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Major_Carbine";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Major_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
					class Unit7 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -14, 0};
                    };
					class Unit8 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -16, 0};
                    };
					class Unit9 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -18, 0};
                    };
					class Unit10 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
					class Unit11 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
					class Unit12 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
					class Unit13 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -22, 0};
                    };
					class Unit14 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -24, 0};
                    };
					class Unit15 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -26, 0};
                    };
					class Unit16 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -28, 0};
                    };
					class Unit17 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -30, 0};
                    };
					class Unit18 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -32, 0};
                    };
					class Unit19 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -34, 0};
                    };
					class Unit20 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -36, 0};
                    };
					class Unit21 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -38, 0};
                    };
					class Unit22 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -40, 0};
                    };
					class Unit23 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -42, 0};
                    };
					class Unit24 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -44, 0};
                    };
					class Unit25 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -46, 0};
                    };
					class Unit26 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -48, 0};
                    };
					class Unit27 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -50, 0};
                    };
					class Unit28 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -52, 0};
                    };
					class Unit29 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -54, 0};
                    };
					class Unit30 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -56, 0};
                    };
					class Unit31 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -58, 0};
                    };
					class Unit32 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -60, 0};
                    };
                };
				
				class Hades_Cov_Legion_Garrison {
                    name = "Legion Garrison";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Ultra_T51";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Officer";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Major_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "MEU_Elite_Major";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
					class Unit7 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -14, 0};
                    };
					class Unit8 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -16, 0};
                    };
					class Unit9 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -18, 0};
                    };
					class Unit10 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
					class Unit11 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
					class Unit12 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
					class Unit13 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -22, 0};
                    };
					class Unit14 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -24, 0};
                    };
					class Unit15 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -26, 0};
                    };
					class Unit16 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -28, 0};
                    };
					class Unit17 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -30, 0};
                    };
					class Unit18 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -32, 0};
                    };
					class Unit19 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -34, 0};
                    };
					class Unit20 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -36, 0};
                    };
					class Unit21 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -38, 0};
                    };
					class Unit22 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -40, 0};
                    };
					class Unit23 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -42, 0};
                    };
					class Unit24 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -44, 0};
                    };
					class Unit25 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -46, 0};
                    };
					class Unit26 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -48, 0};
                    };
					class Unit27 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -50, 0};
                    };
					class Unit28 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -52, 0};
                    };
					class Unit29 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -54, 0};
                    };
                };
            };
			class Elite_Infantry {
                name = "Elite Infantry";
				
				class Hades_Cov_Elite_Levy {
                    name = "Elite Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Ultra_T51";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Major_Carbine";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Needler";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_Cov_Elite_Chapter {
                    name = "Chapter";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot_T51";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot_T50";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot_AT";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot_T51";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_Cov_Elite_Honor_Guard_Demi_Lance {
                    name = "Honor Guard Demi-Lance";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Honor_Guard_Ultra";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Honor_Guard_T25";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Honor_Guard_T25";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "MEU_Elite_Honor_Guard_T25";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
					class Unit4 {
                        side = 0;
                        vehicle = "MEU_Elite_Honor_Guard_T25";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                };
				
				class Hades_Cov_Elite_AT_Levy {
                    name = "Anti-Tank Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Heavy";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Heavy";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Heavy";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                };
				
				class Hades_Cov_Elite_AA_Levy {
                    name = "Anti-Air Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Heavy_AA";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Heavy_AA";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_Minor_Heavy_AA";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                };
			};
			class Jackal_Infantry {
				name = "Jackal Infantry";
				
				class Hades_Cov_Jackal_Levy {
                    name = "Jackal Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                };
				
				class Hades_Cov_Jackal_Lance {
                    name = "Jackal Lance";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
					class Unit4 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
					class Unit5 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
					class Unit6 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
					class Unit7 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -14, 0};
                    };
					class Unit8 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -16, 0};
                    };
					class Unit9 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -18, 0};
                    };
                };
				
				class Hades_Cov_Jackal_Sniper_Levy {
                    name = "Jackal Sniper Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sniper_F";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sniper_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
			};
			class Spec_Ops_Infantry {
				name = "Spec Ops Infantry";
				
				class Hades_Cov_Spec_Ops_Levy {
                    name = "Spec Ops Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Ultra";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Minor_T51";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Minor_T51";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Minor_T51";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_Cov_Spec_Ops_Demi_Lance {
                    name = "Spec Ops Demi-Lance";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Ultra";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Minor_T51";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "MEU_Elite_SpecOps_Minor_T51";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "WBK_Grunt_Specops";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
					class Unit4 {
                        side = 0;
                        vehicle = "WBK_Grunt_Specops";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
					class Unit5 {
                        side = 0;
                        vehicle = "WBK_Grunt_Specops";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                };
			};
			class Meme_Infantry {
				name = "Meme Infantry";
				
				class Hades_Cov_Hunter_Meme {
                    name = "FUCK YOU";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
					class Unit4 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
					class Unit5 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
					class Unit6 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
					class Unit7 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -14, 0};
                    };
					class Unit8 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -16, 0};
                    };
					class Unit9 {
                        side = 0;
                        vehicle = "OPTREW_Hunter_5";
                        rank = "PRIVATE";
                        position[] = {0, -18, 0};
                    };
                };
			};
			class WBK_Infantry {
				name = "WBK Infantry";
				
				class Hades_WBK_Cov_Elite_Levy {
                    name = "WBK Elite Levy";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_9";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_3";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_2";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_2";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_WBK_Cov_Demi_Lance {
                    name = "WBK Demi-Lance";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_2";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                };
				
				class Hades_WBK_Cov_Lance {
                    name = "WBK Lance";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_3";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
                };
				
				class Hades_WBK_Cov_Elite_Chapter {
                    name = "WBK Elite Chapter";
                    faction = "Hades_Covenant_Military";
					side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_8";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_8";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_8";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
					class Unit3 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_8";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                };
				
				class Hades_WBK_Cov_File {
                    name = "WBK File";
                    faction = "Hades_Covenant_Military";
                    side=0;

                    class Unit0 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_3";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_2";
                        rank = "PRIVATE";
                        position[] = {0, -2, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "WBK_EliteMainWeap_2";
                        rank = "PRIVATE";
                        position[] = {0, -4, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_Major2_F";
                        rank = "PRIVATE";
                        position[] = {0, -6, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -8, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "OPTRE_Jackal_F";
                        rank = "PRIVATE";
                        position[] = {0, -10, 0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle = "WBK_Grunt_Major";
                        rank = "PRIVATE";
                        position[] = {0, -12, 0};
                    };
					class Unit7 {
                        side = 0;
                        vehicle = "WBK_Grunt_Sapper";
                        rank = "PRIVATE";
                        position[] = {0, -14, 0};
                    };
					class Unit8 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -16, 0};
                    };
					class Unit9 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -18, 0};
                    };
					class Unit10 {
                        side = 0;
                        vehicle = "WBK_Grunt_Minor";
                        rank = "PRIVATE";
                        position[] = {0, -20, 0};
                    };
                };
			};
		};
    };
};
