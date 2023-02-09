#pragma once
#include <vector>

// Function calls
int rollDice();
int room1();
int room2(char choice);
Player user;

// Class Initialization 
class Player 
{
public:
	std::vector<std::string>& inventref = inventory;
	int playerHealth{ 15 };
	int isAlive{ true };
	std::vector<std::string> inventory{};

	void inventoryPrint();
	std::string getInventory();
	std::vector<std::string> getInventRef();
};

