#include "House.h"

namespace House
{
	HouseState* CreateContext()
	{
		HouseState* house = new HouseState;
		return house;
	}

	void DestroyContext(HouseState* house)
	{
		delete house;
	}


	void HouseState::Init(Parameters params)
	{
		working_path = params.WorkingPath;

		house_struct = HouseStructure::LoadHouseFromFile(working_path + "house");


	}

	void HouseState::Finalise()
	{

	}

}