#pragma once
#include <vector>
#include <string>

// Class Initialization 
class Player
{
	public:
		Player();
		std::vector<std::string>& inventref = inventory;
		int playerHealth{ 15 };
		int isAlive{ true };
		std::vector<std::string> inventory{};

		void inventoryPrint();
		std::string getInventory();
		std::vector<std::string> getInventRef();
};