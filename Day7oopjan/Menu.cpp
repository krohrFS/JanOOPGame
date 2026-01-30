#include "Menu.h"
#include "GameObject.cpp"
#include <iostream>
#include <string>
#include <vector>
#include "Monster.cpp"
#include "Combat.cpp"

#pragma once

/*
	Welcome to the final day of pg1

	Due today at 11:59 pm Lab 7 and the Final project

	Grading will be finished by Sunday evening.

	We'll be taking a moment to fix the save issue and then move on to review with a fresh project

	We'll get started at 1:15pm est






*/


enum Options
{
	FIGHT = 1,
	HEAL,
	EXIT
};

class Menu
{
	std::vector<std::string> options = { "Fight", "Heal", "Exit" };

public:

	// Default Constructor
	Menu()
	{

	}


	GameObject DisplayMenu(GameObject gameObject) // possible GameObject parameter here
	{
		// We need menu options to display
		Character tav(gameObject.GetMyCharacter().GetName()); // change this
		Combat myCombat;

		tav = gameObject.GetMyCharacter();
		// We'll greet the character
		//std::cout << "Hello, " << gameO.GetMyCharacter().GetName(); // gameO retrieves the myCharacter field, which lets us get the name from that

		// then display their options
		for (int i = 0; i < options.size(); i++)
		{
			int counter = i + 1;
			std::cout << counter << ")" << options[i] << std::endl;
		}

		// allow the user to type in what they want to do
		std::string userInput = "";

		getline(std::cin, userInput);
		int convertedUserInput = 0;

		convertedUserInput = stoi(userInput); // again not worrying about if they type something that isn't a number

		// and now we can either have an if or a switch to hand user input

		switch (convertedUserInput)
		{
			case (int)Options::FIGHT:
				// User chooses to fight something
				gameObject = myCombat.CombatLoop(gameObject);


				// Check if the player has 0 or less life - game end if they are at 0 or less
				if (gameObject.GetMyCharacter().GetCurrentHp() <= 0)
				{
					// game should end
					std::cout << "YOU DIED" << std::endl;
					gameObject.SetGameEnd(true); 
				}

				break;
			case (int)Options::HEAL:
				// User chooses to heal

				// we're going check if the current hp is equal or greater than the max hp and if it is we don't anything if it isn't we set current equal to max
				if (gameObject.GetMyCharacter().GetCurrentHp() >= gameObject.GetMyCharacter().GetMaxHp())
				{
					// they're already at or higher than max
					std::cout << "You're already at max hp, " << gameObject.GetMyCharacter().GetName() << std::endl;
				}
				else
				{
					// they are less than max
					std::cout << gameObject.GetMyCharacter().GetName() << ", you're at: " << gameObject.GetMyCharacter().GetCurrentHp() << "/" << gameObject.GetMyCharacter().GetMaxHp() << std::endl;
					
					// after output their hp we set hp

					//std::cout << "max: " << gameObject.GetMyCharacter().GetMaxHp() << std::endl;
					//int max = gameObject.GetMyCharacter().GetMaxHp();

					//gameObject.GetMyCharacter().SetCurrentHp(10);

					// We set the start position of the loop to be current hp, we have the end of the loop be maxhp and we go up by 1 each time.
					//for (int i = gameObject.GetMyCharacter().GetCurrentHp(); i <= gameObject.GetMyCharacter().GetMaxHp(); i++)
					//{
					//	gameObject.GetMyCharacter().SetCurrentHp(i);
					//}


					//gameObject.GetMyCharacter().SetToMaxHP();
					tav.SetCurrentHp(tav.GetMaxHp());
					gameObject.SetCharacter(tav);

					// So right here we're doing a ton of chain calls using the . operator

					// effectively targetting the character inside of game object claling SetCurrentHP to the gameObject character GetMaxHP
					std::cout << gameObject.GetMyCharacter().GetName() << ", you're at: " << gameObject.GetMyCharacter().GetCurrentHp() << "/" << gameObject.GetMyCharacter().GetMaxHp() << std::endl;

					// COME BACK TO THIS IN A BIT - sometimes the best thing to do is walk away from the problem and work on something else for a bit

				
				}


				break;
			case (int)Options::EXIT:
				// User chooses to exit the game
				gameObject.SetGameEnd(true);
				std::cout << "See you next time, " << gameObject.GetMyCharacter().GetName() << std::endl;
				break;
		}

		// then run the appropriate method based on user input


		return gameObject;
	}

};