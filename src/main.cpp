#include "lua/include/lua.hpp"

#include "house/House.h"

int main()
{
	House::Parameters params;
	params.WorkingPath = "files\\";

	House::HouseState* house = House::CreateContext();

	house->Init(params);

	house->EnterContext();

	house->Finalise();

	House::DestroyContext(house);

	return 0;
}