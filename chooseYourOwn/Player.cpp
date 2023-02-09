#include <iostream>
#include <cstdlib>
#include <vector>
#include "Header.h"

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