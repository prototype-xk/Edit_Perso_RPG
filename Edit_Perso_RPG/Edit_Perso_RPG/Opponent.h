#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Class.h"
#include "Race.h"
#include "Random.h"
#include "Arme.h"

class Opponent
{
public:
    std::vector<std::string> Name = {"Odin","Thor","Loki","Prototype"};
    Opponent();
    std::string Tostring();
    void Choose();

protected:
    int Index;
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