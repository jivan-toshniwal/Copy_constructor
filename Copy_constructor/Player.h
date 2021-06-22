#pragma once
#include<string>
#include<iostream>
class Player
{
	std::string name;
	int health;
	int xp;
public:
	// constructor
	Player(std::string n = "None", int h = 0, int xp = 0);
	// Destructor
	~Player() {
		std::cout << "Destructor called for " << name << std::endl;
	}
	// copy constructor
	Player(const Player& s);
	std::string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }
};

