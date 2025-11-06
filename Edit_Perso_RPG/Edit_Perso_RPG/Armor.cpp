#include "Armor.h"

Armor::Armor() {
	Name = "Null Armor";
	Resistance = 0;
	Rarity = "Null";
	Mana = 0;
	CriticalChance = 0;
}

std::string Armor::GetName() {
	return Name;
}
int Armor::GetResistance() {
	return Resistance;
}
std::string Armor::GetRarity() {
	return Rarity;
}
int Armor::GetMana() {
	return Mana;
}
int Armor::GetCriticalChance() {
	return CriticalChance;
}

void Armor::SetStats(std::string _Name, int _Resistance, std::string _Rarity, int _Mana, int _CriticalChance){
	Name = _Name;
	Resistance = _Resistance;
	Rarity = _Rarity;
	Mana = _Mana;
	CriticalChance = _CriticalChance;
}
Armor Debug() {
	Armor s;
	s.SetStats("DebugArmor", 815, "Debug", 854, 865);
	return s;
}
Armor Mage() {
	Armor s;
	s.SetStats("MageArmor", 10, "Mage", 150, 160);
	return s;
}
Armor Tank() {
	Armor s;
	s.SetStats("TankArmor", 999, "Tank", 999, 999);
	return s;
}
Armor Critical() {
	Armor s;
	s.SetStats("CriticalArmor", 1, "Critical", 1, 1);
	return s;
}