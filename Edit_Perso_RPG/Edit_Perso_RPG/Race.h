#pragma once
#include <string>
#include <iostream>

class Race {
public:
    std::string RaceName;
    int MaxHealth;
    int Health;
    int MaxMana;
    int Mana;
    int Strength;
    int Intelligence;
    int Agility;

    Race(); // constructeur par défaut

    Race SelectRace();
};
