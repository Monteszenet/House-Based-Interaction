#pragma once

#include <string>

#include "HouseStructure.h"

namespace House
{
	struct Parameters
	{
		std::string WorkingPath = "";

	};

	class HouseState 
	{
	public:
		// Sets up state. Once returned, this state can be used fully.
		void Init(Parameters params);
		// Closes house. Once returned, DestroyContext() should be called.
		void Finalise();
		// Begin interaction with the house.
		void EnterContext();
		// Only one interaction with the house per frame.
		void Interact();

	private:
		std::string working_path = "";

		HouseStructure house_struct;

	private:

	};

	HouseState* CreateContext();
	void DestroyContext(HouseState* house);

}