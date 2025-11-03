#include "Race.h"
Race::Race() {
	MaxHealth = 100;	// Maximum Life Point
	Health = 100;		// Actual Life Point
	MaxMana = 100;		// Maximum Magic Energy
	Mana = 100;			// Actual Magic Energy
	Strength = 1;		// Physical Power
	Intelligence = 10;	// Magical Power
	Agility = 10;		// Speed and dexterity
}

Elf::Elf() {
	MaxHealth = 90;
	Health = MaxHealth;
	MaxMana = 120;
	Mana = MaxMana;
	Strength = 8;
	Intelligence = 17;
	Agility = 14;
}
Dwarf::Dwarf() {
	MaxHealth = 140;
	Health = MaxHealth;
	MaxMana = 50;
	Mana = MaxMana;
	Strength = 16;
	Intelligence = 8;
	Agility = 7;
}
Human::Human() {
	MaxHealth = 110;
	Health = MaxHealth;
	MaxMana = 70;
	Mana = MaxMana;
	Strength = 10;
	Intelligence = 10;
	Agility = 10;
}
Orc::Orc() {
	MaxHealth = 150;
	Health = MaxHealth;
	MaxMana = 40;
	Mana = MaxMana;
	Strength = 19;
	Intelligence = 7;
	Agility = 9;
}
Fairy::Fairy() {
	MaxHealth = 70;
	Health = MaxHealth;
	MaxMana = 160;
	Mana = MaxMana;
	Strength = 5;
	Intelligence = 19;
	Agility = 18;
}
Undead::Undead() {
	MaxHealth = 100;
	Health = MaxHealth;
	MaxMana = 80;
	Mana = MaxMana;
	Strength = 12;
	Intelligence = 12;
	Agility = 10;
}
Draconian::Draconian() {
	MaxHealth = 160;
	Health = MaxHealth;
	MaxMana = 90;
	Mana = MaxMana;
	Strength = 20;
	Intelligence = 14;
	Agility = 10;
}
WereWolf::WereWolf() {
	MaxHealth = 130;
	Health = MaxHealth;
	MaxMana = 50;
	Mana = MaxMana;
	Strength = 17;
	Intelligence = 9;
	Agility = 15;
}
HighElf::HighElf() {
	MaxHealth = 100;
	Health = MaxHealth;
	MaxMana = 150;
	Mana = MaxMana;
	Strength = 8;
	Intelligence = 21;
	Agility = 13;
}
Serpentfolk::Serpentfolk() {
	MaxHealth = 100;
	Health = MaxHealth;
	MaxMana = 110;
	Mana = MaxMana;
	Strength = 9;
	Intelligence = 16;
	Agility = 13;
}