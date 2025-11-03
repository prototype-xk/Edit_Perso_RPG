#include "Player.h"

Player::Player() {
    Pseudo = "User-1";
    Size = 0;
    Weight = 0;

    MaxHealth = 1;
    Health = MaxHealth;
    MaxMana = 1;
    Mana = MaxMana;
    Strength = 1;
    Intelligence = 1;
    Agility = 1;

    PourcentageCritique = 0;

    RaceName = "Nothing";
    ClassName = "Nothing";
}
Player::Player(int _Size, int _Weight, std::string _Pseudo) {
	std::string Pseudo = _Pseudo;
    Size=_Size

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