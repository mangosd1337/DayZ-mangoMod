modded class BurlapSack
{
	override bool CanPutInCargo( EntityAI parent )
	{
        if(this.IsEmpty())
        {
            return true;
        }

        return super.CanPutInCargo(parent);
    }
}