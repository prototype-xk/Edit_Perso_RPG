#include "Player.h"

Player::Player() {
    Pseudo = "User-1";      // Pseudo of Player
    SizeMax = 100;          // Size of Player Maximal
    SizeMin = 0;            // Size of Player Minimal
    WeightMax = 0;             // Weight of Player Maximal
    WeightMin = 0;          // Weight of Player Minimal

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
Player::Player(std::string _Pseudo) {
    Pseudo = _Pseudo;
}

void Player::Choose() {
    Race r;
    Race PlayerChoix = r.SelectRace();
    std::cout << "\nVous Avez Choisi : " << PlayerChoix.RaceName << "\n\n";
    Class c;
    Class PlayerChoixC = c.SelectClass();
    std::cout << "\nVous Avez Choisi : " << PlayerChoixC.ClassName << "\n";

    ClassName = PlayerChoixC.ClassName;
    RaceName = PlayerChoix.RaceName;
    MaxHealth = PlayerChoix.MaxHealth + PlayerChoixC.HealthBonus;
    Health = PlayerChoix.Health + PlayerChoixC.HealthBonus;
    MaxMana = PlayerChoix.MaxMana + PlayerChoixC.ManaBonus;
    Mana = PlayerChoix.Mana + PlayerChoixC.ManaBonus;
    Strength = PlayerChoix.Strength + PlayerChoixC.StrengthBonus;
    Intelligence = PlayerChoix.Intelligence + PlayerChoixC.IntelligenceBonus;
    Agility = PlayerChoix.Agility + PlayerChoixC.AgilityBonus;
    PourcentageCritique = 1;
    SizeMax = PlayerChoix.SizeMax;
    SizeMin = PlayerChoix.SizeMin;
    WeightMax = PlayerChoix.WeightMax;
    WeightMin = PlayerChoix.WeightMin;

}

std::string Player::Tostring(int Size, int Weight) {
	std::string PlayerAsString = "=== " + Pseudo + " ===\n" +
        "Race : " + RaceName + "\n" +
        "Classe : " + ClassName + "\n" +
        "Taille : " + std::to_string(Size) + "\n" +
        "Poids : " + std::to_string(Weight) + "\n" +
        "PV : " + std::to_string(Health) + "/" + std::to_string(MaxHealth) + "\n" +
        "Mana : " + std::to_string(Mana) + "/" + std::to_string(MaxMana) + "\n" +
        "Force : " + std::to_string(Strength) + "\n" +
        "Intelligence : " + std::to_string(Intelligence) + "\n" +
        "Agilit : " + std::to_string(Agility) + "\n" +
        "Crit : " + std::to_string(PourcentageCritique) + "%\n";
	return PlayerAsString;
}