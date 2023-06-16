#pragma once

#include <string>

namespace House
{
	class HouseStructure
	{
	public:
		static HouseStructure LoadHouseFromFile(std::string path);
	};
}
