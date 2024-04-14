modded class MissionGameplay
{
    override void OnInit()
    {
        super.OnInit();
        
		if ( !GetGame().IsMultiplayer() && !GetGame().IsClient() ) { SetLamps LampsInstance = new SetLamps; }
    } 
}