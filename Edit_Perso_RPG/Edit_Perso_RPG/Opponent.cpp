#include "Opponent.h"

Opponent::Opponent() {
    Random rd;
    Index = rd.getRandomNumber(0, Name.size()-1);
    Pseudo = Name[Index];
    MaxHealth = 1;          // Max Life Point
    Health = MaxHealth;     // Actual Life Point
    MaxMana = 1;            // Max Magic Energy
    Mana = MaxMana;         // Max Mana
    Strength = 1;           // Physical Power
    Intelligence = 1;       // Magical Power
    Agility = 1;            // Speed and Dexterity

    PourcentageCritique = 0;// Critical Chance in %

    RaceName = "Nothing";   // Race Name
    ClassName = "Nothing";  // Class Name
}
void Opponent::Choose() {
    Race r;
    Class c;
    Race Adversaire = r.SelectRaceOpponent();
    Class AdversaireC = c.SelectClassOpponent();
    ClassName = AdversaireC.GetClassName();
    RaceName =Adversaire.GetRaceName();
    MaxHealth = Adversaire.GetMaxHealth() + AdversaireC.GetHealthBonus();
    Health = Adversaire.GetHealth() + AdversaireC.GetHealthBonus();
    MaxMana = Adversaire.GetMaxMana() + AdversaireC.GetManaBonus();
    Mana = Adversaire.GetMana() + AdversaireC.GetManaBonus();
    Strength = Adversaire.GetStrength() + AdversaireC.GetStrengthBonus();
    Intelligence = Adversaire.GetIntelligence() + AdversaireC.GetIntelligenceBonus();
    Agility = Adversaire.GetAgility() + AdversaireC.GetAgilityBonus();
    PourcentageCritique = 1;
}

std::string Opponent::Tostring() {
    std::string OpponentAsString = "=== " + Pseudo + " ===\n" +
        "Race : " + RaceName + "\n" +
        "Classe : " + ClassName + "\n" +
        "PV : " + std::to_string(Health) + "/" + std::to_string(MaxHealth) + "\n" +
        "Mana : " + std::to_string(Mana) + "/" + std::to_string(MaxMana) + "\n" +
        "Strength : " + std::to_string(Strength) + "\n" +
        "Intelligence : " + std::to_string(Intelligence) + "\n" +
        "Agility : " + std::to_string(Agility) + "\n" +
        "Critical Chance : " + std::to_string(PourcentageCritique) + "%\n";
    return OpponentAsString;
}