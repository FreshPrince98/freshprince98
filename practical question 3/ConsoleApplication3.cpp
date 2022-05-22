// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int numberator = 1;  //numerator and denominator
    int denominator = 2;
    int choice;
    int sequence = 0; //the amount of time someone can use this sequence
    cin >> choice;  //given choice of using sequence, can range from anywhere 1-100
    //using do while loop to help with the fractions
    do {
        cout <<"1+"<< numberator << "/" << denominator << "+";
        numberator = numberator + 1;
        denominator = denominator + 1;
        sequence++;

    } while (sequence < 10);
} 

