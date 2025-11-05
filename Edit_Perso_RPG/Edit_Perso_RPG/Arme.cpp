#include "Arme.h"
Weapon::Weapon() {
	Name = "Null Weapon";
	Damage = 0;
	Type = "Null";
	Rarity = "Null";
}
std::string Weapon::GetName() {
	return Name;
};
int Weapon::GetDamage() {
	return Damage;
};
std::string Weapon::GetType() {
	return Type;
};
std::string Weapon::GetRarity() {
	return Rarity;
};

// Sword Weapon

Sword::Sword() {
	Name = "Null Sword";
	Damage = 0;
	Type = "Null";
	TwoHandle = 0;
	CriticalChance = 0;
	CriticalDamage = 0;
	Rarity = "Null";
}
void Sword::SetStats(std::string _Name, int _Damage, std::string _Type, bool _TwoHandle, int _CritChance, int _CritDamage, std::string _Rarity) {
	Name = _Name;
	Damage = _Damage;
	Type = _Type;
	TwoHandle = _TwoHandle;
	CriticalChance = _CritChance;
	CriticalDamage = _CritDamage;
	Rarity = _Rarity;
}
int Sword::GetTwoHandle() {
	return TwoHandle;
};
int Sword::GetCriticalChance() {
	return CriticalChance;
};
int Sword::GetCriticalDamage() {
	return CriticalDamage;
};
// Sword :
Sword IronSword() {
	Sword s;
	s.SetStats("Iron Sword", 25, "Neutral", false, 10, 150, "Common");
	return s;
}
Sword DiamondSword() {
	Sword s;
	s.SetStats("Diamond Sword", 50, "Neutral", false, 25, 250, "Rare");
	return s;
}
Sword NetheriteSword() {
	Sword s;
	s.SetStats("Netherite Sword", 75, "Neutral", false, 50, 500, "Epic");
	return s;
}
Sword DebugSword() {
	Sword s;
	s.SetStats("DebugSword", 100, "Debug", true, 100, 1000, "Debug");
	return s;
}


// Bow Weapon

Bow::Bow() {
	Name = "Null Bow";
	Damage = 0;
	Type = "Null";
	BowSize = 0;
	Distance = 0;
	CriticalChance = 0;
	CriticalDamage = 0;
	Rarity = "Null";
}
void Bow::SetStats(std::string _Name, int _Damage, int _Distance, std::string _Type, int _BowSize, int _CritChance, int _CritDamage, std::string _Rarity) {
	Name = _Name;
	Damage = _Damage;
	Distance = _Distance;
	Type = _Type;
	BowSize = _BowSize;
	CriticalChance = _CritChance;
	CriticalDamage = _CritDamage;
	Rarity = _Rarity;
}
int Bow::GetDistance() {
	return Distance;
}
int Bow::GetCriticalChance() {
	return CriticalChance;
}
int Bow::GetBowSize() {
	return BowSize;
}
int Bow::GetCriticalDamage() { 
	return CriticalDamage;
}

Bow HunterBow() {
	Bow s;
	s.SetStats("HunterBow", 100, 10, "Hunting", 10, 100, 1000, "Mythic");
	return s;
}
Bow SpiderBow() {
	Bow s;
	s.SetStats("SpiderBow", 56, 53, "Archano", 20, 260, 8595, "Legendary");
	return s;
}
Bow FireBow() {
	Bow s;
	s.SetStats("FireBow", 80, 83, "Fire", 50, 500, 1250, "Rare");
	return s;
}
Bow DebugBow() {
	Bow s;
	s.SetStats("DebugBow", 20, 26, "Debug", 60, 700, 2000, "Debug");
	return s;
}

/*
Name
Damage
Type
Rarity
Distance
BowSize
CriticalChance
CriticalDamage
*/

// Scepter Weapon

Scepter::Scepter() {
	Name = "Null Scepter";
	Damage = 0;
	Type = "Null";
	Mana = 0;
	Distance = 0;
	Rarity = "Null";
}
void Scepter::SetStats(std::string _Name, int _Damage, std::string _Type, int _Mana, int _Distance, std::string _Rarity) {
	Name = _Name;
	Damage = _Damage;
	Type = _Type;
	Mana = _Mana;
	Distance = _Distance;
	Rarity = _Rarity;
}
int Scepter::GetDistance() {
	return Distance;
}
int Scepter::GetMana() {
	return Mana;
}

Scepter HunterScepter() {
	Scepter s;
	s.SetStats("HunterScepter", 20, "Hunting", 10, 10, "Commun");
	return s;
}
Scepter SpiderScepter() {
	Scepter s;
	s.SetStats("SpiderScepter", 20, "Arachno", 10, 10, "Rare");
	return s;
}
Scepter FireScepter() {
	Scepter s;
	s.SetStats("FireScepter", 20, "Fire", 10, 10, "Epic");
	return s;
}
Scepter DebugScepter() {
	Scepter s;
	s.SetStats("DebugScepter", 20, "Debug", 10, 10, "Debug");
	return s;
}

// Staff Weapon

Staff::Staff() {
	Name = "Null Staff";
	Damage = 0;
	Type = "Null";
	Mana = 0;
	Distance = 0;
	CriticalChance = 0;
	CriticalDamage = 0;
	Rarity = "Null";
}
void Staff::SetStats(std::string _Name, int _Damage, std::string _Type, int _Mana, int _Distance, int _CritChance, int _CritDamage, std::string _Rarity) {
	Name = _Name;
	Damage = _Damage;
	Type = _Type;
	Mana = _Mana;
	Distance = _Distance;
	CriticalChance = _CritChance;
	CriticalDamage = _CritDamage;
	Rarity = _Rarity;
}
int Staff::GetDistance() {
	return Distance;
}
int Staff::GetMana() {
	return Mana;
}
int Staff::GetCriticalChance() {
	return CriticalChance;
}
int Staff::GetCriticalDamage() {
	return CriticalDamage;
}

Staff HunterStaff() {
	Staff s;
	s.SetStats("HunterStaff", 20, "Hunting", 10, 10, 10, 10, "Rare");
	return s;
}
Staff SpiderStaff() {
	Staff s;
	s.SetStats("SpiderStaff", 20, "Arachno", 10, 10, 10, 10, "Legendary");
	return s;
}
Staff FireStaff() {
	Staff s;
	s.SetStats("FireStaff", 20, "Fire", 10, 10, 10, 10, "Uncommon");
	return s;
}
Staff DebugStaff() {
	Staff s;
	s.SetStats("DebugStaff", 20, "Debug", 10, 10, 10, 10, "Debug");
	return s;
}