// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i, j; //declaring variables im using in the for loops

    for (i = 0; i < 6; i++) //using i first, making i less than 6 so i can get 5 stars
    {
        for (j = i; j >0; j--) //decrementing j so it can go in reverse from 1 to 5
        {
            cout << "* ";
        }cout << endl; //end results are perfect
    }
}

