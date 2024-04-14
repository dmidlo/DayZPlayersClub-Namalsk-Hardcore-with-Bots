#define _ARMA_

class CfgPatches
{
	class DayZPlayersClubCrafting
	{
		units[]=
        {
           "MetalPlate",
           "WoodenPlank",
           "WoodenLog",
           "LargeTent",
           "MediumTent",
		   "CarTent",
		   "WoodenStick",
		   "LongWoodenStick",
           "Paper",
		   "ZH_MikeTangoSierra",
		   "ZH_MikeTangoSierra2",
		   "ZH_MikeTangoSierra4"
        };
        weapons[]={};
        requiredVersion=0.1
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Gear_Consumables",
            "DZ_Gear_Camping",
            "DZ_Gear_Tools",
			"ZH_MessTinStorage",
			"Spur_TrolleyKart",
			"mmg_storage",
			"CrSk_Land_Rover_Defender_110",
			"LAMV",
			"MD_Vehicles_Kamaz",
			"TR142",
			"RFFSHeli_Blackhawk_Heli",
			"RFFSHeli_Ka26_Heli",
			"RFFSHeli_LittleBird_Heli",
			"RFFSHeli_LittleBird_Camo_mod",
			"RFFSHeli_Mi2_Heli",
			"RFFSHeli_Mi2_Military_Heli",
			"RFFSHeli_R22_Heli",
			"RFFSHeli_R22_Black_Heli",
			"RFFSHeli_R22_Red_Heli",
			"RFFSHeli_UH1H_Heli",
			"RFFSHeli_UH1H_Combat_Heli",
			"qdly_motoblok",
			"Glowler_ITV",
			"Techs_AllTerrainVehicle",
			"SavageSherpa",
			"ONLI_Graviti",
			"ns_dayz_gear_lehs"
        };
	};
};
class CfgMods
{
	class DayZPlayersClubCrafting
	{
		dir = "DayZPlayersClubCrafting";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "DayZPlayersClubCrafting";
		credits = "";
		author = "Hunnicuttt";
		authorID = "0";
		version = 1;
		extra = 0;
		type = "mod";
		dependencies[] = {
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCrafting/scripts/4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"DayZPlayersClubCrafting/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
    class Inventory_Base;
    class Container_Base;
	class BarrelHoles_Green;
	class Bottle_Base;
    class MetalPlate: Inventory_Base
    {
        itemSize[]={5,5};
    };
    class WoodenLog: Inventory_Base
    {
        itemSize[]={2,5};
    };
    class WoodenPlank: Inventory_Base
    {
        itemSize[]={1,4};
    };
	class WoodenStick: Inventory_Base
    {
        itemSize[]={1,3};
    };
	class LongWoodenStick: Inventory_Base
    {
        itemSize[]={1,6};
    };
	class CarTent: Container_Base
    {
        itemSize[]={6,3};
    };
    class LargeTent: Container_Base
    {
        itemSize[]={5,2};
    };
    class MediumTent: Container_Base
    {
      itemSize[]={4,2};
    };
    class Paper: Inventory_Base
	{
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		canBeSplit = 1;
	};
	class ZH_MikeTangoSierra: Inventory_Base
	{
		itemSize[]={2,2};
	};
	class ZH_MikeTangoSierra2: BarrelHoles_Green
	{
		itemSize[]={2,2};
		class Cargo
		{
			itmesCargoSize[]={3,3};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
	};
	class ZH_MikeTangoSierra4: Bottle_Base
	{
		itemSize[]={2,2};
		itemsCargoSize[]={3,3};
	};
};
