modded class MissionBase
{
    protected ItemBase      m_StreetLightingBattery;
    bool                    m_IsOnNamalskIsland;

    override void OnInit()
    {
        super.OnInit();
        
        string world_name;
        GetGame().GetWorldName( world_name );
        world_name.ToLower();

        if ( world_name == "namalsk" )
            m_IsOnNamalskIsland = true;
        else
            m_IsOnNamalskIsland = false;
        
        // static-dynamic structures
        if ( m_IsOnNamalskIsland && GetGame().IsServer() )
        {
            m_StreetLightingBattery = ItemBase.Cast( GetGame().CreateObjectEx( "StreetLightingBattery", "3594.531 145.604 6677.063", ECE_NOLIFETIME | ECE_CREATEPHYSICS ) );
            m_StreetLightingBattery.SetPosition( "3594.531 145.604 6677.063" );
            m_StreetLightingBattery.SetOrientation( "172.265 0 0" );
            m_StreetLightingBattery.Update();
        }
    }
}