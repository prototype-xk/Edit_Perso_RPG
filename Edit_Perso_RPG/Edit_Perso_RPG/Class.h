#pragma once
#include <string>
#include <iostream>

class Class // 14 Class
{
public:
    std::string ClassName;
    int HealthBonus;
    int ManaBonus;
    int StrengthBonus;
    int IntelligenceBonus;
    int AgilityBonus;

    Class();

    Class SelectClass();
};