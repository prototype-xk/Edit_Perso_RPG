#pragma once
#include <string>
#include "Class.h"
#include "Race.h"

class Player
{
public:
	Player();
	~Player();
protected:
	int Size;
	int Weight;
	std::string Pseudo;
	int PourcentageCritique;
};