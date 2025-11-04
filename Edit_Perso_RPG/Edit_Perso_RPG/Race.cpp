#include "Race.h"
Race::Race() { // 10 Races
	RaceName = "Nothing";
	MaxHealth = 100;	// Maximum Life Point
	Health = 100;		// Actual Life Point
	MaxMana = 100;		// Maximum Magic Energy
	Mana = 100;			// Actual Magic Energy
	Strength = 1;		// Physical Power
	Intelligence = 10;	// Magical Power
	Agility = 10;		// Speed and dexterity
}

Race Elf() {
	Race r;
	r.RaceName = "Elf";
	r.MaxHealth = 90;
	r.Health = r.MaxHealth;
	r.MaxMana = 120;
	r.Mana = r.MaxMana;
	r.Strength = 8;
	r.Intelligence = 17;
	r.Agility = 14;
	r.WeightMax = 75;
	r.WeightMin = 55;
	r.SizeMax = 190;
	r.SizeMin = 170;
	return r;
}
Race Dwarf() {
	Race r;
	r.RaceName = "Dwarf";
	r.MaxHealth = 140;
	r.Health = r.MaxHealth;
	r.MaxMana = 50;
	r.Mana = r.MaxMana;
	r.Strength = 16;
	r.Intelligence = 8;
	r.Agility = 7;
	r.WeightMax = 90;
	r.WeightMin = 60;
	r.SizeMax = 140;
	r.SizeMin = 120;
	return r;
}
Race Human() {
	Race r;
	r.RaceName = "Human";
	r.MaxHealth = 100;
	r.Health = r.MaxHealth;
	r.MaxMana = 70;
	r.Mana = r.MaxMana;
	r.Strength = 10;
	r.Intelligence = 10;
	r.Agility = 10;
	r.WeightMax = 100;
	r.WeightMin = 55;
	r.SizeMax = 190;
	r.SizeMin = 160;
	return r;
}
Race Orc() {
	Race r;
	r.RaceName = "Orc";
	r.MaxHealth = 150;
	r.Health = r.MaxHealth;
	r.MaxMana = 40;
	r.Mana = r.MaxMana;
	r.Strength = 19;
	r.Intelligence = 7;
	r.Agility = 9;
	r.WeightMax = 150;
	r.WeightMin = 90;
	r.SizeMax = 220;
	r.SizeMin = 180;
	return r;
}
Race Fairy() {
	Race r;
	r.RaceName = "Fairy";
	r.MaxHealth = 70;
	r.Health = r.MaxHealth;
	r.MaxMana = 160;
	r.Mana = r.MaxMana;
	r.Strength = 5;
	r.Intelligence = 19;
	r.Agility = 18;
	r.WeightMax = 5;
	r.WeightMin = 1;
	r.SizeMax = 50;
	r.SizeMin = 30;
	return r;
}
Race Undead() {
	Race r;
	r.RaceName = "Undead";
	r.MaxHealth = 90;
	r.Health = r.MaxHealth;
	r.MaxMana = 80;
	r.Mana = r.MaxMana;
	r.Strength = 12;
	r.Intelligence = 12;
	r.Agility = 10;
	r.WeightMax = 90;
	r.WeightMin = 40;
	r.SizeMax = 200;
	r.SizeMin = 150;
	return r;
}
Race Draconian() {
	Race r;
	r.RaceName = "Draconian";
	r.MaxHealth = 160;
	r.Health = r.MaxHealth;
	r.MaxMana = 90;
	r.Mana = r.MaxMana;
	r.Strength = 20;
	r.Intelligence = 14;
	r.Agility = 10;
	r.WeightMax = 200;
	r.WeightMin = 120;
	r.SizeMax = 250;
	r.SizeMin = 200;
	return r;
}
Race WereWolf() {
	Race r;
	r.RaceName = "WereWolf";
	r.MaxHealth = 130;
	r.Health = r.MaxHealth;
	r.MaxMana = 50;
	r.Mana = r.MaxMana;
	r.Strength = 17;
	r.Intelligence = 9;
	r.Agility = 15;
	r.WeightMax = 130;
	r.WeightMin = 80;
	r.SizeMax = 220;
	r.SizeMin = 180;
	return r;
}
Race HighElf() {
	Race r;
	r.RaceName = "HighElf";
	r.MaxHealth = 100;
	r.Health = r.MaxHealth;
	r.MaxMana = 150;
	r.Mana = r.MaxMana;
	r.Strength = 8;
	r.Intelligence = 21;
	r.Agility = 13;
	r.WeightMax = 80;
	r.WeightMin = 60;
	r.SizeMax = 195;
	r.SizeMin = 175;
	return r;
}
Race Serpentfolk() {
	Race r;
	r.RaceName = "Serpentfolk";
	r.MaxHealth = 100;
	r.Health = r.MaxHealth;
	r.MaxMana = 110;
	r.Mana = r.MaxMana;
	r.Strength = 9;
	r.Intelligence = 16;
	r.Agility = 13;
	r.WeightMax = 100;
	r.WeightMin = 50;
	r.SizeMax = 210;
	r.SizeMin = 160;
	return r;
}

Race Race::SelectRace() {
	int Choix;
	std::cout << "Select Race (No Choice going to put Human) :\n";
	std::cout << "1 - Elf\n2 - Dwarf\n3 - Human\n4 - Orc\n5 - Fairy\n";
	std::cout << "6 - Undead\n7 - Draconian\n8 - WereWolf\n9 - HighElf\n10 - Serpentfolk\n";
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
	else {
		return Human();
	}
}