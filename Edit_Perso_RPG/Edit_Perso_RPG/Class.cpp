#include "Class.h"
Class::Class() {
    HealthBonus = 0;        // Bonus Life Point
    ManaBonus = 0;          // Bonus Magic Energy
    StrengthBonus = 0;      // Bonus Physical Power
    IntelligenceBonus = 0;  // Bonus Magical Power
    AgilityBonus = 0;       // Bonus Speed and Dexterity
}

Warrior::Warrior() {
    HealthBonus = 20;
    ManaBonus = 0;
    StrengthBonus = 3;
    IntelligenceBonus = 0;
    AgilityBonus = 1;
}
Mage::Mage() {
    HealthBonus = 0;
    ManaBonus = 40;
    StrengthBonus = 0;
    IntelligenceBonus = 4;
    AgilityBonus = 0;
}
Rogue::Rogue() {
    HealthBonus = 0;
    ManaBonus = 0;
    StrengthBonus = 1;
    IntelligenceBonus = 0;
    AgilityBonus = 4;
}
Cleric::Cleric() {
    HealthBonus = 10;
    ManaBonus = 30;
    StrengthBonus = 0;
    IntelligenceBonus = 3;
    AgilityBonus = 0;
}
Paladin::Paladin() {
    HealthBonus = 25;
    ManaBonus = 10;
    StrengthBonus = 2;
    IntelligenceBonus = 1;
    AgilityBonus = 0;
}
Ranger::Ranger() {
    HealthBonus = 0;
    ManaBonus = 10;
    StrengthBonus = 1;
    IntelligenceBonus = 0;
    AgilityBonus = 3;
}
Bard::Bard() {
    HealthBonus = 0;
    ManaBonus = 20;
    StrengthBonus = 0;
    IntelligenceBonus = 2;
    AgilityBonus = 2;
}
Necromancer::Necromancer() {
    HealthBonus = 0;
    ManaBonus = 30;
    StrengthBonus = 0;
    IntelligenceBonus = 4;
    AgilityBonus = 0;
}
Monk::Monk() {
    HealthBonus = 10;
    ManaBonus = 10;
    StrengthBonus = 2;
    IntelligenceBonus = 2;
    AgilityBonus = 2;
}
Sorcerer::Sorcerer() {
    HealthBonus = 0;
    ManaBonus = 50;
    StrengthBonus = 0;
    IntelligenceBonus = 5;
    AgilityBonus = 0;
}
Druid::Druid() {
    HealthBonus = 10;
    ManaBonus = 30;
    StrengthBonus = 1;
    IntelligenceBonus = 3;
    AgilityBonus = 0;
}
Barbarian::Barbarian() {
    HealthBonus = 40;
    ManaBonus = 0;
    StrengthBonus = 5;
    IntelligenceBonus = 0;
    AgilityBonus = 1;
}
Assassin::Assassin() {
    HealthBonus = 0;
    ManaBonus = 0;
    StrengthBonus = 2;
    IntelligenceBonus = 0;
    AgilityBonus = 5;
}
Alchemist::Alchemist() {
    HealthBonus = 0;
    ManaBonus = 25;
    StrengthBonus = 0;
    IntelligenceBonus = 4;
    AgilityBonus = 1;
}