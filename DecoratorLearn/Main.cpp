#include <iostream>
#include "Player.h"
#include "ConcreteDecorators.h"

void main()
{

	Player player1;
	std::cout << "Vida: " << player1.getLife() << std::endl;
	std::cout << "Da�o: " << player1.getDamage() << std::endl;


	PlusDamage addDamage(player1);

	std::cout << "Vida: " << addDamage.getLife() << std::endl;
	std::cout << "Da�o: " << addDamage.getDamage() << std::endl;

	PlusLife addLife(player1);
	std::cout << "Vida: " << addLife.getLife() << std::endl;
	std::cout << "Da�o: " << addLife.getDamage() << std::endl;




	
}