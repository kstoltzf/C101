//Kyle Stoltzfus
//2/2/2012
//Homework 3
//Homework3a.cpp
//This program determines if an integer is between 1 and 100.

#include <iostream>
using namespace std;

void main()
{
	int Number;

	cout << "This program determines if an integer is between 1 and 100." << endl;
	cout << "Enter an integer number. ";
	cin >> Number;

	if (Number > 0 && Number < 101)
		cout << "Good input." << endl;
	else
		cout << "Bad input." << endl;
}

/*This program determines if an integer is between 1 and 100.
Enter an integer number. 0
Bad input.
Press any key to continue . . .

This program determines if an integer is between 1 and 100.
Enter an integer number. 101
Bad input.
Press any key to continue . . .

This program determines if an integer is between 1 and 100.
Enter an integer number. 100
Good input.
Press any key to continue . . .

This program determines if an integer is between 1 and 100.
Enter an integer number. 1
Good input.
Press any key to continue . . .*/