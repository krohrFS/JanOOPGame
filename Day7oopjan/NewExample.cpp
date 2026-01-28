#include "NewExample.h"
#include <string>
#include <iostream>
#include <vector>


class NewExample
{
	// fields/attributes/member variables
	// fields always should be private - you can make them public for testing purposes - but they should be private
	std::string name; // we initialize a string variable called name with no value
	// when an instance of the NewExample class is made, i.e an object that object will have a name field
	// however because it is private where we create that object we won't have access to the field currently



public: // anything above is private and not usable natively by other files, and anything below is public and can be used
	// The job of a default constructor is typically to provide "default" values to your fields.
	// what those values are, are ultimately up to you or any project you have
	// for example in the labs/final if we ask to create fields and then a default constructor usually there will be
	// default values given to you
	NewExample() // Default constructor - no params
	{
		name = "Karl"; // we provide a value to our name field here in the default constructor

		std::cout << "New Example object made" << std::endl;

		std::cout << "Name Field: " << name << std::endl;

	}

	// Overload our constructor and accept a number of parameters we want to populate the fields with 
	// values passed to the parameters
	NewExample(std::string _name)
	{
		// note the difference between the parameter and the field
		// because there is only one field so far we could do what we have been doing with the setters
		// where we have the identifier of newValue
		// but to show a way of not using the this-> keyword we give the name parameter _ at the beginning

		// And just like the default constructor our goal is to provide values to the fields
		// just with this one we're providing a value from the parameter

		/*
			Question: I thought "this" or this-> was a fundamental concept of object oriented programming
			Answer: Later on this is good to use and is pretty key, this is a self reference to the most
			parent constructor i.e a field in the class as best example however we're slowly moving away from
			that keyword in practice
		
		*/

		name = _name; // assigns the field the value stored in the parameter
	}


	// Getters and Setters

	// Getters will retrieve or return a field
	// they'll have a return type that matches the field you're wanting to return
	// generally no parameters

	// Setters will allow you to change or alter the value of a field in another file
	// typically they don't have a return but they'll have 1 parameter that matches the type of the field you're
	// changing

	// Getter for name
	std::string GetName()
	{
		return name;
	}

	// Setter for name
	void SetName(std::string newValue)
	{
		// goal is to alter name's value
		name = newValue;
	}



};