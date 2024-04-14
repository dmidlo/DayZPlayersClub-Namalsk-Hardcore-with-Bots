class CraftMetalSheet extends RecipeBase
{	
	override void Init()
	{   
		m_Name = "craft Metal Sheet"; //Название-действие
		m_IsInstaRecipe = false;   //Если этот рецепт будет выполнен мгновенно без анимации
		m_AnimationLength = 2;     //Длина анимации в относительных единицах времени 
		m_Specialty = 0.02;        // Значение> 0 для шероховатости, значение <0 для точности
		
		//Условия-затраты

		//условия для первого ингредиента
		m_MinDamageIngredient[0] = -1;//-1 = Минимальное состояние (поношено, повреждено) при котором будет появлятся действие крафта
		m_MaxDamageIngredient[0] = 3;//-1 = Максимальное состояние (поношено, повреждено) при котором будет появлятся действие крафта
		
		m_MinQuantityIngredient[0] = 1;//-1 = Минимальное количество предмета в стаке
		m_MaxQuantityIngredient[0] = -1;//-1 = Максимальное количество предмета в стаке


		//условия для второго ингредиента, аналогично первому
		m_MinDamageIngredient[1] = -1;//-1 = Минимальное состояние (поношено, повреждено) при котором будет появлятся действие крафта
		m_MaxDamageIngredient[1] = 3;//-1 = Максимальное состояние (поношено, повреждено) при котором будет появлятся действие крафта
		
		m_MinQuantityIngredient[1] = 2;//-1 = Минимальное количество предмета в стаке
		m_MaxQuantityIngredient[1] = -1;//-1 = Максимальное количество предмета в стаке
		//----------------------------------------------------------------------------------------------------------------------
		
		//Ингредиенты #1
		//ИСПОЛЬЗУЕМЫЙ ПРЕДМЕТ
		InsertIngredient(0,"Hacksaw");      //Вы можете вставить несколько ингредиентов таким образом
		
		m_IngredientAddHealth[0] = -60;// 0 = ничего не делать 
		m_IngredientSetHealth[0] = 0; // -1 = ничего не делать
		m_IngredientAddQuantity[0] = 0;// 0 = ничего не делать
		m_IngredientDestroy[0] = false;//true = разобрать, false = ничего не делать (удаляется индегриент после крафта.)
		m_IngredientUseSoftSkills[0] = true;// установите значение "true", чтобы разрешить изменение значений softskills для этого ингредиента
		
		//Ингредиенты #2
		//ИСПОЛЬЗУЕМЫЙ ПРЕДМЕТ
		InsertIngredient(1,"Barrel_Green");      //Вы можете вставить несколько ингредиентов таким образом
		InsertIngredient(1,"Barrel_Blue");
		InsertIngredient(1,"Barrel_Red");
		InsertIngredient(1,"Barrel_Yellow");
		InsertIngredient(1,"mmg_equipment_locker_grey_kit");
		InsertIngredient(1,"mmg_locker02_blue_kit");
		InsertIngredient(1,"mmg_locker02_tan_kit");
		InsertIngredient(1,"mmg_lockable_gun_rack_kit_grey");
		InsertIngredient(1,"mmg_fridge_kit_blue");
		InsertIngredient(1,"mmg_solo_locker_blue_kit");
		InsertIngredient(1,"mmg_toolwagon_red");
		InsertIngredient(1,"Spur_Kart_FuelTank");
		InsertIngredient(1,"Spur_Kart_Engine");
		InsertIngredient(1,"Spur_Kart_Sign1");
		InsertIngredient(1,"Spur_Kart_Sign2");
		InsertIngredient(1,"Spur_Kart_Sign3");
		InsertIngredient(1,"Spur_Kart_Sign4");
		InsertIngredient(1,"Spur_Kart_Sign_Tagged");
		InsertIngredient(1,"Spur_EKart_Motor", );
		InsertIngredient(1,"Defender110_dver_1_1");
		InsertIngredient(1,"Defender110_dver_2_1");
		InsertIngredient(1,"Defender110_dver_1_2");
		InsertIngredient(1,"Defender110_dver_2_2");
		InsertIngredient(1,"Defender110_dver_1_1_UN");
		InsertIngredient(1,"Defender110_dver_2_1_UN");
		InsertIngredient(1,"Defender110_dver_1_2_UN");
		InsertIngredient(1,"Defender110_dver_2_2_UN");
		InsertIngredient(1,"Defender110_dver_1_1_Green");
		InsertIngredient(1,"Defender110_dver_2_1_Green");
		InsertIngredient(1,"Defender110_dver_1_2_Green");
		InsertIngredient(1,"Defender110_dver_2_2_Green");
		InsertIngredient(1,"Defender110_kapot");
		InsertIngredient(1,"Defender110_kapot_UN");
		InsertIngredient(1,"Defender110_kapot_Green");
		InsertIngredient(1,"Defender110_bagazhnik");
		InsertIngredient(1,"Defender110_bagazhnik_UN");
		InsertIngredient(1,"Defender110_bagazhnik_Green");
		InsertIngredient(1,"LAMV_Doors_Driver");
		InsertIngredient(1,"LAMV_Doors_CoDriver");
		InsertIngredient(1,"LAMV_doors_Trunk");
		InsertIngredient(1,"LAMV_doors_Hood");
		InsertIngredient(1,"LAMV_Doors_Driver_Blue");
		InsertIngredient(1,"LAMV_Doors_CoDriver_Blue");
		InsertIngredient(1,"LAMV_doors_Trunk_Blue");
		InsertIngredient(1,"LAMV_doors_Hood_Blue");
		InsertIngredient(1,"Kamaz_fuelPump");
		InsertIngredient(1,"KamazDoors_Driver");
		InsertIngredient(1,"KamazDoors_CoDriver");
		InsertIngredient(1,"KamazHood");
		InsertIngredient(1,"KamazTrunk");
		InsertIngredient(1,"TR142_doors_Driver");
		InsertIngredient(1,"TR142_Doors_coDriver");
		InsertIngredient(1,"RFFSHeli_UH1H_DriverDoor");
		InsertIngredient(1,"RFFSHeli_UH1H_CodriverDoor");
		InsertIngredient(1,"RFFSHeli_UH1H_Cargo1");
		InsertIngredient(1,"RFFSHeli_UH1H_Cargo2");
		InsertIngredient(1,"RFFSHeli_UH1H_Cargo1a");
		InsertIngredient(1,"RFFSHeli_UH1H_Cargo2a");
		InsertIngredient(1,"RFFSHeli_UH1H_Combat_DriverDoor");
		InsertIngredient(1,"RFFSHeli_UH1H_Combat_CodriverDoor");
		InsertIngredient(1,"RFFSHeli_Blackhawk_DriverDoor");
		InsertIngredient(1,"RFFSHeli_Blackhawk_CodriverDoor");
		InsertIngredient(1,"RFFSHeli_Blackhawk_Cargo1");
		InsertIngredient(1,"RFFSHeli_Blackhawk_Cargo1a");
		InsertIngredient(1,"RFFSHeli_Blackhawk_Cargo2");
		InsertIngredient(1,"RFFSHeli_Blackhawk_Cargo2a");
		InsertIngredient(1,"RFFSHeli_Blackhawk_Cargo3");
		InsertIngredient(1,"RFFSHeli_Blackhawk_Cargo4");
		InsertIngredient(1,"RFFSHeli_Ka26_DriverDoor");
		InsertIngredient(1,"RFFSHeli_Ka26_CodriverDoor");
		InsertIngredient(1,"RFFSHeli_Ka26_Cargo1");
		InsertIngredient(1,"RFFSHeli_Ka26_Cargo2");
		InsertIngredient(1,"RFFSHeli_Mi2_DriverDoor");
		InsertIngredient(1,"RFFSHeli_Mi2_CodriverDoor");
		InsertIngredient(1,"RFFSHeli_Mi2_Cargo1");
		InsertIngredient(1,"RFFSHeli_Mi2_DriverDoor_Military");
		InsertIngredient(1,"RFFSHeli_Mi2_CodriverDoor_Military");
		InsertIngredient(1,"RFFSHeli_Mi2_Cargo1_Military");
		InsertIngredient(1,"RFFSHeli_R22_DriverDoor");
		InsertIngredient(1,"RFFSHeli_R22_CodriverDoor");
		InsertIngredient(1,"RFFSHeli_R22_DriverDoor_Red");
		InsertIngredient(1,"RFFSHeli_R22_CodriverDoor_Red");
		InsertIngredient(1,"RFFSHeli_R22_DriverDoor_Black");
		InsertIngredient(1,"RFFSHeli_R22_CodriverDoor_Black");
		
		//ПОСЛЕДСВИЯ ПРЕДМЕТА
		m_IngredientAddHealth[1] = 0;// Добавляет хп после действия
		m_IngredientSetHealth[1] = -1; // Ставит определенное количество хп после действия
		m_IngredientAddQuantity[1] = 0;// Добавляет количество предметов в стак
		m_IngredientDestroy[1] = true;// Удаляется индегриент после крафта
		m_IngredientUseSoftSkills[1] = false;// Добавляет очки опыта после действия (эта механика либо не работает, либо криво работает, не помню)
		//----------------------------------------------------------------------------------------------------------------------
		
		//РЕЗУЛЬТАТ 
		AddResult("MetalPlate"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента
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