#pragma once
#include <string>
#include "Random.h"
class Weapon
{
public:
	virtual void Attack() = 0;
protected:
	std::string Name;	// Name of The Sword
	int Damage;			// Number of Damage
	int Type;			// Type of Damage ( Magic / Phyiscal / etc..* )
};

class Sword : public Weapon
{
public:
	virtual void Attack() override;

protected:
	bool TwoHandle;
};

class Bow : public Weapon
{
public:
	virtual void Attack() override;

protected:
	int Distance;
	bool BowSize;
};

class Scepter : public Weapon
{
public:
	virtual void Attack() override;

protected:
	int Mana;
};

class Staff : public Weapon
{
public:
	virtual void Attack() override;

protected:
	int Mana;
};