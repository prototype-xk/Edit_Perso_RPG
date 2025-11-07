#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Random.h"

class Race { // 10 Races
public:
    Race();
    const std::string GetRaceName();
    const int GetMaxHealth();
    const int GetHealth();
    const int GetMaxMana();
    const int GetMana();
    const int GetStrength();
    const int GetIntelligence();
    const int GetAgility();
    const int GetWeightMax();
    const int GetWeightMin();
    const int GetSizeMax();
    const int GetSizeMin();
    void SetStats(std::string _RaceName, int _MaxHealth, int _MaxMana, int _Strength, int _Intelligence, int _Agility, int _WeightMax, int _WeightMin, int _SizeMax, int _SizeMin);
    Race SelectRace();
    Race SelectRaceOpponent();
protected:
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
};

Race Elf();
Race Dwarf();
Race Human();
Race Orc();
Race Fairy();
Race Undead();
Race Draconian();
Race WereWolf();
Race HighElf();
Race Serpentfolk();
Race Error();
Race DebugA();