// Assignment-MultiFileUse.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Eric Phelps
// C++ with Juan Rodriguez

/* Assignment 'Interactive Sim' Needs-
* tell a story
* 1 function takes a string or an integer
* 1 function that return a string or a variable
* 5 functions overall
* control all functions with main
*/

/* Assignment 'Header and source code files' Needs-
* create a new header file and source cpp for functionality and organization.
*/

/* Psuedo Code:
* 1. Prompt for program
* 2. Get the user name -> function to return a string
* 3. Get number of players -> function to return an int
* 4. Opening narrative -> function that takes a string and an int
* 5. start story
* 6. player desicion
*   6a. choice 1
*   6b. choice 2
*   6c. choice 3
* 
* Be sure to include error checkknig for all user inputs.    

*/



#include <iostream> // basic input and output
#include <string> // allows for string input
#include <cctype> // transfers all characters to lowercase on input.
#include "storyFunctions.h" // add the header file that i created.

using namespace std;



int main()
{
    do // I prefer do while loops over while loops, this makes the program run through one iteration before checking the while statement.
    {
        ProgramPrompt();
        OpenNarr(GetPlayers(), GetUserName()); // when passing paramaters, you have to remember that the compiler reads from right to left
                                                //, so that is the order you need to put your functions i,
        PlayerChoice();

    } while (PlayAgain());
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
