#define _ARMA_

class CfgPatches
{
	class DayZPlayersClubCraftLessNails
	{
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class DayZPlayersClubCraftLessNails
	{
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCraftLessNails/scripts/4_world"};
			};
		};
	};
};
