#pragma once
#include <string>
class Armor
{
public:
	Armor();
	std::string GetName();
	int GetResistance();
	std::string GetRarity();
	int GetMana();
	int GetCriticalChance();
	void SetStats(std::string _Name, int _Resistance, std::string _Rarity,int _Mana, int _CriticalChance);
protected:
	std::string Name;	// Name of The Sword
	int Resistance;		// Resistance of The Armor
	std::string Rarity;	// Rarity of the Weapon
	int Mana;			// Number of Mana
	int CriticalChance;	// Critical Chance
};

Armor Debug();
Armor Mage();
Armor Tank();
Armor Critical();