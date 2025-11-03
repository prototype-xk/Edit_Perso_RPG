#include <iostream>
#include <string>
#include "Player.h"

int main()
{
    std::string Pseudo;
    int Size;
    int Weight;
    std::cout << "Select a pseudonyme : ";
    std::cin >> Pseudo;
    std::cout << "Select a Size : ";
    std::cin >> Size;
    std::cout << "Select a Weight : ";
    std::cin >> Weight;
    Player Joueur = Player(Size, Weight, Pseudo);
    std::cout << Joueur.Tostring();
}