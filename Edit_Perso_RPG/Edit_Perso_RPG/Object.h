#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Random.h"

class Object
{
public:
	Object();
	std::string GetName();
	std::string GetRarity();
protected:
	std::string Name;	// Name of Object
	std::string Rarity;	// Rarity of Object
};

class Potion : public Object
{
public:
	Potion();
	int GetManaRegen();
	int GetHealthRegen();
	void SetStats(std::string _Name, std::string _Rarity,int _Mana, int _Health);
protected:
	int Mana;
	int Health;
};

class Relic : public Object
{
public:
	Relic();
	int GetManaBonus();
	int GetHealthBonus();
	Relic SelectRelic();
	void SetStats(std::string _Name, std::string _Rarity, int _Mana, int _Health);
protected:
	int Mana;
	int Health;
};

Potion DebugPotion();
Potion Regen1Potion();
Potion Regen2Potion();
Potion Mana1Potion();
Potion Mana2Potion();

Relic DebugRelic();
Relic SCPRelic();
Relic ZeldaRelic();
Relic ThorRelic();
Relic OdinRelic();