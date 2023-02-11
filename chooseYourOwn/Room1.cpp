#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "Room2.h"

int room1(Player user)
{
	// Introduction
	std::cout << "You awake in a small cavern." << "The first thing you notice" << " is the sound of dripping water, or some kind of liquid, in the distance."
		<< " As you look around you can tell you're in some kind of cell."
		<< "You realize you're alone after looking at your surroundings."
		<< " You're currently laying in an uncomfortable bed in the northwestern corner of the room."
		<< "There is a bedside table and a bookshelf filled with tattered tomes. " << std::endl;

	std::cout << "You sit up and put your feet on the ground. You have no shoes. The ground is cold and rough. The last thing you remember is drinking with your friends. "
		<< "What do you do? Choose an answer and press enter." << std::endl;
	std::cout << "1] Examine Bookshelf" << std::endl;
	std::cout << "2] Examine Bedside Drawer" << std::endl;

	char firstInput;
	bool examine{ true };
	std::cin >> firstInput;

	// Examine items switch
	while (examine == true)
	{
		switch (firstInput)
		{
		case '1':
			std::cout << "The bookshelf is short and fat with scattered books laying across it. The books are in terrible shape with a layer of dust on them. You can hear a "
				<< "whistle behind the shelves. When moved you can see that there's a hole behind it leading to a new room." << std::endl;
			std::cout << "1] Examine Bedside Drawer" << std::endl;
			std::cout << "2] Go through the door." << std::endl;
			std::cin >> firstInput; // I had to add this in each switch statement to add the other options
			if (firstInput == '2')
			{
				examine = false;
				room2(user, firstInput);
			}
			break;
		case '2':
			std::cout << "The bedside table is wood with one small drawer. On opening you can see there's a dagger. You pick it up." << std::endl;
			user.inventory.push_back("dagger");
			std::cout << user.inventory.size();
			std::cout << "A dagger has been added to your inventory" << std::endl;
			std::cout << "1] Examine Bookshelf" << std::endl;
			std::cin >> firstInput;
			break;
		default:
			std::cout << "Not sure what you're saying. Try again." << std::endl;
			std::cin >> firstInput;
			continue;
		}
	}
	 
	return 0;
}