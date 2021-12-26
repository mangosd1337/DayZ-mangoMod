modded class RainProcurementManager
{
    override void RainProcurementCheck()
	{		
		float rain_intensity = GetGame().GetWeather().GetRain().GetActual();
		float fill_per_update = 10000 * rain_intensity; //by default "RAIN_COEFFICIENT * rain_intensity" | RAIN_COEFFICIENT == 10

		if ( rain_intensity > 0 ) 
		{
			if ( m_ProcuringItem.GetQuantity() < m_ProcuringItem.GetQuantityMax() )
			{
				Liquid.FillContainerEnviro( m_ProcuringItem, LIQUID_WATER, fill_per_update );

				//Print( "Quantity of " + m_ProcuringItem + " is: " +  m_ProcuringItem.GetQuantity() );
			}
			else
			{		
				//Print("vesel full");		
				StopRainProcurement();				
			}
		}
	}
}