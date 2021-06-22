#include "Player.h"

// constructor
Player::Player(std::string n, int h, int x)
	:name(n), health(h), xp(x) {
	std::cout << "Three args constructor called \n";
}
// copy constructor
Player::Player(const Player& s)
	:Player(s.name, s.health, s.xp){
	std::cout << "Copy constructor called for " << s.name << std::endl;
}