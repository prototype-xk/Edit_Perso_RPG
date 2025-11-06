#pragma once
#include <string>
#include "Random.h"
class Object
{
public:
	Object();
	std::string GetName();
	std::string GetRarity();
	int GetEffect();
	int GetMana();
	int GetHealth();
	void SetStats(std::string _Name, std::string _Rarity, int _Mana, int _Health, int _Effect);
protected:
	std::string Name;	// Name of Object
	std::string Rarity;	// Rarity of Object
	int Mana;			// Number of Mana
	int Health;			// Number of Health
	int Effect;			// Effect of Object
};