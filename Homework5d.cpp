//Kyle Stoltzfus
//2/19/2012
//Homework 5
//Homework5d.cpp
//This program tests if an integer is odd and evenly divisible by 3.

#include <iostream>
using namespace std;

void main()
{
	int Number, OriginalNumber, Remainder;

	cout << "This program tests if an integer is odd and evenly divisible by 3." << endl << endl;
	cout << "Enter a positive integer. Enter 0 to stop. ";
	cin >> OriginalNumber;
	Number = OriginalNumber;

	while (Number != 0)
	{
		if (Number % 2 == 1)
		{
			if (Number % 3 == 0)
			{
				do
				{
					Remainder = Number % 10;
					Number = Remainder;
				}
				while (Number > 9);

				cout << "The number " << OriginalNumber << " is odd and evenly divisible by 3." << endl;
				cout << "The righmost digit of the number " << OriginalNumber << " is " << Remainder
					<< "." << endl;
			}
			else 
				cout << "Number does not work." << endl;
		}
		else
			cout << "Number does not work." << endl;

		cout << endl << "Enter a positive integer. Enter 0 to stop. ";
		cin >> OriginalNumber;
		Number = OriginalNumber;
	}
}

/* This program tests if an integer is odd and evenly divisible by 3.

Enter a positive integer. Enter 0 to stop. 3
The number 3 is odd and evenly divisible by 3.
The righmost digit of the number 3 is 3.

Enter a positive integer. Enter 0 to stop. 369
The number 369 is odd and evenly divisible by 3.
The righmost digit of the number 369 is 9.

Enter a positive integer. Enter 0 to stop. 2
Number does not work.

Enter a positive integer. Enter 0 to stop. 5
Number does not work.

Enter a positive integer. Enter 0 to stop. 0
Press any key to continue . . . */
