#include "Monster.h"
#include <iostream>
#include <string>
#include <vector>
#pragma once

class Monster
{
	std::string name;
	int hp;
	int damage;

public: // anything above is private, anything below is public
	Monster()
	{
		name = "Goblin";
		hp = 5;
		damage = 1;
	}

	// Overloaded Constructor

	Monster(std::string newName, int newHp, int newDamage)
	{

		// field = parameter
		name = newName;
		hp = newHp;
		damage = newDamage;

		// This can be used to make custom monster values later on
	}

	// Getter and setters
	/*
		getters will have a return type that matches the field you'd like to return and then you'll return that field - generally no parameters

		setters will have a void return type as you're generally not returning a value but it'll have a parameter that matches the type of the field
		you wish to alter
	
	
	*/

	// Getters
	std::string GetName()
	{
		return name;
	}

	int GetHP()
	{
		return hp;
	}

	int GetDamage()
	{
		return damage;
	}


	// Setters

	void SetName(std::string newValue)
	{
		name = newValue;
	}

	void SetHP(int newValue)
	{
		hp = newValue;
	}

	void SetDamage(int newValue)
	{
		damage = newValue;
	}
};


