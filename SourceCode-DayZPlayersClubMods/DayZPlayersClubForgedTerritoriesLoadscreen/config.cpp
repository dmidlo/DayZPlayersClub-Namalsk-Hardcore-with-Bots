class CfgPatches
{
	class DayZPlayersClubForgedTerritoriesLoadscreen
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class DayZPlayersClubForgedTerritoriesLoadscreen
	{
		dir="DayZPlayersClubForgedTerritoriesLoadscreen";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="DayZPlayersClubForgedTerritoriesLoadscreen";
		credits="";
		author="Hunnicuttt";
		authorID="0";
		version="1.0";
		type="mod";
		dependencies[]=
		{
			"Game"
		};
	};
	class defs
	{
		class gameScriptModule
		{
			value="";
			files[]=
			{
				"DayZPlayersClubForgedTerritoriesLoadscreen/Scripts/3_Game"
			};
		};
	};
};