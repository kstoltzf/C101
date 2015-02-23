//Kyle Stoltzfus
//2/2/2012
//Homework 3
//Homework3b.cpp
//This program determines if a year is a leap year or not.

#include <iostream>
using namespace std;

void main()
{
	int Year;

	cout << "This program determines if a year is a leap year or not." << endl;
	cout << "Enter a year. ";
	cin >> Year;

	if (Year % 400 == 0)
		cout << "The year " << Year << " is a leap year." << endl;
	else if (Year % 100 == 0)
		cout << "The year " << Year << " is not a leap year." << endl;
	else if (Year % 4 == 0)
		cout << "The year " << Year << " is a leap year." << endl;
	else
		cout << "The year " << Year << " is not a leap year." << endl;
}

/*This program determines if a year is a leap year or not.
Enter a year. 1600
The year 1600 is a leap year.
Press any key to continue . . .

This program determines if a year is a leap year or not.
Enter a year. 1900
The year 1900 is not a leap year.
Press any key to continue . . .

This program determines if a year is a leap year or not.
Enter a year. 2012
The year 2012 is a leap year.
Press any key to continue . . .

This program determines if a year is a leap year or not.
Enter a year. 2007
The year 2007 is not a leap year.
Press any key to continue . . .*/
