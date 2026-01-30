#include "Character.h"
#include <iostream>
#include <string>
#include <fstream>
#pragma once

class Character
{
	std::string name;
	int maxHp;
	int currentHp;
	int damage;

public:

	// default constructor
	Character()
	{
		// assign the fields default values
		name = "Tav";
		maxHp = 10;
		currentHp = 10;
		damage = 3;

		//std::cout << "Default character made" << std::endl;

		/*ChangeName();
		std::cout << "new name: " << name << std::endl;*/

		// Save teh character when made
		SaveCharacter();
	}

	// Overloaded constructor
	Character(std::string newName)
	{
		name = newName;
		maxHp = 10;
		currentHp = 10;
		damage = 3;

		// save the character when made
		//SaveCharacter();
	}


	// getters and setters - these will allow use to use the fields in other files
	// name, maxHp, currentHp, damage

	std::string GetName()
	{
		return name;
	}

	void SetName(std::string newValue)
	{
		name = newValue;
	}

	int GetMaxHp()
	{
		return maxHp;
	}

	void SetMaxHp(int newValue)
	{
		maxHp = newValue;
	}

	int GetCurrentHp()
	{
		return currentHp;
	}

	void SetCurrentHp(int newValue)
	{
		currentHp = newValue;
	}

	int GetDamage()
	{
		return damage;
	}

	void SetDamage(int newValue)
	{
		damage = newValue;
	}

	void SetToMaxHP()
	{
		currentHp = maxHp;
	}



	void ChangeName()
	{
		// Prompt the user if they want to change the name of their character
		std::cout << "Do you want to change your name, " << name << " - yes if you do" << std::endl;

		// collect user input
		std::string userInput = "";
		getline(std::cin, userInput); // forgot to add this initially

		// force userinput to be lower
		for (int i = 0; i < userInput.size(); i++)
		{
			userInput[i] = tolower(userInput[i]);
		}

		// check if they do
		if (userInput == "yes")
		{
			// if they do prompt the name
			std::cout << "What would you like to be called?" << std::endl;
			// store the name
			getline(std::cin, userInput);

			// and set the name field
			name = userInput;

			std::cout << "Greetings, " << name << std::endl;

			SaveCharacter();

		}
	}

	// Break until 3:35 pm est
	/*
		Question: Question about discord. At end of month is there a bot that removes our roles automatically
		or do we just have to wait for the role to be removed?
		Answer: I believe the #select-your-role channel operates as a toggle - i.e if you reselect pg1 I think it removes your 
		role. It should be something you handle I believe
	*/

	
	// TODO: FIX THIS LATER - changed to app and we see that SaveCharacter is getting ran a 3rd time somewhere
	void SaveCharacter()
	{
		std::ofstream file("pc.txt");

		file << name << std::endl;
		file << currentHp << std::endl;
		file << maxHp << std::endl;
		file << damage << std::endl;

		file.close();

	}

};