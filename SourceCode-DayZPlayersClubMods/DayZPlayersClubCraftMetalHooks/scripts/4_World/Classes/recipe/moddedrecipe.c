modded class PluginRecipesManager 
{
    override void RegisterRecipies()
    {
        super.RegisterRecipies();
        
        //Crafting Recipe
		RegisterRecipe(new DayZPlayersClubCraftMetalHooks );
    }
}