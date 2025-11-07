#include "Race.h"
Race::Race() { // 10 Races
	RaceName = "Nothing";
	MaxHealth = 100;
	Health = 100;
	MaxMana = 100;
	Mana = 10;
	Strength = 10;
	Intelligence = 10;
	Agility = 10;
	WeightMax = 100;
	WeightMin = 0;
	SizeMax = 100;
	SizeMin = 0;
}

const std::string Race::GetRaceName() {
	return RaceName;
}
const int Race::GetMaxHealth() {
	return MaxHealth;
}
const int Race::GetHealth() {
	return Health;
}
const int Race::GetMaxMana() {
	return MaxMana;
}
const int Race::GetMana() {
	return Mana;
}
const int Race::GetStrength() {
	return Strength;
}
const int Race::GetIntelligence() {
	return Intelligence;
}
const int Race::GetAgility() {
	return Agility;
}
const int Race::GetWeightMin() {
	return WeightMin;
}
const int Race::GetWeightMax() {
	return WeightMax;
}
const int Race::GetSizeMin() {
	return SizeMin;
}
const int Race::GetSizeMax() {
	return SizeMax;
}

void Race::SetStats(std::string _RaceName, int _MaxHealth, int _MaxMana, int _Strength, int _Intelligence, int _Agility, int _WeightMax, int _WeightMin, int _SizeMax, int _SizeMin) {
	RaceName = _RaceName;
	MaxHealth = _MaxHealth;
	Health = _MaxHealth;
	MaxMana = _MaxMana;
	Mana = _MaxMana;
	Strength = _Strength;
	Intelligence = _Intelligence;
	Agility = _Agility;
	WeightMax = _WeightMax;
	WeightMin = _WeightMin;
	SizeMax = _SizeMax;
	SizeMin = _SizeMin;
}

Race Elf() {
	Race r;
	r.SetStats("Elf", 90, 120, 8, 17, 14, 75, 55, 190, 170);
	return r;
}
Race Dwarf() {
	Race r;
	r.SetStats("Dwarf", 140, 50, 16, 8, 7, 90, 60, 140, 120);
	return r;
}
Race Human() {
	Race r;
	r.SetStats("Human", 100, 70, 10, 10, 10, 100, 55, 190, 160);
	return r;
}
Race Orc() {
	Race r;
	r.SetStats("Orc", 150, 40, 19, 7, 9, 150, 90, 220, 180);
	return r;
}
Race Fairy() {
	Race r;
	r.SetStats("Fairy", 70, 160, 5, 19, 18, 5, 1, 50, 30);
	return r;
}
Race Undead() {
	Race r;
	r.SetStats("Undead", 90, 80, 12, 12, 10, 90, 40, 200, 150);
	return r;
}
Race Draconian() {
	Race r;
	r.SetStats("Draconian", 160, 90, 20, 14, 10, 200, 120, 250, 200);
	return r;
}
Race WereWolf() {
	Race r;
	r.SetStats("WereWolf", 130, 50, 17, 9, 15, 130, 80, 220, 180);
	return r;
}
Race HighElf() {
	Race r;
	r.SetStats("HighElf", 100, 150, 8, 21, 13, 80, 60, 195, 175);
	return r;
}
Race Serpentfolk() {
	Race r;
	r.SetStats("Serpentfolk", 100, 110, 9, 16, 13, 100, 50, 210, 160);
	return r;
}
Race Error() {
	Race r;
	r.SetStats("Debug", 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 1000000, 0);
	return r;
}

Race DebugA() {
	Race r;
	r.SetStats("DebugA", 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 1000000, 0);
	return r;
}

Race Race::SelectRace() {
	int Choix;
	std::cout << "Select Race (No Choice going to put Human) :\n";
	std::cout << "1 - Elf\n2 - Dwarf\n3 - Human\n4 - Orc\n5 - Fairy\n";
	std::cout << "6 - Undead\n7 - Draconian\n8 - WereWolf\n9 - HighElf\n10 - Serpentfolk\n";
	std::cout << "11 - Debug\n12 - DebugA\n";
	std::cout << "Enter a Number : ";
	std::cin >> Choix;

	std::vector<Race> Races = { Elf(), Dwarf(), Human(), Orc(), Fairy(),
								Undead(), Draconian(), WereWolf(), HighElf(), Serpentfolk(), Error(), DebugA()};

	if (Choix < 1 || Choix > Races.size()) {
		Choix = 3; // Human par défaut
	}
	return Races[Choix - 1];
}

Race Race::SelectRaceOpponent() {
	Random rd;
	int Choix = rd.getRandomNumber(1,10);
	std::vector<Race> Races = { Elf(), Dwarf(), Human(), Orc(), Fairy(),
								Undead(), Draconian(), WereWolf(), HighElf(), Serpentfolk(), Error() };

	if (Choix < 1 || Choix > Races.size()) {
		Choix = 3; // Human par défaut
	}
	return Races[Choix - 1];
}