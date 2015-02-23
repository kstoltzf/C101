//Kyle Stoltzfus
//2/9/2012
//Homework 4
//Homework4c.cpp
//This program adds the integers input by the user until the sum is greater than 35

#include <iostream>
using namespace std;

void main()
{
	int Number, Sum;
	Sum = 0;
	
	cout << "This program adds the integers inputted by the user " << endl
		<< "until the sum is greater than 35." << endl;

	while (Sum <= 35)
	{
		cout << "Enter an integer. ";
		cin >> Number;
		Sum += Number;
	}

	cout << "The last number entered was " << Number << "." << endl;
	cout << "The sum of the numbers is " << Sum << "." << endl;
}

/*This program adds the integers inputted by the user
until the sum is greater than 35.
Enter an integer. 10
Enter an integer. 10
Enter an integer. 10
Enter an integer. 10
The last number entered was 10.
The sum of the numbers is 40.
Press any key to continue . . .

This program adds the integers inputted by the user
until the sum is greater than 35.
Enter an integer. 10
Enter an integer. 10
Enter an integer. 10
Enter an integer. 5
Enter an integer. 1
The last number entered was 1.
The sum of the numbers is 36.
Press any key to continue . . .*/