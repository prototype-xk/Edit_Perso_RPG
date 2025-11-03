#pragma once
class Race // 10 Race
{
public:
	Race();
	~Race();
protected:
	int MaxHealth;
	int Health;
	int MaxMana;
	int Mana;
	int Strength;
	int Intelligence;
	int Agility;
};

class Elf : public Race {
public:
	Elf();
	~Elf();
private:

};
class Dwarf : public Race {
public:
	Dwarf();
	~Dwarf();
private:

};
class Human : public Race {
public:
	Human();
	~Human();
private:

};
class Orc : public Race {
public:
	Orc();
	~Orc();
private:

};
class Draconian : public Race {
public:
	Draconian();
	~Draconian();
private:

};
class Undead : public Race {
public:
	Undead();
	~Undead();
private:

};
class Fairy : public Race {
public:
	Fairy();
	~Fairy();
private:

};
class WereWolf : public Race {
public:
	WereWolf();
	~WereWolf();
private:

};
class HighElf : public Race {
public:
	HighElf();
	~HighElf();
private:

};
class Serpentfolk : public Race {
public:
	Serpentfolk();
	~Serpentfolk();
private:

};