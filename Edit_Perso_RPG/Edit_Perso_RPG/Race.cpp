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

std::string Race::GetRaceName() {
	return RaceName;
}
int Race::GetMaxHealth() {
	return MaxHealth;
}
int Race::GetHealth() {
	return Health;
}
int Race::GetMaxMana() {
	return MaxMana;
}
int Race::GetMana() {
	return Mana;
}
int Race::GetStrength() {
	return Strength;
}
int Race::GetIntelligence() {
	return Intelligence;
}
int Race::GetAgility() {
	return Agility;
}
int Race::GetWeightMin() {
	return WeightMin;
}
int Race::GetWeightMax() {
	return WeightMax;
}
int Race::GetSizeMin() {
	return SizeMin;
}
int Race::GetSizeMax() {
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
	r.SetStats("Dward", 140, 50, 16, 8, 7, 90, 60, 140, 120);
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

Race Race::SelectRace() {
	int Choix;
	std::cout << "Select Race (No Choice going to put Human) :\n";
	std::cout << "1 - Elf\n2 - Dwarf\n3 - Human\n4 - Orc\n5 - Fairy\n";
	std::cout << "6 - Undead\n7 - Draconian\n8 - WereWolf\n9 - HighElf\n10 - Serpentfolk\n";
	std::cout << "11 - Classe Test\n";
	std::cout << "Enter a Number : ";
	std::cin >> Choix;

	// Retourne directement l'objet Race correspondant
	if (Choix == 1) {
		return Elf();
	}
	else if (Choix == 2 ) {
		return Dwarf();
	}
	else if (Choix == 3 ) {
		return Human();
	}
	else if (Choix == 4 ) {
		return Orc();
	}
	else if (Choix == 5 ) {
		return Fairy();
	}
	else if (Choix == 6 ) {
		return Undead();
	}
	else if (Choix == 7 ) {
		return Draconian();
	}
	else if (Choix == 8 ) {
		return WereWolf();
	}
	else if (Choix == 9 ) {
		return HighElf();
	}
	else if (Choix == 10) {
		return Serpentfolk();
	}
	else if (Choix == 11) {
		return Error();
	}
	else {
		return Human();
	}
}