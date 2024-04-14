class Deconstruct4SeaterVehicles extends RecipeBase
{	
	override void Init()
	{   
		m_Name = "Take apart vehicle"; //Название-действие
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
		InsertIngredient(0,"SledgeHammer");      //Вы можете вставить несколько ингредиентов таким образом
		
		m_IngredientAddHealth[0] = -60;// 0 = ничего не делать 
		m_IngredientSetHealth[0] = 0; // -1 = ничего не делать
		m_IngredientAddQuantity[0] = 0;// 0 = ничего не делать
		m_IngredientDestroy[0] = false;//true = разобрать, false = ничего не делать (удаляется индегриент после крафта.)
		m_IngredientUseSoftSkills[0] = true;// установите значение "true", чтобы разрешить изменение значений softskills для этого ингредиента
		
		//Ингредиенты #2
		//ИСПОЛЬЗУЕМЫЙ ПРЕДМЕТ
		InsertIngredient(1,"Glowler_ITV");
		InsertIngredient(1, "CrSk_Land_Rover_Defender_110");
		InsertIngredient(1, "CrSk_Land_Rover_Defender_110_Green");
		InsertIngredient(1, "CrSk_Land_Rover_Defender_110_UN");
		InsertIngredient(1, "RFFSHeli_UH1H");
		InsertIngredient(1, "RFFSHeli_UH1H_Combat");
		InsertIngredient(1, "RFFSHeli_Blackhawk_Cargo");
		InsertIngredient(1, "RFFSHeli_Ka26");
		InsertIngredient(1, "RFFSHeli_Mi2");
		InsertIngredient(1, "RFFSHeli_Mi2_Military");
		
		//ПОСЛЕДСВИЯ ПРЕДМЕТА
		m_IngredientAddHealth[1] = 0;// Добавляет хп после действия
		m_IngredientSetHealth[1] = -1; // Ставит определенное количество хп после действия
		m_IngredientAddQuantity[1] = 0;// Добавляет количество предметов в стак
		m_IngredientDestroy[1] = true;// Удаляется индегриент после крафта
		m_IngredientUseSoftSkills[1] = false;// Добавляет очки опыта после действия (эта механика либо не работает, либо криво работает, не помню)
		//----------------------------------------------------------------------------------------------------------------------
		
		//РЕЗУЛЬТАТ 
		AddResult("Spur_Kart_FuelTank"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("Spur_Kart_Engine"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("Spur_Kart_Seat"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("Spur_Kart_Seat"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("Spur_Kart_Seat"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("Spur_Kart_Seat"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("MetalWire"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("MetalWire"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("MetalWire"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("MetalWire"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("MetalPlate"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

		AddResult("MetalPlate"); //Добавить результаты здесь

		m_ResultSetFullQuantity[0] = false;//true = Установите полное количество, false = ничего не делать
		m_ResultSetQuantity[0] = 1;//-1 = ничего не делать
		m_ResultSetHealth[0] = -1;//-1 = ничего не делать
		m_ResultInheritsHealth[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что этот результат наследует здоровье от числа ингредиента (value);(value) == -2 означает, что этот результат наследует здоровье со всех в среднем ингредиентами(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 значит сделать ничего; a (value) >= 0 означает, что это имя класса результата станет композитом имени, указанного в добавлении метода результатов и значение конфигурации. "color" ингредиента (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 Место в любом месте инвентаризации игроков, (value) >= 0 означает положение переключения с номером ингредиента(value)
		m_ResultUseSoftSkills[0] = false;// установить 'true' Разрешить модификацию значений Softskills на этом результате
		m_ResultReplacesIngredient[0] = -1;// value == -1 значит сделать ничего; a value >= 0 означает, что этот результат будет передавать элемент PropertiesVarible, вложения и т.д.. из значения ингредиента

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