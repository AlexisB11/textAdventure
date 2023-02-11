#include <iostream>
#include <cstdlib>
#include <vector>
#include "Player.h"

Player::Player()
{
	isAlive = false;
}

// Class Functions
void Player::inventoryPrint() 
{
	for (std::string i : inventory) 
	{
		std::cout << i;
	}
}

std::string Player::getInventory()
{
	for (std::string i : inventory)
	{
		return i;
	}
}

std::vector<std::string> Player::getInventRef()
{
	return inventref;
}