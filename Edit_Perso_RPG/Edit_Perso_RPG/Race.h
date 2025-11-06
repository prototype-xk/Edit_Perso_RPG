#pragma once
#include <string>
#include <iostream>

class Race { // 10 Races
public:
    Race();
    std::string GetRaceName();
    int GetMaxHealth();
    int GetHealth();
    int GetMaxMana();
    int GetMana();
    int GetStrength();
    int GetIntelligence();
    int GetAgility();
    int GetWeightMax();
    int GetWeightMin();
    int GetSizeMax();
    int GetSizeMin();
    void SetStats(std::string _RaceName,int _MaxHealth,int _MaxMana, int _Strength, int _Intelligence, int _Agility, int _WeightMax, int _WeightMin, int _SizeMax, int _SizeMin);
    Race SelectRace();
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