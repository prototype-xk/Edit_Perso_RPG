#include "Class.h"
Class::Class() { // 14 Class
    ClassName = "Nothing";
    HealthBonus = 0;        // Bonus Life Point
    ManaBonus = 0;          // Bonus Magic Energy
    StrengthBonus = 0;      // Bonus Physical Power
    IntelligenceBonus = 0;  // Bonus Magical Power
    AgilityBonus = 0;       // Bonus Speed and Dexterity
}


Class Warrior() {
    Class c;
    c.ClassName = "Warrior";
    c.HealthBonus = 20;
    c.ManaBonus = 0;
    c.StrengthBonus = 3;
    c.IntelligenceBonus = 0;
    c.AgilityBonus = 1;
    return c;
}
Class Mage() {
    Class c;
    c.ClassName = "Mage";
    c.HealthBonus = 0;
    c.ManaBonus = 40;
    c.StrengthBonus = 0;
    c.IntelligenceBonus = 4;
    c.AgilityBonus = 0;
    return c;
}
Class Rogue() {
    Class c;
    c.ClassName = "Rogue";
    c.HealthBonus = 0;
    c.ManaBonus = 0;
    c.StrengthBonus = 1;
    c.IntelligenceBonus = 0;
    c.AgilityBonus = 4;
    return c;
}
Class Cleric() {
    Class c;
    c.ClassName = "Cleric";
    c.HealthBonus = 10;
    c.ManaBonus = 30;
    c.StrengthBonus = 0;
    c.IntelligenceBonus = 3;
    c.AgilityBonus = 0;
    return c;
}
Class Paladin() {
    Class c;
    c.ClassName = "Paladin";
    c.HealthBonus = 25;
    c.ManaBonus = 10;
    c.StrengthBonus = 2;
    c.IntelligenceBonus = 1;
    c.AgilityBonus = 0;
    return c;
}
Class Ranger() {
    Class c;
    c.ClassName = "Ranger";
    c.HealthBonus = 0;
    c.ManaBonus = 10;
    c.StrengthBonus = 1;
    c.IntelligenceBonus = 0;
    c.AgilityBonus = 3;
    return c;
}
Class Bard() {
    Class c;
    c.ClassName = "Bard";
    c.HealthBonus = 0;
    c.ManaBonus = 20;
    c.StrengthBonus = 0;
    c.IntelligenceBonus = 2;
    c.AgilityBonus = 2;
    return c;
}
Class Necromancer() {
    Class c;
    c.ClassName = "Necromancer";
    c.HealthBonus = 0;
    c.ManaBonus = 30;
    c.StrengthBonus = 0;
    c.IntelligenceBonus = 4;
    c.AgilityBonus = 0;
    return c;
}
Class Monk() {
    Class c;
    c.ClassName = "Monk";
    c.HealthBonus = 10;
    c.ManaBonus = 10;
    c.StrengthBonus = 2;
    c.IntelligenceBonus = 2;
    c.AgilityBonus = 2;
    return c;
}
Class Sorcerer() {
    Class c;
    c.ClassName = "Sorcerer";
    c.HealthBonus = 0;
    c.ManaBonus = 50;
    c.StrengthBonus = 0;
    c.IntelligenceBonus = 5;
    c.AgilityBonus = 0;
    return c;
}
Class Druid() {
    Class c;
    c.ClassName = "Druid";
    c.HealthBonus = 10;
    c.ManaBonus = 30;
    c.StrengthBonus = 1;
    c.IntelligenceBonus = 3;
    c.AgilityBonus = 0;
    return c;
}
Class Barbarian() {
    Class c;
    c.ClassName = "Barbarian";
    c.HealthBonus = 40;
    c.ManaBonus = 0;
    c.StrengthBonus = 5;
    c.IntelligenceBonus = 0;
    c.AgilityBonus = 1;
    return c;
}
Class Assassin() {
    Class c;
    c.ClassName = "Assasin";
    c.HealthBonus = 0;
    c.ManaBonus = 0;
    c.StrengthBonus = 2;
    c.IntelligenceBonus = 0;
    c.AgilityBonus = 5;
    return c;
}
Class Alchemist() {
    Class c;
    c.ClassName = "Alchemist";
    c.HealthBonus = 0;
    c.ManaBonus = 25;
    c.StrengthBonus = 0;
    c.IntelligenceBonus = 4;
    c.AgilityBonus = 1;
    return c;
}
Class Uncensored() {
    Class c;
    c.ClassName = "Uncensored";
    c.HealthBonus = -5000;
    c.ManaBonus = -5000;
    c.StrengthBonus = -10;
    c.IntelligenceBonus = -60;
    c.AgilityBonus = -50;
    return c;
}

Class Class::SelectClass() {
    int Choix;
    std::cout << "Select a Class (No Choice going to put Rogue):\n";
    std::cout << "1 - Warrior\n2 - Mage\n3 - Rogue\n4 - Cleric\n5 - Paladin\n";
    std::cout << "6 - Ranger\n7 - Bard\n8 - Necromancer\n9 - Monk\n10 - Sorcerer\n";
    std::cout << "11 - Druid\n12 - Barbarian\n13 - Assassin\n14 - Alchemist\n";
    std::cout << "15 - Uncensored\n";
    std::cout << "Enter Number : ";
    std::cin >> Choix;

    // Retourne directement l'objet Race correspondant
    if (Choix == 1) {
        return Warrior();
    }
    else if (Choix == 2) {
        return Mage();
    }
    else if (Choix == 3) {
        return Rogue();
    }
    else if (Choix == 4) {
        return Cleric();
    }
    else if (Choix == 5) {
        return Paladin();
    }
    else if (Choix == 6) {
        return Ranger();
    }
    else if (Choix == 7) {
        return Bard();
    }
    else if (Choix == 8) {
        return Necromancer();
    }
    else if (Choix == 9) {
        return Monk();
    }
    else if (Choix == 10) {
        return Sorcerer();
    }
    else if (Choix == 11) {
        return Druid();
    }
    else if (Choix == 12) {
        return Barbarian();
    }
    else if (Choix == 13) {
        return Assassin();
    }
    else if (Choix == 14) {
        return Alchemist();
    }
    else if (Choix == 15) {
        return Uncensored();
    }
    else {
        return Rogue();
    }
}