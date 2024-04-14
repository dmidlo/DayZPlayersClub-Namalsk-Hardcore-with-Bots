class StreetLightingBattery extends House
{
	FlashlightLight m_Light;
	ref Timer m_CheckBattry;
	bool lightON = false;
	
	void StreetLightingBattery()
	{
		m_CheckBattry = new Timer( CALL_CATEGORY_SYSTEM );
		m_CheckBattry.Run(0.6, this, "CheckBattry", NULL, true);
	}

	void CheckBattry()
	{
	
		ItemBase itemNVG = NULL;
		itemNVG = this.FindAttachmentBySlotName("CarBattery");
		
		if ( itemNVG != NULL )
		{
			if (lightON == false)
			{
				if (GetGame().IsClient() || !GetGame().IsMultiplayer())
				{ 
					lightON = true;
					m_Light = FlashlightLight.Cast( ScriptedLightBase.CreateLight(FlashlightLight, "0 0 0", 0.08) );
					m_Light.AttachOnMemoryPoint(this, "beamStart", "beamEnd");
					m_Light.SetIntensity( 1, 0 );
				}
			}
		}
		else
		{
			if (lightON)
			{
				lightON = false;
				m_Light.FadeOut();
				m_Light = NULL;	
			}					
		}
		
	}

	void ~StreetLightingBattery()
	{
		m_CheckBattry.Stop();
		
		if (m_Light)
			m_Light.FadeOut();
			m_Light = NULL;
	}
}