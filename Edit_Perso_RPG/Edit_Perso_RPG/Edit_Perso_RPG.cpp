#include <iostream>
#include <string>
#include "Player.h"

int main()
{
    std::string Pseudo;
    std::cout << "Select a pseudonyme : ";
    std::cin >> Pseudo;
    Player Joueur = Player(Pseudo);
    std::cout << Joueur.Tostring();
}