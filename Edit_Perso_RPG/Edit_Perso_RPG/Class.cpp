#include "Class.h"
Class::Class() { // 14 Class
    ClassName = "Nothing";
    HealthBonus = 0;        // Bonus Life Point
    ManaBonus = 0;          // Bonus Magic Energy
    StrengthBonus = 0;      // Bonus Physical Power
    IntelligenceBonus = 0;  // Bonus Magical Power
    AgilityBonus = 0;       // Bonus Speed and Dexterity
}
void Class::SetStats(std::string _ClassName, int _HealthBonus, int _ManaBonus, int _StrengthBonus, int _IntelligenceBonus, int _AgilityBonus) {
    ClassName = _ClassName;
    HealthBonus = _HealthBonus;
    ManaBonus = _ManaBonus;
    StrengthBonus = _StrengthBonus;
    IntelligenceBonus = _IntelligenceBonus;
    AgilityBonus = _AgilityBonus;
}
const std::string Class::GetClassName() {
    return ClassName;
}
const int Class::GetHealthBonus() {
    return HealthBonus;
}
const int Class::GetManaBonus() {
    return ManaBonus;
}
const int Class::GetStrengthBonus() {
    return StrengthBonus;
}
const int Class::GetIntelligenceBonus() {
    return IntelligenceBonus;
}
const int Class::GetAgilityBonus() {
    return AgilityBonus;
}

Class Warrior() {
    Class c;
    c.SetStats("Warrior", 20, 0, 3, 0, 1);
    return c;
}
Class Mage() {
    Class c;
    c.SetStats("Mage", 0, 40, 0, 4, 0);
    return c;
}
Class Rogue() {
    Class c;
    c.SetStats("Rogue", 0, 0, 0, 0, 0);
    return c;
}
Class Cleric() {
    Class c;
    c.SetStats("Cleric", 10, 30, 0, 3, 0);
    return c;
}
Class Paladin() {
    Class c;
    c.SetStats("Paladin", 25, 10, 2, 1, 0);
    return c;
}
Class Ranger() {
    Class c;
    c.SetStats("Ranger", 0, 10, 1, 0, 3);
    return c;
}
Class Bard() {
    Class c;
    c.SetStats("Bard", 0, 20, 0, 2, 2);
    return c;
}
Class Necromancer() {
    Class c;
    c.SetStats("Necromancer", 0, 30, 0, 4, 0);
    return c;
}
Class Monk() {
    Class c;
    c.SetStats("Monk", 10, 10, 2, 2, 2);
    return c;
}
Class Sorcerer() {
    Class c;
    c.SetStats("Sorcerer", 0, 50, 0, 5, 0);
    return c;
}
Class Druid() {
    Class c;
    c.SetStats("Druid", 10, 30, 1, 3, 0);
    return c;
}
Class Barbarian() {
    Class c;
    c.SetStats("Barbarian", 40, 0, 5, 0, 1);
    return c;
}
Class Assassin() {
    Class c;
    c.SetStats("Assassin", 0, 0, 2, 0, 5);
    return c;
}
Class Alchemist() {
    Class c;
    c.SetStats("Alchemist", 0, 25, 0, 4, 1);
    return c;
}
Class Debug() {
    Class c;
    c.SetStats("Debug", -5000, -5000, -10, -50, -50);
    return c;
}

Class Class::SelectClass() {
    int Choix;
    std::cout << "Select a Class (No Choice going to put Rogue):\n";
    std::cout << "1 - Warrior\n2 - Mage\n3 - Rogue\n4 - Cleric\n5 - Paladin\n";
    std::cout << "6 - Ranger\n7 - Bard\n8 - Necromancer\n9 - Monk\n10 - Sorcerer\n";
    std::cout << "11 - Druid\n12 - Barbarian\n13 - Assassin\n14 - Alchemist\n";
    std::cout << "15 - Debug\n";
    std::cout << "Enter Number : ";
    std::cin >> Choix;

    std::vector<Class> Class = { Warrior(),Mage(),Rogue(),Cleric(),Paladin(),Ranger(),Bard(),Necromancer(),Monk(),Sorcerer(),Druid(),Barbarian(),Assassin(),Alchemist(),Debug() };

    if (Choix < 1 || Choix > Class.size()) {
        Choix = 3; // Human par défaut
    }
    return Class[Choix - 1];
}
Class Class::SelectClassOpponent() {
    Random rd;
    int Choix = rd.getRandomNumber(1, 14);
    std::vector<Class> Class = { Warrior(),Mage(),Rogue(),Cleric(),Paladin(),Ranger(),Bard(),Necromancer(),Monk(),Sorcerer(),Druid(),Barbarian(),Assassin(),Alchemist(),Debug() };
    if (Choix < 1 || Choix > Class.size()) {
        Choix = 3; // Human par défaut
    }
    return Class[Choix - 1];
}