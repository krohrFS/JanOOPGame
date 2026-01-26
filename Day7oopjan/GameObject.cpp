#include "GameObject.h"
#include "Character.cpp"
#include <iostream>
#include <string>
#include <vector>
#pragma once


// The more we add to the game - ultimately the more we add to this class

class GameObject
{

	// Fields
	Character myCharacter; // just the default we can do the overload later if we want

	bool gameEnd;

public:
	GameObject()
	{
		std::cout << "Game Object made" << std::endl;


		// Prompt the user if they want to change the name of their character
		std::cout << "Do you want to change your name, " << myCharacter.GetName() << " - yes if you do" << std::endl;

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
			
			// and set the name to the myCharacter object
			myCharacter.SetName(userInput);

			std::cout << "Greetings, " << myCharacter.GetName() << std::endl;

		}


	}

	// Character info
	// getter for myCharacter

	Character GetMyCharacter()
	{
		return myCharacter;
	}

	bool GetGameEnd()
	{
		return gameEnd;
	}

	void SetGameEnd(bool newValue)
	{
		gameEnd = newValue;
	}

	void SetCharacter(Character newValue)
	{
		myCharacter = newValue;
	}


};
