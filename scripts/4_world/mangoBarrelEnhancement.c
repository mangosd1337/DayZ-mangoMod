modded class Barrel_ColorBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !IsOpen() )
			return true;

		return super.CanPutInCargo(parent);
	}

    override bool CanPutIntoHands( EntityAI parent )
	{
		if ( !IsOpen() )
			return true;

		return super.CanPutIntoHands(parent);
	}

    override void SetActions()
	{
        super.SetActions();

        AddAction(ActionWorldLiquidActionSwitch);
	    AddAction(ActionFillFuel);
	    AddAction(ActionFillCoolant);
	    AddAction(ActionFillGeneratorTank);
	    AddAction(ActionExtinguishFireplaceByLiquid);
	    AddAction(ActionFillBottleBase);
	    AddAction(ActionWaterGardenSlot);
	    AddAction(ActionWaterPlant);
	    AddAction(ActionForceDrink);
	    AddAction(ActionTransferLiquid);
	    AddAction(ActionEmptyBottleBase);
	    AddAction(ActionWashHandsItem);
	    AddAction(ActionDrink);

        //AddAction(ActionMineTreeBark);
    }
}