#include "Combat.h"
#include <iostream>
#include <string>
#include <vector>
#include "GameObject.cpp"
#include "Monster.cpp"

#pragma once


class Combat
{
	//Monster monster;

public: // anything above is private anything below is public

	Combat()
	{

	}


	Combat(GameObject object, Monster monster)
	{
		// We'll have to make a temp player and a temp monster and then reassign at least the player like we do in menu.


		// To run the combat loop

	}


	// We'll end up returning probably a game object here - might need to add Monster to GameObject later
	GameObject CombatLoop(GameObject gameObject)
	{
		Character tav;
		Monster goblin;

		tav = gameObject.GetMyCharacter(); // the values of the game object being stored in the temporary character
		std::cout << "--------------------------------" << std::endl;
		std::cout << "COMBAT START" << std::endl;
		std::cout << "--------------------------------" << std::endl;

		// Then structure our game Loop


		// Player might still be able to do damage if health is 0
		while (tav.GetCurrentHp() > 0 && goblin.GetHP() > 0)
		{
			// So while the character is alive the character can fight
			// and if the monster is alive, so both must be alive for the combat loop to continue

			// Monster goes then character goes
			// output text to show that the monster hit the player - also assuming no to hit value, think of dnd and rolling a d20 or older 
			// style mmos where there was a tohit stat

			// Just auto hitting

			std::cout << goblin.GetName() << " strikes, " << tav.GetName() << " for " << goblin.GetDamage() << std::endl; 
			
			tav.SetCurrentHp(tav.GetCurrentHp() - goblin.GetDamage());

			std::cout << tav.GetName() << ": " << tav.GetCurrentHp() << "/" << tav.GetMaxHp() << std::endl;

			// setting character hp to current hp - the damage of the monster

			// Now the player gets to go


			// check if tav is 0 or less if no don't strike
			if (tav.GetCurrentHp() <= 0)
			{
				break; // should hopefully end after this

			}
			else
			{
				std::cout << tav.GetName() << " strikes, " << goblin.GetName() << " for " << tav.GetDamage() << std::endl;

				goblin.SetHP(goblin.GetHP() - tav.GetDamage());

				std::cout << goblin.GetName() << ": " << goblin.GetHP() << std::endl;

			}

			
			
		}

		gameObject.SetCharacter(tav); // work around we did in menu as well

		return gameObject; // returning gameObject
	}
};

