#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "Room2.h"
#include "DiceUtilities.h"

int room2(Player user, char choice)
{
	// Introduction
	std::cout << "You crawl through the hole trying to remember what happened to you the night before but you can only "
		<< "seem to remember you drinking with your friends. Where are you? How did you get here? " << std::endl;
	std::cout << "The ground is cold on your hands and feet. The space is tight, you can just barely squeeze through, when you hear it."
		<< "Someone is muttering to themselves when they come into view you can see a man in robes quietly whispering." << std::endl;
	
	// 3 Choices 
	std::cout << "1] Crawl through and attack" << std::endl;
	std::cout << "2] Listen quietly" << std::endl;
	std::cout << "3] Crawl out and speak" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case '1':
		if (user.inventory.size() == 1)
		{
			std::cout << "You grip the dagger in your hands and attack the hooded man. He screams when he sees you approaching and "
				<< "lightning shoots out his hands. Type in R to roll to dodge.";
			char diceRoll;
			std::cin >> diceRoll; 
			if (diceRoll == 'R' || diceRoll == 'r')
			{
				diceRoll = rollDice();
			}
			// 13 is the save 
			if (diceRoll >= 13)
			{
				std::cout << "You avoid all damage! Nice roll!" << std::endl;
			}
			else
			{
				std::cout << "You couldn't get out of the way in time! You take 3 damage!";
				user.playerHealth = user.playerHealth - 3;
				std::cout << user.playerHealth;
			}
		}
		else
		{
			std::cout << "You don't have a weapon!!";
		}
		break;
	case '2':
		break;
	case '3':
		break;
	default:
		break;
	}
	return 0;
}

/* You haven't been able figure out how to use the pointer in line 25. I'm not sure if the defintion in the 
actual header file is incorrect or if the way I was using it was incorrect. */