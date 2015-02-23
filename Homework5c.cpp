//Kyle Stoltzfus
//2/19/2012
//Homework 5
//Homework5c.cpp
//This program checks if the positive integer entered by the user is even and
//keeps track of the total number of even numbers entered.

#include <iostream>
using namespace std;

void main()
{
	int Number, EvenCount;
	EvenCount = 0;
	
	cout << "This program checks if the positive integer entered by the user is even" <<
		"\nand keeps track of the total number of even integers entered." << endl << endl;
	cout << "Enter a positive integer. Enter 0 to stop. ";
	cin >> Number;

	while (Number != 0)
	{
		if (Number % 2 == 0)
			++ EvenCount;

		cout << "Enter a positive integer. Enter 0 to stop. ";
		cin >> Number;
	}

	cout << "You entered " << EvenCount << " even numbers." << endl;
}

/*This program checks if the positive integer entered by the user is even
and keeps track of the total number of even integers entered.

Enter a positive integer. Enter 0 to stop. 3
Enter a positive integer. Enter 0 to stop. 56
Enter a positive integer. Enter 0 to stop. 4
Enter a positive integer. Enter 0 to stop. 13
Enter a positive integer. Enter 0 to stop. 779
Enter a positive integer. Enter 0 to stop. 46
Enter a positive integer. Enter 0 to stop. 0
You entered 3 even numbers.
Press any key to continue . . . 

This program checks if the positive integer entered by the user is even
and keeps track of the total number of even integers entered.

Enter a positive integer. Enter 0 to stop. 0
You entered 0 even numbers.
Press any key to continue . . . */
	
