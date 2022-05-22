// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int numberator = 1;
    int denominator = 2;
    int choice;
    int sequence = 0;
    cin >> choice;
    
    do {
        cout <<"1+"<< numberator << "/" << denominator << "+";
        numberator = numberator + 1;
        denominator = denominator + 1;
        sequence++;

    } while (sequence < 10);
} 

