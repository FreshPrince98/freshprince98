// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n1, n2, op, ans;
    
    do  //using do while loop for option and exit
    {
        cout << "Manipulation" << "\n**********";
        cout << "\n1. addition";
        cout << "\n2. subtraction";
        cout << "\n3. multiplication";
        cout << "\n4. division";
        cout << "\n5. end";

        cout << "\nPlease select your option" << endl;
        cin >> op;                                       //this allows you to pick whatever option you want
        switch (op)                                     //using a switch case statement for different arithmetic operators

        {
        case 1: cout << "enter first value: ";
            cin >> n1;
            cout << "enter second value: ";
            cin >> n2;
            ans = n1 + n2;       //giving arithmetic operators
            cout << " Addition results = " << ans << endl; break; //end results displays whatever operator you choose

        case 2: cout << "enter first value: ";
            cin >> n1;
            cout << "enter second value: ";
            cin >> n2;
            ans = n1 - n2;
            cout << " subtraction results = " << ans << endl; break;

        case 3: cout << "enter first value: ";
            cin >> n1;
            cout << "enter second value: ";
            cin >> n2;
            ans = n1 * n2;
            cout << " multiplication results = " << ans << endl; break;
        case 4: cout << "enter first value: ";
            cin >> n1;
            cout << "enter second value: ";
            cin >> n2;
            ans = n1 / n2;
            cout << " division results = " << ans << endl; break;
        case 5: exit(0); 
        default: break;
        }
    }

         while (op != 5); //it will let you pick options as many times as you like until you choose to exit by pressing 5
    
    
} 

