#include <iostream>
#include <ctime>
#include <cstdlib>

int rollDice()
{
	// Initialize a D20
	int roll;
	int min{ 1 };
	int max{ 20 };

	// Create a random roll, print, return
	roll = rand() % max + min;
	std::cout << roll << std::endl;
	return roll;
}

