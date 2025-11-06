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
    Random rd;
    int Dice = 0;
    int DiceHealth = 0, DiceMana = 0, DiceStrength = 0, DiceIntelligence = 0, DiceAgility = 0;
    int Tempo = 0, Select = 0;
    Race r;
    Race PlayerChoix = r.SelectRace();
    std::cout << "\nYou Select : " << PlayerChoix.GetRaceName() << "\n\n";
    Class c;
    Class PlayerChoixC = c.SelectClass();
    std::cout << "\nYou Select : " << PlayerChoixC.GetClassName() << "\n";
    Dice = rd.getRandomNumber(1, 20);
    std::cout << "\nYou throw a dice of 20 the result : " << Dice;
    while (Dice > 0) {
        std::cout << "\nPlease assign values to each stat | Point Number need to add to the attribut " << Dice;
        std::cout << "\n1 - Life\n2 - Mana\n3 - Strength\n4 - Intelligence\n5 - Agility";
        std::cout << "\nChoice : ";
        std::cin >> Select;
        if (Select == 1) {
            std::cout << "\nFor the life";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceHealth += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 2) {
            std::cout << "\nFor the Mana";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo){
                DiceMana += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 3) {
            std::cout << "\nFor the Strength";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceStrength += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 4) {
            std::cout << "\nFor the Intelligence";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceIntelligence += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 5) {
            std::cout << "\nFor the Agility";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceAgility += Tempo;
                Dice = Dice - Tempo;
            }
        }
    }
    ClassName = PlayerChoixC.GetClassName();
    RaceName = PlayerChoix.GetRaceName();
    MaxHealth = PlayerChoix.GetMaxHealth() + PlayerChoixC.GetHealthBonus() + DiceHealth;
    Health = PlayerChoix.GetHealth() + PlayerChoixC.GetHealthBonus() + DiceHealth;
    MaxMana = PlayerChoix.GetMaxMana() + PlayerChoixC.GetManaBonus() + DiceMana;
    Mana = PlayerChoix.GetMana() + PlayerChoixC.GetManaBonus() + DiceMana;
    Strength = PlayerChoix.GetStrength() + PlayerChoixC.GetStrengthBonus() + DiceStrength;
    Intelligence = PlayerChoix.GetIntelligence() + PlayerChoixC.GetIntelligenceBonus() + DiceIntelligence;
    Agility = PlayerChoix.GetAgility() + PlayerChoixC.GetAgilityBonus() + DiceAgility;
    PourcentageCritique = 1;
    SizeMax = PlayerChoix.GetSizeMax();
    SizeMin = PlayerChoix.GetSizeMin();
    WeightMax = PlayerChoix.GetWeightMax();
    WeightMin = PlayerChoix.GetWeightMin();
}

std::string Player::Tostring(int Size, int Weight) {
	std::string PlayerAsString = "=== " + Pseudo + " ===\n" +
        "Race : " + RaceName + "\n" +
        "Classe : " + ClassName + "\n" +
        "Size : " + std::to_string(Size) + "\n" +
        "Weight : " + std::to_string(Weight) + "\n" +
        "PV : " + std::to_string(Health) + "/" + std::to_string(MaxHealth) + "\n" +
        "Mana : " + std::to_string(Mana) + "/" + std::to_string(MaxMana) + "\n" +
        "Strength : " + std::to_string(Strength) + "\n" +
        "Intelligence : " + std::to_string(Intelligence) + "\n" +
        "Agility : " + std::to_string(Agility) + "\n" +
        "Critical Chance : " + std::to_string(PourcentageCritique) + "%\n";
	return PlayerAsString;
}