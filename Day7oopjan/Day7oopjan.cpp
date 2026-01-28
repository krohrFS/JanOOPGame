#include <iostream>
#include <string>
#include <vector>
// Includes for our files we make
#include "Person.cpp"
#include "GameEngine.cpp"
#include "NewExample.cpp" // even though it is in the same project and it is something we made
// we still need to include it in this file to use it




/*
    Contact Info
    Karl Rohr
    Email: krohr@fullsail.edu
    Discord: karlrohr

    I started grading lab 4 last night, most of it will be done either tonight or through out the day tomorrow.

    Keep in mind that lab 6 and the midterm are due on the 26th. The midterm can not be turned in late.

    The 30th Lab 7 and the final are due, they must be turned in be turned in by end of day on the last day of class (the 30th)

    We'll get started at 1:15pm



    Monday 1/26
    Midterm and Lab 6 are due tonight - Grading will begin tonight around 1am est and more than likely be finished up by eod of Tuesday

    Final and lab 7 are due Friday (the 30th)- grades will more than likely be done between Saturday and Sunday evening

    Nothing during week 4 can be turned in late.

    For wednesday as that is the "whats to come" lecuture - I would recommend getting yourself set up with an account at GitHub - recommend using your student email, it will save a little
    bit of time as we'll be covering a ton of command line and some file i/o





*/


/*
    Question/Comment: when creating a object from a class c++ 11 says to use brackets to do so
    Person myPerson{};

    For now when using the default constructor we don't need to put brackets or ()

    However if there are parameters in the constructor we must provide argument in ()

    Person myPerson("Karl", 35);


    Question: When in debugger, how do we see a public variable outside of the function we have a break in
    Answer: the watch tab and you'll add any object or variable you want in that tab

    Question: I already have a github account on my personal email
    Answer: I would recommend having separate accounts.


    Question: When I try to debug it gives me an error saying I'm using playform v145 I think and I can't figure out how to fix
    Answer: v143 is the 2022 v145 is the 2026 so alot of the time when you're downloading the labs or even the midterm or final when you unzip the project
    and open it may have a new tab kind of like the code tabs or file tabs we have at the top here. It'll be a mostly blank pane/window but it'll have a prompt
    and a dropdown menu with two buttons. The drop down menu will have an option that says retarget, if you retarget that's the easy way

    If you don't see that, you'll have to install that platform version, you'll have to open the visual studio installer and look for that version. If you're on
    v143 look for v145 and if you're on v145 (most of you probably are) you'll have to look for v143 or 2022

    Expanded: To find the visual studio installer if you did not delete the installer file, press the windows logo button either on screen or the keyboard and type in
    visual studio installer, it'll be the same icon for visual it'll have "installer" at the end and when you open it'll give you an option to modify current installation
    or soemthing similar to that verbiage

    If you already have both installed and you're not seeing the pane mentioned above or any other prompt to retarget to v143 open solution explorer
    right click the project name, go to properties, go to configuration properties, general, and look for the platform toolset dropdown

    Question: is it business norm to put spaces, or is it up to the person making the code?
    Answer: Depends on practices set by the orginzation you work for, keeping in mind that there are work arounds for a lot of different things
    So when open a project you could have setting to display the code in way that works for you, i.e some of you may have seen something similar to this
    already but when you open a project and you a pop up that asks you if you want normalize spacing/tabing that is default one way to make it work for you
    if that is your preference

    Now a lot of the time, not all, code gets what called minified which removes all white space. Sometimes squishes the entire project to a singular line depending


*/






// Class in same file example
class Example {


public: // Anything above this in the scope of the class will be private, and anything below this in the scope the class will be public

    // Default constructor
    // pattern
    // ClassName()
    // {
    // }

    Example()
    {
        std::cout << "Example object made" << std::endl;
    }

    void Greeting()
    {
        std::cout << "Hey how are you?" << std::endl;
    }

    int Sum(int number1, int number2)
    {
        return number1 + number2;
    }

};

// Enum

// Methods
void Line()
{
    std::cout << "-------------------------------------------" << std::endl;
}

void Message(std::string words)
{
    Line();
    std::cout << words << std::endl;
    Line();
}

void Pause()
{
    std::cout << "Press any key to continue..." << std::endl;
    std::cin.get();
}


void WednesdayExamples()
{
    // Create an instance of the NewExample class
    // i.e creating an object of the NewExample class
    // pattern is
    // ClassName identifier; 
    NewExample nExample; // when we don't provide () to a constructor call that means we are calling the default
    // constructor (at least in this language)


    // When using an object to call methods we use the . (dot) operator to bring up a context menu or drop down of
    // all publically available methods for the class, currently we don't have anything so we won't get that menu
    //nExample.

    // Now that we have two publically available methods we can use the . operator to see the menu and choose a method
    std::cout << "nExample Name Field: " << nExample.GetName() << std::endl;

    nExample.SetName("Steve");

    std::cout << "nExample Name Field: " << nExample.GetName() << std::endl;

    std::string newName = "Bob";

    nExample.SetName(newName);

    std::cout << "nExample Name Field: " << nExample.GetName() << std::endl;

    // Break until 2:30 pm est

    Line();
    NewExample exampleObject(newName);
    std::cout << "exampleObject field name: " << exampleObject.GetName() << std::endl;

    NewExample myNewExample("Jake");
    std::cout << "myNewExample field name: " << myNewExample.GetName() << std::endl;

    Line();

    myNewExample.ReadFile();

    Line();
    myNewExample.WriteFile();
    myNewExample.ReadFile();

    Line();
    myNewExample.AppendFile();
    myNewExample.ReadFile();


    Line();
    Pause();
}


