////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Sun Apr 07 16:15:28 2024 : 'file' last modified on Sun Jan 30 15:00:54 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DayZPlayersClubCrafting
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class DayZPlayersClubCrafting
	{
		dir = "DayZPlayersClubCrafting";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DayZPlayersClubCrafting";
		credits = "Hunnicuttt";
		author = "Hunnicuttt";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCrafting/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCrafting/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DayZPlayersClubCrafting/Scripts/5_Mission"};
			};
		};
	};
};
