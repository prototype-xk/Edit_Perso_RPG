#include "Object.h"
Object::Object() {
	Name = "Null Object";
	Rarity = "Null O";
}

std::string Object::GetName() {
	return Name;
}
std::string Object::GetRarity() {
	return Rarity;
}

Potion::Potion() {
	Name = "Null Potion";
	Rarity = "Null P";
	Mana = 0;
	Health = 0;
}
int Potion::GetHealthRegen() {
	return Health;
}
int Potion::GetManaRegen() {
	return Mana;
}
void Potion::SetStats(std::string _Name, std::string _Rarity, int _Mana, int _Health) {
	Name = _Name;
	Rarity = _Rarity;
	Mana = _Mana;
	Health = _Health;
}

Relic::Relic() {
	Name = "Null Relic";
	Rarity = "Null R";
	Mana = 0;
	Health = 0;
}
int Relic::GetHealthBonus() {
	return Health;
}
int Relic::GetManaBonus() {
	return Mana;
}
void Relic::SetStats(std::string _Name, std::string _Rarity, int _Mana, int _Health) {
	Name = _Name;
	Rarity = _Rarity;
	Mana = _Mana;
	Health = _Health;
}

Relic Relic::SelectRelic() {
	/*Random rd;
	int Index = rd.getRandomNumber(1, 5);*/
	int Index;
	std::cout << "1 - Debug Relic\n2 - SCP Relic\n3 - Zelda Relic\n4 - Thor Relic\n5 - Odin Relic\n";
	std::cout << "Quelle Relic Voulez Vous choisir ? (valeur hors possible Pas de Relic)\n";
	std::cin >> Index;
	std::vector<Relic> Relic = { DebugRelic(),SCPRelic(),ZeldaRelic(),ThorRelic(),OdinRelic() };
	if (Index < 1 || Index > Relic.size()) {
		Index = 2; // Human par défaut
	}
	return Relic[Index - 1];
}

Potion DebugPotion() {
	Potion p;
	p.SetStats("DebugPotion", "Debug", 854, 561);
	return p;
}
Potion Regen1Potion() {
	Potion p;
	p.SetStats("Regen1Potion", "Commun", 10, 10);
	return p;
}
Potion Regen2Potion() {
	Potion p;
	p.SetStats("Regen2Potion", "Epic", 20, 50);
	return p;
}
Potion Mana1Potion() {
	Potion p;
	p.SetStats("Mana1Potion", "Rare", 20, 10);
	return p;
}
Potion Mana2Potion() {
	Potion p;
	p.SetStats("Mana2Potion", "Legendary", 70, 20);
	return p;
}
Relic DebugRelic() {
	Relic r;
	r.SetStats("DebugRelic", "Debug", 854, 561);
	return r;
}
Relic SCPRelic() {
	Relic r;
	r.SetStats("SCPRelic", "Commun", 10, 10);
	return r;
}
Relic ZeldaRelic() {
	Relic r;
	r.SetStats("ZeldaRelic", "Rare", 20, 20);
	return r;
}
Relic ThorRelic() {
	Relic r;
	r.SetStats("ThorRelic", "Epic", 50, 50);
	return r;
}
Relic OdinRelic() {
	Relic r;
	r.SetStats("OdinRelic", "Legendary", 70, 70);
	return r;
}