//Kyle Stoltzfus
//2/13/2012
//Homework 4
//Homework4d.cpp
//This program finds the sum of the digits of a positive integer.

#include <iostream>
using namespace std;

void main()
{
	int OriginalNumber, Number, Remainder, Sum;
	
	cout << "This program finds the sum of the digits of a positive integer." << endl;
	cout << "Enter a positive integer. ";
	cin >> OriginalNumber;

	Sum = 0;
	Number = OriginalNumber;

	while (Number != 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum += Remainder;
	}
cout << "The sum of the digits of " << OriginalNumber << " is " << Sum << "." << endl;
}

/*This program finds the sum of the digits of a positive integer.
Enter a positive integer. 123
The sum of the digits of 123 is 6.
Press any key to continue . . .

This program finds the sum of the digits of a positive integer.
Enter a positive integer. 5
The sum of the digits of 5 is 5.
Press any key to continue . . .

This program finds the sum of the digits of a positive integer.
Enter a positive integer. 14503
The sum of the digits of 14503 is 13.
Press any key to continue . . .*/
