//Kyle Stoltzfus
//1/28/2012
//Homework 2
//Homework2c.cpp
//This program converts the number of days input by the user into days and years.

#include <iostream>
using namespace std;

void main()
{
	int DaysIn, DaysOut, Years;
	const int DAYS_IN_YEAR= 365;

	cout << "This program converts the number of days input into an ouput of years and days.";
	cout << "\nEnter the total number of days. ";
	cin >> DaysIn;
	Years= DaysIn / DAYS_IN_YEAR;
	DaysOut= DaysIn % DAYS_IN_YEAR;
	cout << "The number of years is " << Years << ".";
	cout << "\nThe number of days left is " << DaysOut << "." << endl;
}


