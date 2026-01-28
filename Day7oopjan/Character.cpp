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
		SaveCharacter();
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