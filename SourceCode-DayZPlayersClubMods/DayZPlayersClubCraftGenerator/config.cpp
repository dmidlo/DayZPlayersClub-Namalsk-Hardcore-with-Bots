#define _ARMA_

class CfgPatches
{
	class DayZPlayersClubCraftGenerator
	{
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class DayZPlayersClubCraftGenerator
	{
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCraftGenerator/scripts/4_world"};
			};
		};
	};
};
