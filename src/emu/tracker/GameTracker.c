#include "emu.h"
#include "GameTracker.h"

void GameTracker::setStat(std::string name, UINT64 value)
{
	stats[name] = value;
}

UINT64 *GameTracker::getStat(std::string name)
{
	if(stats.count(name))
	{
		return &stats[name];
	}
	else
	{
		return NULL;
	}
}

void GameTracker::clearStat(std::string name)
{
	if(stats.count(name))
	{
		stats.erase(name);
	}
}

void GameTracker::clearStats()
{
	stats.clear();
}

void GameTracker::setMemoryBase(UINT8 *base)
{
	memory = base;
}

UINT8 GameTracker::readMemory(UINT16 address)
{
	return memory[address];
}

void GameTracker::writeMemory(UINT16 address, UINT8 value)
{
	memory[address] = value;
}