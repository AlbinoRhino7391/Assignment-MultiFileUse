/*
* Eric Phelps
* Header File for function prototypes
* the function prototype is the declararation of the function. Not the description.
*/

#include <iostream>
#include <string>

using namespace std;

//Function Block - declarations
bool PlayAgain(); // returns a bool, this is the true false check i use at the end of each iteration.
void ProgramPrompt(); // no return, simple cout
string GetUserName(); // string return, returns the string entered by the user.
void OpenNarr(int playerNum, string userName); // opening narrative, uses the info entered by the user.* remember it reads the arguement from right to left.
int GetPlayers(); // int return, gets a number from the user.
int PlayerChoice(); // player selection of outcomes.
