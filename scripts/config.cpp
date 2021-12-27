class CfgPatches
{
	class FirstMod
	{
		requiredAddons[]=
		{
			// ""
		};
	};
};

class CfgMods
{
	class MangoMod
	{
		type = "mod";

		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"mangoMod/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"mangoMod/scripts/4_World"};
			};
		};
	};
};
/////////////////////////////////////////////////////////////
class CfgVehicles 
{
	class Inventory_Base;
	class Container_Base;
	class Box_Base;
	class BurlapSack: Inventory_Base
	{
        //canBeSplit=1;
        //varQuantityInit=70;
        //varQuantityMin=0;
        //varQuantityMax=100;
        //varQuantityDestroyOnMin=1;

		canBeDigged=1;

		allowOwnedCargoManipulation=1;

		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};

	class Barrel_ColorBase: Container_Base
	{
		itemSize[]={1,2};
		canBeDigged=1;

		allowOwnedCargoManipulation=1;

		inventorySlot[]=
		{
			"Back"
		};

		class Cargo
		{
			itemsCargoSize[]={10,40};
			allowOwnedCargoManipulation=1;
		};
	}
};