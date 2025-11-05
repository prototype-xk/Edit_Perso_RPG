#pragma once
#include <string>
#include "Random.h"
class Weapon
{
public:
	Weapon();
	std::string GetName();
	int GetDamage();
	std::string GetType();
	std::string GetRarity();
protected:
	std::string Name;	// Name of The Sword
	int Damage;			// Number of Damage
	std::string Type;	// Type of Damage ( Magic / Phyiscal / etc..* )
	std::string Rarity;	// Rarity of the Weapon
};

class Sword : public Weapon
{
public:
	Sword();
	int GetTwoHandle();
	int GetCriticalChance();
	int GetCriticalDamage();
	void SetStats(std::string _Name, int _Damage, std::string _Type, bool _TwoHandle, int _CritChance, int _CritDamage, std::string _Rarity);

protected:
	bool TwoHandle;
	int CriticalChance;
	int CriticalDamage;
};

class Bow : public Weapon
{
public:
	Bow();
	int GetDistance();
	int GetBowSize();
	int GetCriticalChance();
	int GetCriticalDamage();
	void SetStats(std::string _Name, int _Damage, int _Distance,std::string _Type, int _BowSize, int _CritChance, int _CritDamage, std::string _Rarity);

protected:
	int Distance;
	int BowSize;
	int CriticalChance;
	int CriticalDamage;
};

class Scepter : public Weapon
{
public:
	Scepter();
	int GetMana();
	int GetDistance();
	void SetStats(std::string _Name, int _Damage, std::string _Type, int _Mana, int _Distance, std::string _Rarity);

protected:
	int Mana;
	int Distance;
};

class Staff : public Weapon
{
public:
	Staff();
	int GetMana();
	int GetDistance();
	int GetCriticalChance();
	int GetCriticalDamage();
	void SetStats(std::string _Name, int _Damage, std::string _Type, int _Mana, int _Distance, int _CritChance, int _CritDamage, std::string _Rarity);

protected:
	int Mana;
	int Distance;
	int CriticalChance;
	int CriticalDamage;
};

Sword IronSword();
Sword DiamondSword();
Sword NetheriteSword();
Sword DebugSword();

Bow HunterBow();
Bow SpiderBow();
Bow FireBow();
Bow DebugBow();

Scepter HunterScepter();
Scepter SpiderScepter();
Scepter FireScepter();
Scepter DebugScepter();

Staff HunterStaff();
Staff SpiderStaff();
Staff FireStaff();
Staff DebugStaff();