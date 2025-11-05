#pragma once
#include <string>
#include <iostream>
#include "Class.h"
#include "Race.h"
#include "Random.h"
#include "Arme.h"

class Player
{
public:
    Player();
    Player(std::string _Pseudo);
    std::string Tostring(int Size, int Weight);
    void Choose();
    int SizeMax;
    int SizeMin;
    int WeightMax;
    int WeightMin;

protected:
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