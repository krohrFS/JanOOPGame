#include "Person.h"
#include <iostream> // this allows us to use cout and cin in this class/file
// also on the note of including the same library or file in the project more than once there is a #pragma once line which prevents file bloat, basically makes it so on build/run the library
// is included only once
#include <vector>

#include "Bag.cpp"
// Class code moved from .h to .cpp 
class Person // class Person
{
	std::string name;
	int age;

	std::vector<std::string> pockets; // vector as a field

	Bag myBag;



	std::vector<Bag> myBags; // a collection or vector of bag, imagine having multiple bags not just a singular backpack

public: // anything above is private anything below is public

	Person() // default constructor - typically when we have default constructors we provide default values to our fields
	{
		std::cout << "person object created" << std::endl; // output for the person constructor
		name = "Karl";
		age = 35;
		
		// put three default values inside the collection
		pockets.push_back("phone");
		pockets.push_back("wallet");
		pockets.push_back("keys");

		myBags = std::vector<Bag>(2); // we effectively apply a size of 2 or resize the vector to have a size of 2

		// Now we can give context to each bag or each position/index of the myBags collection
		// We could say that myBags[0] is going to be a back pack
		// we could say that myBags[1] is going to be a duffle bag

		myBags[0].AddItemToInventory(); // Add a laptop

		myBags[1].AddItemToInventory(); // add a coat
	}

	// Overload the Person Constructor
	Person(std::string newName, int newAge)
	{
		// We're going to assign the fields the values from the parameters
		name = newName;
		age = newAge;

		// Next we're going to add items to the pocket
		pockets.push_back("android phone");

		// Give size to myBags
		myBags = std::vector<Bag>(2); // 0 being backpack 1 being duffle

		// If we want to add anything to the backpack and duffle
		myBags[0].AddItemToInventory();
		myBags[1].AddItemToInventory();

	}

	void Greeting()
	{
		std::cout << "hey how are ya?" << std::endl;
	}

	// Getters and setters - these just methods to either return or alter the value of a field in a file other than this one.

	// Getters
	/*
		return a value that shares type with the field in question - and we're returning the field itself
		pattern: - the type of the method again should be the same as the field
		type GetField()
		{
			return field;
		}
	*/

	std::string GetName()
	{
		return name;
	}

	int GetAge()
	{
		return age;
	}

	// Setters
	/*
		are going to alter the value of a field, they have no return type so void, and they'll have a parameter that shares a type with the field you are altering

		pattern
		void SetField(type param)
		{
			field = param;
		}
	
	*/

	//void SetName(std::string _name)
	//{
	//	name = _name; // field is being assigned the value in the parameter
	//}

	//void SetAge(int _age)
	//{
	//	age = _age; // field is being assigned teh value in the parameter
	//}

	void SetName(std::string newValue)
	{
		name = newValue;
	}

	void SetAge(int newValue)
	{
		age = newValue;
	}


	void DisplayContentsOfPockets()
	{
		// for each loop to show what's in pockets
		for (std::string item : pockets)
		{
			std::cout << item << std::endl;
		}
	}

	// We'll revisit this in a bit
	void AddItemToPockets()
	{
		pockets.push_back("change");
	}


	// The reason we have to write two methods, two in the Bag class and two here is the intention is to not include Bag into the main 

	void DisplayBag()
	{
		myBag.DisplayInventory();
	}

	void AddItemToBag()
	{
		myBag.AddItemToInventory();
	}


	// Select which bag you want to view - again myBags[0] is a backpack and myBags[1] is a duffle
	void ChooseABagToView()
	{
		// We prompt the user to look into either bag
		std::cout << "Please choose a bag to look inside of\n1)Back Pack\n2)Duffle Bag" << std::endl;

		// we're going to their input
		std::string userInput = "";
		getline(std::cin, userInput);

		int convertedInput = stoi(userInput);

		convertedInput--; // This is make it so if the user types in 1 for backpack the collections of myBags position refers to backpack

		if (convertedInput == 0)
		{
			// display backpack
			myBags[0].DisplayInventory();
		}
		else if (convertedInput == 1)
		{
			// display duffle
			myBags[1].DisplayInventory();
		}
		else
		{
			// they choise incorrectly
			std::cout << "bag does not exist" << std::endl;
		}

		// There are other ways to do this and do some further validation
		// WE know currently the size of myBags is 2, so 2 items, we could initially test on that if the input is greater than 2 if it display some out put saying they put in bad input
		// And then display based on the modified userinput

		/*
			if (userInput > 2)
			{
				// bad input
			{
			else
			{
				// display based on the input
			}
		*/

		// we're going to provide context some how for the code to based on their input display the contents of a bag
	}


	// Select a bag to input into
};

