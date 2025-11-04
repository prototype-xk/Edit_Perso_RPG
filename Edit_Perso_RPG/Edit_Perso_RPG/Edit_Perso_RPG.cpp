#include <iostream>
#include <string>
#include "Player.h"

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
}
