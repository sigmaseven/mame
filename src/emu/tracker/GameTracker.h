#include <iostream>
#include <sstream>
#include <map>
#include <fstream>
#include "../emu/memory.h"

class GameTracker
{
	public:
		std::map<std::string, UINT32> stats;
		UINT8 *memory;
		std::stringstream json;
		
		void setStat(std::string name, UINT32 value);
		UINT32 getStat(std::string name);
		void clearStat(std::string name);
		void clearStats();
		void setMemoryBase(UINT8 *base);
		UINT8 readMemory(UINT16 address);
		void writeMemory(UINT16 address, UINT8 value);
		void buildJSON();
		void writeFile(std::string name);
};