modded class ActionFillBottleBaseCB
{
	private int m_liquid_type;
	
	override void CreateActionComponent()
	{
		m_liquid_type = ActionFillBottleBase.Cast( m_ActionData.m_Action ).GetLiquidType( m_ActionData.m_Player, m_ActionData.m_Target, m_ActionData.m_MainItem );
		
		
		m_ActionData.m_ActionComponent = new CAContinuousFill(1000, m_liquid_type); //by default "UAQuantityConsumed.FILL_LIQUID"
		
		//first implementation for obtaining the fuel from the feed faster
		//TODO:: make some proper get method, maybe param in config?
		if ( m_ActionData.m_Target.GetObject() && m_ActionData.m_Target.GetObject().GetType() == "Land_FuelStation_Feed") //by default "UAQuantityConsumed.FUEL"
		{
			m_ActionData.m_ActionComponent = new CAContinuousFill(4000, m_liquid_type);
		}
	}
};

modded class ActionFillFuelCB
{
	private const float TIME_TO_REPEAT = 0.5;

	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousFillFuel( 4000, TIME_TO_REPEAT ); //by default "UAQuantityConsumed.FUEL"
	}
};

modded class ActionEmptyBottleBaseCB
{	
	override void CreateActionComponent()
	{
		float EmptiedQuantity;// = QUANTITY_EMPTIED_PER_SEC;
		Bottle_Base bottle = Bottle_Base.Cast(m_ActionData.m_MainItem);
		if (bottle)
			EmptiedQuantity = bottle.GetLiquidEmptyRate(); //unused since we overwrite it below
		m_ActionData.m_ActionComponent = new CAContinuousEmpty(2000);
	}
};