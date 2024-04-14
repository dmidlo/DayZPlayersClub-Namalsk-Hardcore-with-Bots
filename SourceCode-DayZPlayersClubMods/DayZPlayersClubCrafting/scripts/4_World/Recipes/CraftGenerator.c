class DayZPlayersClubCraftGenerator extends RecipeBase
{	
	override void Init()
	{   
		m_Name = "craft Generator";
		m_IsInstaRecipe = false;
		m_AnimationLength = 2;
		m_Specialty = 0.02;
		
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = 1;
		m_MaxQuantityIngredient[0] = -1;
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = 2;
		m_MaxQuantityIngredient[1] = -1;
		
		InsertIngredient(0,"Spur_Kart_FuelTank");
		
		m_IngredientAddHealth[0] = -60;
		m_IngredientSetHealth[0] = 0;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = true;
		
		InsertIngredient(1,"Spur_Kart_Engine");
		
		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = true;
		m_IngredientUseSoftSkills[1] = false;
		
		AddResult("PowerGenerator");

		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	}
	override bool CanDo(ItemBase ingredients[], PlayerBase player)//Окончательная проверка действительности рецепта
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//призывает к завершению рецепта
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};
