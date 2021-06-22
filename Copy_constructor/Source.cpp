#include<iostream>
#include "Player.h"

void display(Player p) {
	std::cout << p.get_name() << std::endl;
	std::cout << p.get_health() << std::endl;
	std::cout << p.get_xp() << std::endl;
}

int main() {
	Player p("Jivan", 100, 10);
	Player m{ p };
	display(m);
	Player n("Kmala");

}