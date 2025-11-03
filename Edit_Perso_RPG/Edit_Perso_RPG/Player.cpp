#include "Player.h"

Player::Player() {
    Pseudo = "User-1";
    Size = 0;
    Weight = 0;

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
Player::Player(int _Size, int _Weight, std::string _Pseudo) {
	std::string Pseudo = _Pseudo;
    Size = _Size;
    Weight = _Weight;

}
std::string Player::Tostring() {
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