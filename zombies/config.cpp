#include "basicdefines_A3.hpp"
#include "cfgmovesbasic.hpp"
#include "cfgmoveszombie.hpp"
#include "cfgmoveszombie2.hpp"
#include "cfgmoveszombie3.hpp"
#include "cfgmoveszombie4.hpp"




class DefaultEventhandlers;

class CfgPatches
{
	class zombies
	{
		units[]={"zombies"};
		weapons[]={};
		requiredVersion={0.1};
		requiredAddons[]={"A3_Characters_F"};
	};
};

class CfgFactionClasses {
	class Zombies {
		displayName = "zombies by kk4pi v1.0";
		icon = "\zombies\icones\fracture.paa";
		priority = 100;
		side = 3;
	};
};

class CfgVehicleClasses
{
	class zombies
	{
		displayName = "Zombies";
	};
};

class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};
	class O_Soldier_base_F: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};


	//Base class z
	class Test_Soldier_base_F: SoldierWB
	{
		scope = 2; /// base class should not be visible in editor
		faceType = Man_A3; /// this soldier is going to use standard faces
		side = 2; /// that means independant
		faction = Zombies; /// Standard NATO faction
		vehicleClass = Men; /// Should be listed under Men
		displayName = "test0";
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat", 			/// what material is changed
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like in damage 0.5 and more
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like while the part has damage 1	

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",			/// next materials are used through personality of the soldier
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",	

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",						
			};
		};

		model 			= "\zombies\models\survivor.p3d"; /// path to model
		modelSides[] 	= {3, 1}; 				/// what sides could use this uniform, means civilians and BLUFOR can use it
		nakedUniform 	= "U_BasicBody";		///  
		uniformClass 	= "U_Test_uniform";		/// standard uniform used by this soldier, there is a special one defined later

		class HitPoints : HitPoints
		{
			class HitHead:HitHead {armor = 0.3*HeadArmourCoef;}; /// default soldier doesn't have any head armour, uses helmet
			class HitBody:HitBody {armor = 0.5*BodyArmourCoef;}; /// default soldier doesn't have protective uniform on body, uses vest
			class HitHands: HitHands {armor = 0.8*HandArmourCoef;}; /// some protection for hands by uniform
			class HitLegs: HitLegs {armor = 0.8*LegArmourCoef;}; /// some protection for legs by uniform
		};

		hiddenSelections[] = {"Camo"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"\zombies\textures\underwear_white_co.paa"}; /// what texture does this soldier use for camo selection

		weapons[] = {}; /// we have a sample weapon, why not use it? Throw and put weapons are required for grenades/mines
		respawnWeapons[] = {}; /// should be the same as previous most of the time
		Items[] = {}; /// one First aid kit is good to start with
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};		
		linkedItems[] = {DN_Vest}; /// items directly in inventory slots
		respawnLinkedItems[] = {DN_Vest};
	};
	
	class Test_zed_base_F : O_Soldier_base_F {
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		side = 2;
		faction = Zombies;
		displayName = "test";
		genericNames = "ZMen";
		vehicleClass = "zombies";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1, 0.1, 0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\clothing.rvmat", "A3\Characters_F\OPFOR\Data\clothing_injury.rvmat", "A3\Characters_F\OPFOR\Data\clothing_injury.rvmat"};
		};
		
		class HitPoints : HitPoints {
			class HitHead : HitHead {
				armor = 0.3*2.5;
			};
			
			class HitBody : HitBody {
				armor = 0.7*10;
			};
			
			class HitHands : HitHands {
				armor = 0.9*5;
			};
			
			class HitLegs : HitLegs {
				armor = 0.9*5;
			};
		};
		model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
		modelSides[] = {0, 3};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_O_CombatUniform_ocamo";
		
		class UniformInfo {
			class SlotsInfo {
				class NVG : UniformSlotInfo {
					slotType = 602;
				};
				
				class Scuba : UniformSlotInfo {
					slotType = 604;
				};
				
				class Googles : UniformSlotInfo {
					slotType = 603;
				};
				
				class Headgear : UniformSlotInfo {
					slotType = 605;
				};
			};
		};
		class EventHandlers;	// External class reference
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {};
		RespawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_co.paa", "\A3\Characters_F\OPFOR\Data\tech_CO.paa"};
	};
	class DN_survivor: Test_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "survivor"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\survivor.p3d"; /// path to model
		uniformClass = "U_Test_uniform";
		backpack = "";
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"Camo"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"\zombies\textures\underwear_white_co.paa"}; /// what texture does this soldier use for camo selection
	};
	class DN_zed: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "zombie Policier"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\zed.p3d"; /// path to model
		uniformClass = "U_zed_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_woman: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "Woman survivor"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\woman.p3d"; /// path to model
		uniformClass = "U_woman_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_boomer: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "boomer zombie"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\boomer.p3d"; /// path to model
		uniformClass = "U_boomer_uniform";
		moves = "CfgMovesZombie";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
		armor = 50;
		cost = 1000000;
	
	};
	class DN_officer: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "Officer zombie"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\zedofficer.p3d"; /// path to model
		uniformClass = "U_officer_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_hatofficer"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_hatofficer"};
	};
	class DN_zedwoman: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "femme zombie"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\zedwoman.p3d"; /// path to model
		uniformClass = "U_zedwoman_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_zedmalebig: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "gros zombie"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\zedmalebig.p3d"; /// path to model
		uniformClass = "U_zedmalebig_uniform";
		moves = "CfgMovesZombie";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {}; /// items directly in inventory slots
		respawnLinkedItems[] = {};
	};
	class DN_medic: O_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		side = 2;
		faction = Zombies;
		vehicleClass = "zombies";
		displayName = "DN Medic zombie"; /// what's displayed in editor or on cursor over
		model = "\zombies\models\zed.p3d"; /// path to model
		uniformClass = "U_zedmedic_uniform";
		moves = "CfgMovesZombie2";
		backpack = "";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"DN_maskmed"}; /// items directly in inventory slots
		respawnLinkedItems[] = {"DN_maskmed"};
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	#include "cfgUniforms.hpp"	/// sample uniform is defined in a separate file to make it cleaner
	#include "cfgVests.hpp"		/// sample vest is defined in a separate file to make it cleaner
	#include "cfgHeadgear.hpp"	/// sample cap is defined in a separate file to make it cleaner
};