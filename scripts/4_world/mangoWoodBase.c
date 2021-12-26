modded class WoodBase
{
    const string BARREL = "Barrel_ColorBase";

    override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
        if(item.GetType().ToType().IsInherited(BARREL.ToType()))
        {
            output_map.Insert(m_BarkType,1);
            GetGame().ChatPlayer("definitely a barrel");
        }
        else
        {
            super.GetMaterialAndQuantityMap(item, output_map);
            GetGame().ChatPlayer("nope.avi");
        }
	}

    override int GetAmountOfDrops(ItemBase item)
    {
        if(item.GetType().ToType().IsInherited(BARREL.ToType()))
        {
            return -1;
        }

        return super.GetAmountOfDrops(item);
    }
}