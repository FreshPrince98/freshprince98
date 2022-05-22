// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    
    char x;
    cout << "Enter a letter: ";
    cin >> x;
        //using if and else statement to reacg conclucsion.
            if (char(x) == 'a' || char(x) == 'e' || char(x) == 'i' || char(x) == 'o' || char(x) == 'u' )
             //if the person enters a letter thats acceptable within the if statement then it should give a read that its a vowel
            {
                cout << " - is vowel";
            }
            else { cout << " - not vowel"; }
    //if the person enters a letter not within the if statement then itll lead them to the else where itll let them know its not a vowel.


    return 0;
}


