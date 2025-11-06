#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Random.h"

class Class // 14 Class
{
public:
    Class();
    const std::string GetClassName();
    const int GetHealthBonus();
    const int GetManaBonus();
    const int GetStrengthBonus();
    const int GetIntelligenceBonus();
    const int GetAgilityBonus();
    void SetStats(std::string _ClassName, int _HealthBonus, int _ManaBonus, int _StrengthBonus, int _IntelligenceBonus, int _AgilityBonus);
    Class SelectClass();
    Class SelectClassOpponent();
protected:
    std::string ClassName;
    int HealthBonus;
    int ManaBonus;
    int StrengthBonus;
    int IntelligenceBonus;
    int AgilityBonus;
};