#pragma once
class Race
{
public:
	Race();
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
private:

};
class Dwarf : public Race {
public:
	Dwarf();
private:

};
class Human : public Race {
public:
	Human();
private:

};
class Orc : public Race {
public:
	Orc();
private:

};
class Draconian : public Race {
public:
	Draconian();
private:

};
class Undead : public Race {
public:
	Undead();
private:

};
class Fairy : public Race {
public:
	Fairy();
private:

};
class WereWolf : public Race {
public:
	WereWolf();
private:

};
class HighElf : public Race {
public:
	HighElf();
private:

};
class Serpentfolk : public Race {
public:
	Serpentfolk();
private:

};