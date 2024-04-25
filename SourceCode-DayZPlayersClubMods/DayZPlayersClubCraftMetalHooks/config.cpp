#define _ARMA_

class CfgPatches
{
	class DayZPlayersClubCraftMetalHooks
	{
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class DayZPlayersClubCraftMetalHooks
	{
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCraftMetalHooks/scripts/4_world"};
			};
		};
	};
};
