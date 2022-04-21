/*
* Eric Phelps
* Additional source file for function definitions
*/

#include <iostream> // basic input and output
#include <string> // allows for string input
#include <cctype> // transfers all characters to lowercase on input.
#include "storyFunctions.h" // add the header file that i created.

using namespace std;

//Global Variables;
const int IGNORE_CHAR = 256; // global var to set the buffer to ignore, i explain better later.

// Function Descriptions
bool PlayAgain() // function to ask the player if they want to play again.
{
    char answer; // user input 
    bool failure; // boolean to check if the input is valid.

    do // initial do statement, will run once before checking the params of the while. (*THIS IS MY ERROR CHECKING LOOP*)
    {
        failure = false; // set the bool to false to start.
        cout << "Would you like to play again? [y] or [n]" << endl;
        cin >> answer;
        if (cin.fail()) // this loop is if the user trys to enter anything other that 'y' or 'n'
        {
            cin.clear(); // clears previous entry
            cin.ignore(IGNORE_CHAR, '\n'); // this ignores up to 256 characters or up until new line.
            cout << "That is not a valid answer, Please enter [y] or [n]" << endl;
            failure = true; // sets bool to true.
        }
    } while (failure);

    return answer == 'y';
}

void ProgramPrompt() // simple output function
{
    cout << "Welcome to an interactive parody of Among US.\n"
        "During this simulation, imagine you are placed into a spaceship with other players.\n"
        "Your job is to try to find the imposter or die" << endl;
}
string GetUserName() // function to get a string from the user.
{
    string userName;

    cout << "Please enter your name:" << endl;

    cin >> userName;

    return userName; // this returns the input from the user to use in the program.

}
int GetPlayers() // funciton to get a number form the user, will return this int to be used by another function.
{
    int playerNum;
    bool failure;

    do // **ERROR CHECKING LOOP**
    {
        failure = false;
        cout << "Please enter how many other players you would like in the game: " << endl;
        cin >> playerNum;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(IGNORE_CHAR, '\n');
            cout << "THat is not a valid entry, please enter an integer." << endl;
            failure = true;

        }
    } while (failure);
    return playerNum; // returns the int to be used by the parent function.
}
void OpenNarr(int playerNum, string userName)
{
    //this is my parent function that uses the parameters passed to it by the 2 child functions listed in the arguement.
    cout << "Welcome aboard the Nautalus, " << userName << "." << endl;
    cout << "There are currently: " << playerNum << " other crew members aboard." << endl;
    cout << "Including yourself that makes for: " << playerNum + 1 << " total crew members." << endl;
    cout << "We suspect there is an imposter among us." << endl;
}

int PlayerChoice() // simple if else statement for flow control, utilizing 2 error checking loops.
{
    int choice;
    bool failure;

    do
    {
        failure = false;
        cout << "You here a strange noise similar to a fuse exploding in the room next to you.\n"
            "What do you do?\n"
            "[1] Investigate the noise.\n"
            "[2] Ignore the noise.\n"
            "[3] Call a meeting. \n" << endl;
        cin >> choice;

        if (cin.fail()) // error checking for anything other than an int.
        {
            cin.clear();
            cin.ignore(IGNORE_CHAR, '\n');
            cout << "That is not a valid answer, please enter 1, 2, or 3." << endl;
            failure = true;
        }
        else if (choice == 1)
        {
            cout << "You decide to investigate the noise, and are immediately killed by the imposter." << endl;
        }
        else if (choice == 2)
        {
            cout << "You decide to ignore the noise and continue your work \n"
                "as you are working, you see a shadow approaching from behind, \n"
                "you feel a piercing pain through your back.\n"
                "as you look down, you see that you have been impaled by the imposter." << endl;
        }
        else if (choice == 3)
        {
            cout << "you have chosen not to take any chances.\n"
                "you call a meeting, and notice one crew member is missing.\n"
                "you all decide to vote off the crew member with blood on his shirt.\n"
                "while celebrating your victory over the imposter, you all realize that nobody has been piloting the ship.\n"
                "The ship crashes and everybody dies." << endl;
        }
        else // error checking for an int other than the ints i listed above.
        {
            cin.clear();
            cin.ignore(IGNORE_CHAR, '\n');
            cout << "That is not a valid answer, please enter 1, 2, or 3." << endl;
            failure = true;
        }

    } while (failure);
    return choice;
}