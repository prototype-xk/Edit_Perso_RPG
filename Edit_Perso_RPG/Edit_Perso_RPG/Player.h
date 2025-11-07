#pragma once
#include <string>
#include <iostream>
#include "Class.h"
#include "Race.h"
#include "Random.h"
#include "Arme.h"
#include "Object.h"

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
    void GetWeapon();
    Relic GetRelic();
    Potion GetPotion();
    const std::string GetWeaponName(const Weapon& Weapon);

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
    std::string RelicName;
    std::string WeaponName;
    std::string ArmorName;
private:
    Bow b;
};