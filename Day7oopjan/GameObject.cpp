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

	bool gameEnd = false;

public:
	GameObject()
	{
		std::cout << "Game Object made" << std::endl;


		// We call namechange here after moving the code again because of our issue with creating
		// a new character in Menu - I think the issue is similar to our combat example the reason we created
		// temp character object in Menu

		myCharacter.ChangeName();
		


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
