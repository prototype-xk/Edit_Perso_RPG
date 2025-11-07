#include "Player.h"

Player::Player() {
    Pseudo = "User-1";      // Pseudo of Player
    SizeMax = 100;          // Size of Player Maximal
    SizeMin = 0;            // Size of Player Minimal
    WeightMax = 0;             // Weight of Player Maximal
    WeightMin = 0;          // Weight of Player Minimal
    RelicName = "Nothing";

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
    Relic re;
    Relic PlayerChoixRe = re.SelectRelic();
    Weapon we;
    //Weapon PlayerChoixWe ;
    
    Dice = rd.getRandomNumber(1, 20);
    std::cout << "\nYou throw a dice of 20 the result : " << Dice;
    while (Dice > 0) {
        std::cout << "\nPlease assign values to each stat | Point Number need to add to the attribut " << Dice;
        std::cout << "\n1 - Life\n2 - Mana\n3 - Strength\n4 - Intelligence\n5 - Agility";
        std::cout << "\nChoice : ";
        std::cin >> Select;
        if (Select == 1) {
            std::cout << "\nHow many point did you want to attribut to life";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceHealth += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 2) {
            std::cout << "\nHow many point did you want to attribut to Mana";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo){
                DiceMana += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 3) {
            std::cout << "\nHow many point did you want to attribut to Strength";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceStrength += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 4) {
            std::cout << "\nHow many point did you want to attribut to Intelligence";
            std::cout << "\nChoice : ";
            std::cin >> Tempo;
            if (Dice >= Tempo) {
                DiceIntelligence += Tempo;
                Dice = Dice - Tempo;
            }
        }
        else if (Select == 5) {
            std::cout << "\nHow many point did you want to attribut to Agility";
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
    RelicName = PlayerChoixRe.GetName();
    GetWeapon();
    
    WeaponName = b.GetName();
    //ArmorName = 
    MaxHealth = PlayerChoix.GetMaxHealth() + PlayerChoixC.GetHealthBonus() + DiceHealth + PlayerChoixRe.GetHealthBonus();
    Health = PlayerChoix.GetHealth() + PlayerChoixC.GetHealthBonus() + DiceHealth + PlayerChoixRe.GetHealthBonus();
    MaxMana = PlayerChoix.GetMaxMana() + PlayerChoixC.GetManaBonus() + DiceMana + PlayerChoixRe.GetManaBonus();
    Mana = PlayerChoix.GetMana() + PlayerChoixC.GetManaBonus() + DiceMana + PlayerChoixRe.GetManaBonus();
    Strength = PlayerChoix.GetStrength() + PlayerChoixC.GetStrengthBonus() + DiceStrength;
    Intelligence = PlayerChoix.GetIntelligence() + PlayerChoixC.GetIntelligenceBonus() + DiceIntelligence;
    Agility = PlayerChoix.GetAgility() + PlayerChoixC.GetAgilityBonus() + DiceAgility;
    PourcentageCritique = 1;
    SizeMax = PlayerChoix.GetSizeMax();
    SizeMin = PlayerChoix.GetSizeMin();
    WeightMax = PlayerChoix.GetWeightMax();
    WeightMin = PlayerChoix.GetWeightMin();
}

void Player::GetWeapon() {
    bool ArcPos = 0;
    bool SwordPos = 0;
    bool StaffPos = 0;
    bool ScepterPos = 0;
    int ChoixPos;
    int ChoixArm;
    // === Arc ===
    if (RaceName == "Elf" || RaceName == "Human" || RaceName == "Fairy" || RaceName == "HighElf" || RaceName == "DebugA") {
        std::cout << "Arc is usable for " << RaceName << "\n";
        ArcPos = 1;
    }
    else {
        std::cout << RaceName << " cannot use Arc\nOnline Elf / Human / Fairy / HighElf Can use\n";
    }

    // === Sword ===
    if (RaceName == "Human" || RaceName == "Dwarf" || RaceName == "Orc" || RaceName == "Undead" || RaceName == "Draconian" || RaceName == "WereWolf" || RaceName == "DebugA") {
        std::cout << "Sword is usable for " << RaceName << "\n";
        SwordPos = 1;
    }
    else {
        std::cout << RaceName << " cannot use Sword\nOnline Human / Dwarf / Orc / Undead / Draconian / Werewolf Can use\n";
    }

    // === Staff ===
    if (RaceName == "Elf" || RaceName == "Human" || RaceName == "Undead" || RaceName == "Serpentfolk" || RaceName == "Draconian" || RaceName == "DebugA") {
        std::cout << "Staff is usable for " << RaceName << "\n";
        StaffPos = 1;
    }
    else {
        std::cout << RaceName << " cannot use Staff\nOnline Elf / Human / Undead / Serpentfolk / Draconian Can use\n";
    }

    // === Scepter ===
    if (RaceName == "Elf" || RaceName == "Fairy" || RaceName == "HighElf" || RaceName == "Draconian" || RaceName == "DebugA") {
        std::cout << "Scepter is usable for " << RaceName << "\n";
        ScepterPos = 1;
    }
    else {
        std::cout << RaceName << " cannot use Scepter\nOnline Elf / Fairy / HighElf / Draconian Can use\n";
    }

    std::cout << "\nSelect the type of Weapon you want : ";
    std::cin >> ChoixPos;

    if (ArcPos == 1 && ChoixPos == 1) {
        //Bow BowChoix = b.SelectBow();
        b.SelectBow();
    }
    if (SwordPos == 1 && ChoixPos == 2) {
        Sword s;
        Sword SwordChoix = s.SelectSword();
    }
    if (StaffPos == 1 && ChoixPos == 3) {
        Staff st;
        Staff StaffChoix = st.SelectStaff();
    }
    if (ScepterPos == 1 && ChoixPos == 4) {
        Scepter sc;
        Scepter ScepterChoix = sc.SelectScepter();
    }
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
        "Critical Chance : " + std::to_string(PourcentageCritique) + "%\n" +
        "Your Relic : " + RelicName + "\n" +
        "Your Weapon : " + WeaponName + "\n" +
        "Your Armor : " + ArmorName + "\n";
	return PlayerAsString;
}