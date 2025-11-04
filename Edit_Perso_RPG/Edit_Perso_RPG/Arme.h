#pragma once
#include <string>
#include "Random.h"
class Weapon
{
public:

protected:
	std::string Name;	// Name of The Sword
	int Damage;			// Number of Damage
	int Type;			// Type of Damage ( Magic / Phyiscal / etc..* )
};

class Sword : public Weapon
{
public:

protected:
};

class Bow : public Weapon
{
public:

protected:
};

class Scepter : public Weapon
{
public:

protected:
	int Mana;
};

class Staff : public Weapon
{
public:

protected:
	int Mana;
};