void Day8()
{
    Pause();
    Message("Welcome to Day 7 OOP - Object Oriented Programming");



    // Day 8 Examples
    Line();
    std::string letters = "ABCDE";
    char singleLetter = 'a';

    int holdsSingleLetterNumeric = (int)singleLetter;

    // to go through a string like a collection and then get the number out of each letter

    for (int i = 0; i < letters.size(); i++)
    {
        char tempLetter = letters[i]; // create a char and assign it the value stored at the position i in the string

        int castTempLetter = (int)tempLetter; // casts the letter

        std::cout << "Letter: " << letters[i] << " | " << "numeric: " << castTempLetter << std::endl;

    }



    Line();
    std::string moreLetters[5] = { "a","b","c","d","e" };

    for (int i = 0; i < 5; i++)
    {
        char tempLetter = moreLetters[i][0]; // Here we have a 2D array (something that was previously in the course but not any more

        int castTempLetter = (int)tempLetter;

        std::cout << "tempLetter: " << tempLetter << " | " << "numeric: " << castTempLetter << std::endl;
    }

    Line();
    char charArray[6] = { 'q','w','e','r','t', 'y' };

    for (int i = 0; i < 6; i++)
    {

        char tempLetter = charArray[i]; // create a char and assign it the value stored at the position i in the string

        int castTempLetter = (int)tempLetter; // casts the letter

        std::cout << "Letter: " << tempLetter << " | " << "numeric: " << castTempLetter << std::endl;


    }




    Line();



    // Create instance of our class we make in this file
   // pattern 
    // ClassName objectName;

    Example myExample;

    //int x;

    // Call some methods from it
    myExample.Greeting();
    Line();
    myExample.Sum(2, 2); // note just like our regular sum method from day 3 and the review this method has a return, but it is being called from the object. Currently
    // we have no where to store the returned value of 4 so it is lost, we would need to set up a variable to store it either in the class itself or in the main - if we set up a variable for that in the class 
    // it would just be easier to do all of that in the class - but for this example we'er going to create an int in the main and store it
    int capturedReturn = myExample.Sum(2, 2);

    std::cout << "capturedReturn: " << capturedReturn << std::endl;

    std::cout << myExample.Sum(3, 3) << std::endl;
    Line();

    // Create instance of class from another file - note that we need to include the other files we make at the top to use them in this file
    Person myPerson;

    // call some methods from it
    myPerson.Greeting();


    // Now add some fields

    // Dot operator to show they're not available
    // myPerson.

    // Now getters and setters
    std::cout << "name: " << myPerson.GetName() << std::endl;
    std::cout << "age: " << myPerson.GetAge() << std::endl;

    // We're going to call the Setters of myPerson
    myPerson.SetName("Lyel");
    myPerson.SetAge(29);

    Line();
    std::cout << "name: " << myPerson.GetName() << std::endl;
    std::cout << "age: " << myPerson.GetAge() << std::endl;

    Line();

    myPerson.SetName(myPerson.GetName()); // calls the GetName method as an argument for the SetName method - because you're assigning the name field to what it previously was, we'll see no change
    myPerson.SetAge(55);

    std::cout << "name: " << myPerson.GetName() << std::endl;
    std::cout << "age: " << myPerson.GetAge() << std::endl;

    // Add a collection as a field
    Line();

    myPerson.DisplayContentsOfPockets();

    Line();

    myPerson.AddItemToPockets();

    myPerson.DisplayContentsOfPockets();

    Line();

    // Now if we want to alter the value of pockets collection in the Person class


    // Make a new class - Bag Class

    // Make a class a field - Put the bag class as field in Person


    myPerson.AddItemToBag();

    myPerson.DisplayBag();

    Line();

    // Make a collection of the class a field

    myPerson.ChooseABagToView();



    // Overload a constructor
    Message("New Person Object being made");

    Person newPerson("Patrick", 35);
    std::cout << newPerson.GetName() << std::endl;
    Line();
    newPerson.ChooseABagToView();
    Line();

    // Go through creating an object via a loop and user input


    // prompt the user for a number of people
    std::cout << "How many person objects would you like to make" << std::endl;

    // collect, store, convert
    std::string userInput = "";
    int convertedInput = 0;
    std::vector<Person> people;

    getline(std::cin, userInput);

    convertedInput = stoi(userInput);

    // loop based on input
    for (int i = 0; i < convertedInput; i++)
    {
        // in the loop prompt for name and age and then create person
        std::cout << "What is your name" << std::endl;
        std::string name = "";
        getline(std::cin, name);

        std::cout << "what is your age" << std::endl;
        std::string age = "";
        getline(std::cin, age);
        // in the loop prompt for name and age and then create person

        Person loopPerson(name, stoi(age));

        // now we're working with potentially multiple person objects so above this we might have a person collection and in the loop we'll the completed person to the collection

        people.push_back(loopPerson);
    }


    for (int i = 0; i < people.size(); i++)
    {
        std::cout << "Name of person at position - " << i << ": " << people[i].GetName() << std::endl;
    }

}

int main()
{
    // Uncomment to see examples
    // WednesdayExamples();


    // Uncomment to see Day 8 examples
   // Day8();


    // comment out if you don't want to see teh game examples
    GameEngine game;



}
