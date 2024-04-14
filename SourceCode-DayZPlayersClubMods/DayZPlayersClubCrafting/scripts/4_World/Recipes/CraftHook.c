class CraftHook extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Fishing Hooks";  //Action Display Name
		m_IsInstaRecipe = false;				
		m_AnimationLength = 1.4;					
		m_Specialty = 0;						

		//Begin Crafting Recipe
		InsertIngredient(0,"MetalWire");
		m_MinDamageIngredient[0] = -1;			
		m_MaxDamageIngredient[0] = -1;			
		m_MinQuantityIngredient[0] = -1;		
		m_MaxQuantityIngredient[0] = -1;		
		m_IngredientAddHealth[0] = 0;			
		m_IngredientSetHealth[0] = -1; 			
		m_IngredientAddQuantity[0] = 0;		
		m_IngredientDestroy[0] = true;			
		m_IngredientUseSoftSkills[0] = false;	
		

		InsertIngredient(1,"Pliers");		
		m_MinDamageIngredient[1] = -1;			
		m_MaxDamageIngredient[1] = -1;			
		m_MinQuantityIngredient[1] = -1;		
		m_MaxQuantityIngredient[1] = -1;		
		m_IngredientAddHealth[1] = 0;			
		m_IngredientSetHealth[1] = -1; 			
		m_IngredientAddQuantity[1] = -1;		
		m_IngredientDestroy[1] = false;			
		m_IngredientUseSoftSkills[1] = false;	
		

		AddResult("Hook");					
		m_ResultSetFullQuantity[0] = false;		
		m_ResultSetQuantity[0] = 1;				
		m_ResultSetHealth[0] = -1;				
		m_ResultInheritsHealth[0] = -1;			
		m_ResultInheritsColor[0] = -1;			
		m_ResultToInventory[0] = -2;			
		m_ResultUseSoftSkills[0] = false;		
		m_ResultReplacesIngredient[0] = -1;		
		
		AddResult("Hook");
		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 1;	
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
		
		AddResult("Hook");
		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 1;	
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}
};
