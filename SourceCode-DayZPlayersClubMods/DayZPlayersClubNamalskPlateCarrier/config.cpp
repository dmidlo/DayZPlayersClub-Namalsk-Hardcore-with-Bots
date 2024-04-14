#define _ARMA_

class CfgPatches
{
	class DayZPlayersClubNamalskPlateCarrier
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Vests","DZ_Gear_Containers"};
		author = "Hunnicuttt";
		name = "DayZ Players Club DZCore Plate Carrier";
		url = "";
	};
};
class CfgMods
{
	class 
	{
		dir="";
		picture="";
		name="";
		author="Hunnicuttt";
		authorID="";
		version="0.1";
		extra=0;
		type="mod";
		
	};
};

class CfgVehicles
{
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class DzPC_platecarriervest: PlateCarrierVest
	{
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa","DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa","DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.45;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class DzPC_platecarrierholster: PlateCarrierHolster
	{
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa","DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa","DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa"};
	};
	class DzPC_platecarrierpouches: PlateCarrierPouches
	{
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa","DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa","DayZPlayersClubNamalskPlateCarrier\data\dzpc_platecarriervest_co.paa"};
	};
};
