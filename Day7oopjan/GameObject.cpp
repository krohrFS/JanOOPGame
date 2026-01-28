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
