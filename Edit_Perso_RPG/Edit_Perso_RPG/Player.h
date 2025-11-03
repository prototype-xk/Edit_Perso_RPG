#pragma once
#include <string>
#include "Class.h"
#include "Race.h"

class Player
{
public:
	Player();
    Player(std::string _Pseudo);
	Player(int _Size, int _Weight, std::string _Pseudo);
	std::string Tostring();
protected:
    int Size;
    int Weight;
    std::string Pseudo;

    int MaxHealth;
    int Health;
    int MaxMana;
    int Mana;
    int Strength;
    int Intelligence;
    int Agility;

    int PourcentageCritique;

    std::string RaceName;
    std::string ClassName;
};