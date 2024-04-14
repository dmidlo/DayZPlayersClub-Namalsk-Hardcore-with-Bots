modded class PluginRecipesManager 
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        
        //Crafting Recipe
        RegisterRecipe(new CraftGenerator );
        RegisterRecipe(new CraftHook );
		RegisterRecipe(new CraftLessNailsRecipe );
        RegisterRecipe(new CraftMetalSheet );
        RegisterRecipe(new Deconstruct1SeaterVehicles );
        RegisterRecipe(new Deconstruct2SeaterVehicles );
        RegisterRecipe(new Deconstruct2SeaterVehiclesLarge );
        RegisterRecipe(new Deconstruct4SeaterVehicles );
        RegisterRecipe(new DeconstructEtrolleyCart );
        RegisterRecipe(new DeconstructSmallVehicles );
        RegisterRecipe(new DeconstructTrolley );
        RegisterRecipe(new DeconstructTrolleyCart );
        RegisterRecipe(new DeconstructTrolleySeat );
        RegisterRecipe(new RepairHook );
        RegisterRecipe(new UpgradeGravitiToLvl2 );
        RegisterRecipe(new UpgradeGravitiToLvl3 );
    }
}