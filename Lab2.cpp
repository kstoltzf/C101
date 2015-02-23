//Kyle Stoltzfus
//Lab 2
//2/1/12
//This program tests a number to see if it is positive, negative, or zero

#include <iostream>
using namespace std;

void main()
{
	int Number;

	cout << "This program tests a number to see if it is positive, negative, or zero." << endl;
	cout << "Enter an integer. ";
	cin >> Number;
	
	if (Number > 0)
		cout << "The number " << Number << " is positive." << endl;
	else if (Number < 0)
		cout << "The number " << Number << " is negative." << endl;
	else 
		cout << "The number is zero." << endl;
}

