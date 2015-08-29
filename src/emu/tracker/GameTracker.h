#include <iostream>
#include <map>
#include "../emu/memory.h"

class GameTracker
{
	public:
		std::map<std::string, UINT64> stats;
		UINT8 *memory;
		
		void setStat(std::string name, UINT64 value);
		UINT64 *getStat(std::string name);
		void clearStat(std::string name);
		void clearStats();
		void setMemoryBase(UINT8 *base);
		UINT8 readMemory(UINT16 address);
		void writeMemory(UINT16 address, UINT8 value);
};