#include "Bag.h"
#include <iostream>
#include <vector>
#include <string>

class Bag
{
	std::vector<std::string> inventory;

	//std::string test;

public: // anything above is private anything below is public

	Bag()
	{
		std::cout << "bag object made" << std::endl;
	}

	// Now we're going to write a method to add to the inventory
	void AddItemToInventory()
	{
		// prompt the user if they want to add an item to the bag
		// if no end everything

		std::cout << "Do you want to add anything to the bag (if so type yes)" << std::endl;
		std::string userInput = "";

		// Accept user input
		getline(std::cin, userInput);

		// no we must validate if they typed yes
		// the first step we're doing is forcing everything to be lower case
		for (int i = 0; i < userInput.size(); i++)
		{
			userInput[i] = tolower(userInput[i]); 
			// remember that strings can be utilized as a vector of char
			// tolower in this language goes character by character so a loop is needed if we want to lowercase the entire input
		}

		if (userInput == "yes")
		{
			// we add the item here
			// To add an item of the users choice to the bag we must prompt them for the item
			std::cout << "What is the item you're putting in the bag?" << std::endl;

			// we can reuse userinput here
			getline(std::cin, userInput);

			inventory.push_back(userInput);
		}
		else
		{
			// they typed anything other than yes nothing happens

		}


	}


	// and a method to view the inventory
	void DisplayInventory()
	{

		std::cout << "INVENTORY OF BAG" << std::endl;

		//std::cout << "size of inventory: " << inventory.size();
		for (int i = 0; i < inventory.size(); i++)
		{
			std::cout << inventory[i] << std::endl;
		}
	}

};