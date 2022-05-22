// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int input;
    cout << "Please guess a number between 1 and 10: ";
    cin >> input;
    if (input !=3)  //using goto statement to determine the right answer
    {
        goto wrong;
    }
    else { goto right;
    } //if guessed the right answer then itll take them to right, else itll stay in the wrong
wrong: cout << input << " is the wrong answer, please try again: ";
    cin >> input;
    if (input != 3)
    {
        goto wrong;
    }
    else {
        goto right;
    }
right: cout << "3 is the right answer!";  //i couldnt figure out a way to limit the number of times someone could guess
        return 0;
    

    }
