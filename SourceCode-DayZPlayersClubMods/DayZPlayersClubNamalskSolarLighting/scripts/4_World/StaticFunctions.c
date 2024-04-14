static void SetObjToObj( Object ParentObj, string ChildObjName, vector OffSet = "0.0 0.0 0.0" )
{
    //Setup the object, set the parent to orientation[x] = 0.0 so u can setup the offset
    Object NewObj = GetGame().CreateObject( ChildObjName, vector.Zero ); 
    NewObj.SetPosition( NewObj.GetPosition() + OffSet );
    ParentObj.AddChild( NewObj, -1, false );
    NewObj.Update();
}