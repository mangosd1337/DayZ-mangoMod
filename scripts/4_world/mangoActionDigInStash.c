modded class ActionDigInStash
{
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if(target.GetObject().GetType().ToType().IsInherited(Barrel_ColorBase))
        {
            Barrel_ColorBase barrel = Barrel_ColorBase.Cast(target.GetObject());
            return !barrel.IsOpen();
        }

        return super.ActionCondition( player, target, item );
    }
};