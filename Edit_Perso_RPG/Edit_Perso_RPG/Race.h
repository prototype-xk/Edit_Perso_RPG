#pragma once
#include <string>
#include <iostream>

class Race { // 10 Races
public:
    std::string RaceName;
    int MaxHealth;
    int Health;
    int MaxMana;
    int Mana;
    int Strength;
    int Intelligence;
    int Agility;
    int WeightMax;
    int WeightMin;
    int SizeMax;
    int SizeMin;

    Race();

    Race SelectRace();
};
