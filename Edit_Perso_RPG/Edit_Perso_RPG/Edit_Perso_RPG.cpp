#include <iostream>
#include <string>
#include "Player.h"
#include "Arme.h"
#include "Armor.h"

int main()
{
    std::string Pseudo;
    int Size;
    int Weight;
    bool Verification = 1;
    bool VerificationSize = 1;
    bool VerificationWeight = 1;
    while (Verification == 1) {
        std::cout << "Select a pseudonyme (32 character Maximum) : ";
        std::cin >> Pseudo;
        if (Pseudo.length() <= 32) {
            Verification = 0;
            Player Joueur(Pseudo);
            Joueur.Choose();
            while (VerificationSize == 1) {
                std::cout << "\nSelect a Size (cm) [" << Joueur.SizeMin << " - " << Joueur.SizeMax << "]: ";
                std::cin >> Size;
                if (Size >= Joueur.SizeMin && Size <= Joueur.SizeMax) {
                    VerificationSize = 0;
                }
            }
            while (VerificationWeight == 1) {
                std::cout << "Select a Weight (kg) [" << Joueur.WeightMin << " - " << Joueur.WeightMax << "]: ";
                std::cin >> Weight;
                if (Weight >= Joueur.WeightMin && Weight <= Joueur.WeightMax) {
                    VerificationWeight = 0;
                }
            }
            std::cout << Joueur.Tostring(Size, Weight);
        }
    }

    std::cout << "\n\n\n All Sword : \n\n\n\n";

    Sword mySword = IronSword();
    
    // On affiche ses stats
    std::cout << "Weapon: " << mySword.GetName() << std::endl;
    std::cout << "Damage: " << mySword.GetDamage() << std::endl;
    std::cout << "Type: " << mySword.GetType() << std::endl;
    std::cout << "Rarity: " << mySword.GetRarity() << std::endl;
    std::cout << "TwoHandle: " << mySword.GetTwoHandle() << std::endl;
    std::cout << "CriticalChance: " << mySword.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << mySword.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Sword mySword1 = DiamondSword();

    // On affiche ses stats
    std::cout << "Weapon: " << mySword1.GetName() << std::endl;
    std::cout << "Damage: " << mySword1.GetDamage() << std::endl;
    std::cout << "Type: " << mySword1.GetType() << std::endl;
    std::cout << "Rarity: " << mySword1.GetRarity() << std::endl;
    std::cout << "TwoHandle: " << mySword1.GetTwoHandle() << std::endl;
    std::cout << "CriticalChance: " << mySword1.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << mySword1.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Sword mySword2 = NetheriteSword();

    // On affiche ses stats
    std::cout << "Weapon: " << mySword2.GetName() << std::endl;
    std::cout << "Damage: " << mySword2.GetDamage() << std::endl;
    std::cout << "Type: " << mySword2.GetType() << std::endl;
    std::cout << "Rarity: " << mySword2.GetRarity() << std::endl;
    std::cout << "TwoHandle: " << mySword2.GetTwoHandle() << std::endl;
    std::cout << "CriticalChance: " << mySword2.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << mySword2.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Sword mySword3 = DebugSword();

    // On affiche ses stats
    std::cout << "Weapon: " << mySword3.GetName() << std::endl;
    std::cout << "Damage: " << mySword3.GetDamage() << std::endl;
    std::cout << "Type: " << mySword3.GetType() << std::endl;
    std::cout << "Rarity: " << mySword3.GetRarity() << std::endl;
    std::cout << "TwoHandle: " << mySword3.GetTwoHandle() << std::endl;
    std::cout << "CriticalChance: " << mySword3.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << mySword3.GetCriticalDamage() << std::endl;

    std::cout << "\n\n\n All Bow : \n\n\n\n";

    Bow myBow = HunterBow();

    // On affiche ses stats
    std::cout << "Weapon: " << myBow.GetName() << std::endl;
    std::cout << "Damage: " << myBow.GetDamage() << std::endl;
    std::cout << "Type: " << myBow.GetType() << std::endl;
    std::cout << "Rarity: " << myBow.GetRarity() << std::endl;
    std::cout << "Distance: " << myBow.GetDistance() << std::endl;
    std::cout << "BowSize: " << myBow.GetBowSize() << std::endl;
    std::cout << "CriticalChance: " << myBow.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myBow.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Bow myBow1 = SpiderBow();

    // On affiche ses stats
    std::cout << "Weapon: " << myBow1.GetName() << std::endl;
    std::cout << "Damage: " << myBow1.GetDamage() << std::endl;
    std::cout << "Type: " << myBow1.GetType() << std::endl;
    std::cout << "Rarity: " << myBow1.GetRarity() << std::endl;
    std::cout << "Distance: " << myBow1.GetDistance() << std::endl;
    std::cout << "BowSize: " << myBow1.GetBowSize() << std::endl;
    std::cout << "CriticalChance: " << myBow1.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myBow1.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Bow myBow2 = FireBow();

    // On affiche ses stats
    std::cout << "Weapon: " << myBow2.GetName() << std::endl;
    std::cout << "Damage: " << myBow2.GetDamage() << std::endl;
    std::cout << "Type: " << myBow2.GetType() << std::endl;
    std::cout << "Rarity: " << myBow2.GetRarity() << std::endl;
    std::cout << "Distance: " << myBow2.GetDistance() << std::endl;
    std::cout << "BowSize: " << myBow2.GetBowSize() << std::endl;
    std::cout << "CriticalChance: " << myBow2.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myBow2.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Bow myBow3 = DebugBow();

    // On affiche ses stats
    std::cout << "Weapon: " << myBow3.GetName() << std::endl;
    std::cout << "Damage: " << myBow3.GetDamage() << std::endl;
    std::cout << "Type: " << myBow3.GetType() << std::endl;
    std::cout << "Rarity: " << myBow3.GetRarity() << std::endl;
    std::cout << "Distance: " << myBow3.GetDistance() << std::endl;
    std::cout << "BowSize: " << myBow3.GetBowSize() << std::endl;
    std::cout << "CriticalChance: " << myBow3.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myBow3.GetCriticalDamage() << std::endl;

    std::cout << "\n\n\n All Scepter : \n\n\n\n";

    Scepter myScepter = HunterScepter();

    // On affiche ses stats
    std::cout << "Weapon: " << myScepter.GetName() << std::endl;
    std::cout << "Damage: " << myScepter.GetDamage() << std::endl;
    std::cout << "Type: " << myScepter.GetType() << std::endl;
    std::cout << "Rarity: " << myScepter.GetRarity() << std::endl;
    std::cout << "Mana: " << myScepter.GetMana() << std::endl;
    std::cout << "Distance: " << myScepter.GetDistance() << std::endl;

    std::cout << "\n";
    Scepter myScepter1 = SpiderScepter();

    // On affiche ses stats
    std::cout << "Weapon: " << myScepter1.GetName() << std::endl;
    std::cout << "Damage: " << myScepter1.GetDamage() << std::endl;
    std::cout << "Type: " << myScepter1.GetType() << std::endl;
    std::cout << "Rarity: " << myScepter1.GetRarity() << std::endl;
    std::cout << "Mana: " << myScepter1.GetMana() << std::endl;
    std::cout << "Distance: " << myScepter1.GetDistance() << std::endl;

    std::cout << "\n";
    Scepter myScepter2 = FireScepter();

    // On affiche ses stats
    std::cout << "Weapon: " << myScepter2.GetName() << std::endl;
    std::cout << "Damage: " << myScepter2.GetDamage() << std::endl;
    std::cout << "Type: " << myScepter2.GetType() << std::endl;
    std::cout << "Rarity: " << myScepter2.GetRarity() << std::endl;
    std::cout << "Mana: " << myScepter2.GetMana() << std::endl;
    std::cout << "Distance: " << myScepter2.GetDistance() << std::endl;

    std::cout << "\n";
    Scepter myScepter3 = DebugScepter();

    // On affiche ses stats
    std::cout << "Weapon: " << myScepter3.GetName() << std::endl;
    std::cout << "Damage: " << myScepter3.GetDamage() << std::endl;
    std::cout << "Type: " << myScepter3.GetType() << std::endl;
    std::cout << "Rarity: " << myScepter3.GetRarity() << std::endl;
    std::cout << "Mana: " << myScepter3.GetMana() << std::endl;
    std::cout << "Distance: " << myScepter3.GetDistance() << std::endl;

    std::cout << "\n\n\n All Staff : \n\n\n\n";

    Staff myStaff = HunterStaff();

    // On affiche ses stats
    std::cout << "Weapon: " << myStaff.GetName() << std::endl;
    std::cout << "Damage: " << myStaff.GetDamage() << std::endl;
    std::cout << "Type: " << myStaff.GetType() << std::endl;
    std::cout << "Rarity: " << myStaff.GetRarity() << std::endl;
    std::cout << "Distance: " << myStaff.GetDistance() << std::endl;
    std::cout << "Mana: " << myStaff.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myStaff.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myStaff.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Staff myStaff1 = SpiderStaff();

    // On affiche ses stats
    std::cout << "Weapon: " << myStaff1.GetName() << std::endl;
    std::cout << "Damage: " << myStaff1.GetDamage() << std::endl;
    std::cout << "Type: " << myStaff1.GetType() << std::endl;
    std::cout << "Rarity: " << myStaff1.GetRarity() << std::endl;
    std::cout << "Distance: " << myStaff1.GetDistance() << std::endl;
    std::cout << "Mana: " << myStaff1.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myStaff1.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myStaff1.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Staff myStaff2 = FireStaff();

    // On affiche ses stats
    std::cout << "Weapon: " << myStaff2.GetName() << std::endl;
    std::cout << "Damage: " << myStaff2.GetDamage() << std::endl;
    std::cout << "Type: " << myStaff2.GetType() << std::endl;
    std::cout << "Rarity: " << myStaff2.GetRarity() << std::endl;
    std::cout << "Distance: " << myStaff2.GetDistance() << std::endl;
    std::cout << "Mana: " << myStaff2.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myStaff2.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myStaff2.GetCriticalDamage() << std::endl;

    std::cout << "\n";
    Staff myStaff3 = DebugStaff();

    // On affiche ses stats
    std::cout << "Weapon: " << myStaff3.GetName() << std::endl;
    std::cout << "Damage: " << myStaff3.GetDamage() << std::endl;
    std::cout << "Type: " << myStaff3.GetType() << std::endl;
    std::cout << "Rarity: " << myStaff3.GetRarity() << std::endl;
    std::cout << "Distance: " << myStaff3.GetDistance() << std::endl;
    std::cout << "Mana: " << myStaff3.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myStaff3.GetCriticalChance() << std::endl;
    std::cout << "CriticalDamage: " << myStaff3.GetCriticalDamage() << std::endl;

    std::cout << "\n\n\n All Armor : \n\n\n\n";
    Armor myArmor = Debug();
    std::cout << "Weapon: " << myArmor.GetName() << std::endl;
    std::cout << "Resistance: " << myArmor.GetResistance() << std::endl;
    std::cout << "Rarity: " << myArmor.GetRarity() << std::endl;
    std::cout << "Mana: " << myArmor.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myArmor.GetCriticalChance() << std::endl;

    std::cout << "\n";
    Armor myArmor1 = Mage();
    std::cout << "Weapon: " << myArmor1.GetName() << std::endl;
    std::cout << "Resistance: " << myArmor1.GetResistance() << std::endl;
    std::cout << "Rarity: " << myArmor1.GetRarity() << std::endl;
    std::cout << "Mana: " << myArmor1.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myArmor1.GetCriticalChance() << std::endl;

    std::cout << "\n";
    Armor myArmor2 = Tank();
    std::cout << "Weapon: " << myArmor2.GetName() << std::endl;
    std::cout << "Resistance: " << myArmor2.GetResistance() << std::endl;
    std::cout << "Rarity: " << myArmor2.GetRarity() << std::endl;
    std::cout << "Mana: " << myArmor2.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myArmor2.GetCriticalChance() << std::endl;

    std::cout << "\n";
    Armor myArmor3 = Critical();
    std::cout << "Weapon: " << myArmor3.GetName() << std::endl;
    std::cout << "Resistance: " << myArmor3.GetResistance() << std::endl;
    std::cout << "Rarity: " << myArmor3.GetRarity() << std::endl;
    std::cout << "Mana: " << myArmor3.GetMana() << std::endl;
    std::cout << "CriticalChance: " << myArmor3.GetCriticalChance() << std::endl;
}