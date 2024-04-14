class cfgPatches {
	class DayZPlayersClubNamalskSolarLighting {
		author = "Hunnicuttt";
		units[]				= { 
			"StreetLightingBattery",
			"PowerPole_Lamp"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data"
		};
	};
};

class cfgMods {
	class DayZPlayersClubNamalskSolarLighting {
		dir = "DayZPlayersClubNamalskSolarLighting";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DayZ Players Club - Namalsk Solar Lighting";
		credits = "Hunnicuttt, ALEX, ADACHI, Sumrak";
		author = "Hunnicuttt";
		authorID = "0";
		version = 1.0;
		extra = 0;
		type = "mod";
		dependencies[] = {
			"World",
			"Mission"
		};
		
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"DayZPlayersClubNamalskSolarLighting/scripts/4_World"};
			};
			class missionScriptModule
			{
				value 	= "";
				files[] = { "DayZPlayersClubNamalskSolarLighting/scripts/5_mission" };
			};
		};
	};
};

class CfgVehicles {
	class Inventory_Base;
	class StreetLightingBattery : Inventory_Base  {
		scope = 2;
		displayName = "$STR_SOLAR_STREET_LIGHT";
		descriptionShort = "$STR_SOLAR_STREET_LIGHT_DESC";
		handheld="false";
		weight=50000;
		physLayer="item_large";
		carveNavmesh=1;
		storageCategory=10;
		attachments[] = {"CarBattery"};
		model = "\DayZPlayersClubNamalskSolarLighting\StreetLightingBattery.p3d";

		class GUIInventoryAttachmentsProps
		{
			class Attachments_CarBattery
			{
				name="$STR_SOLAR_STREET_ATTACHMENT_CAR_BATTERY";
				description="Not needed.";
				attachmentSlots[]=
				{
					"CarBattery"
				};
				icon="set:dayz_inventory image:cat_fp_tents";
				view_index=1;
			};
		};

		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};

		class EnergyManager {
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.15;
			attachmentAction = 1;
		};
		
		
	};

	class PowerPole_Lamp: Inventory_Base
	{
		scope						= 1;
		storageCategory 			= 10;
		model						= "\dz\gear\consumables\Stone.p3d";
		forceFarBubble				= "true";
		hiddenSelections[]			= { "zbytek" };
		hiddenSelectionsTextures[]	= { "#(argb,8,8,3)color(1,1,1,0,CA)" };
        //hiddenSelectionsMaterials[]={ "DZ\gear\consumables\data\chemlight_yellow_on.rvmat" };

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
				};
			};
		};

		class PointLights
        {
            class PointLight
            {
                color[] 	= { 2.5, 2.5, 1.5, 0.0 };
                brightness 	= 1.0;
                radius 		= 30;
                dayLight 	= 0;
            };
        };
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;	
	
	class Proxybattery_car : ProxyAttachment {
		scope = 2;
		inventorySlot = "CarBattery";
		model = "\dz\vehicles\parts\battery_car.p3d";
	};
};

class CfgSlots
{
	class Slot_CarBattery
	{
		name="CarBattery";
		displayName="$STR_SOLAR_STREET_ATTACHMENT_CAR_BATTERY";
		ghostIcon="set:dayz_inventory image:cat_fp_tents";
	};
};
