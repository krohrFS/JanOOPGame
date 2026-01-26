#include "GameEngine.h"
#include <iostream>
#include "GameObject.cpp"
#include "Menu.cpp"
#pragma once

// We'll get started at 1:15pm est


class GameEngine
{
	// Fields
	bool gameEnd = false; // bool that will determine if the game ends or not
	GameObject gameObject;
	Menu gameMenu;

public:
	// default constructor
	GameEngine()
	{
		//std::cout << "Game Starting..." << std::endl;
		GameStart(); // calls the GameStart inside the constructor of the GameEngine

		// Set the field of gameEnd in the GameObject object to false
		gameObject.SetGameEnd(false); // gives the default value to gameEnd in gameObject

	}

	void GameStart()
	{
		while (gameObject.GetGameEnd() == false) // while game end is equal to false
		{
			// This is where the game starts essenetially there's going to be a ton more classes that we make

			// and usually when I write this method it's around 20 lines or less at the end
			gameObject = gameMenu.DisplayMenu(gameObject); // we pass our gameObject field that's made in GameEngine to the DisplayMenu method in the getMenu object



			//break; // comment this out in a moment
		}
	}
};