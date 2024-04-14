class PowerPole_Lamp extends Inventory_Base
{
	void PowerPole_Lamp()
	{
		SetPilotLight( true );
		SetIsHologram( true );
	}
	
	override void EEKilled(Object killer)
    {
        super.EEKilled( killer );
		
		SetPilotLight( false ); 
		SetIsHologram( false );
		
		this.Delete();
    }
	
	override void EEDelete( EntityAI parent )
	{
		super.EEDelete( parent );
		
		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			Particle.Play( ParticleList.IMPACT_METAL_RICOCHET, this.GetPosition() + Vector( 0, -0.3, 0 ) ).SetOrientation( "0.0 180.0 0.0" );
			Particle.Play( ParticleList.IMPACT_GLASS_EXIT, this.GetPosition() + Vector( 0, -0.3, 0 ) ).SetOrientation( "0.0 180.0 0.0" );
			// Particle.PlayOnObject(ParticleList.IMPACT_METAL_RICOCHET, this, "0.0 -0.3 0.0", "0.0 180.0 0.0" );
			// Particle.PlayOnObject(ParticleList.IMPACT_GLASS_EXIT, this, "0.0 -0.3 0.0", "0.0 180.0 0.0" );
			
			SEffectManager.PlaySound( "offroad_hit_window_small_SoundSet", this.GetPosition() );
			// SEffectManager.PlaySound( "offroad_hit_window_large_SoundSet", this.GetPosition() );
			// SEffectManager.PlaySoundOnObject( "offroad_hit_window_small_SoundSet", this );
			// SEffectManager.PlaySoundOnObject( "offroad_hit_window_large_SoundSet", this );
		}
	}
}