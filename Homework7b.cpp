//Kyle Stoltzfus
//3/19/2011
//Homework 7
//Homework7b.cpp
//This program takes an integer entered by the user and checks if it is between 
//1 and 100. If it is, the program checks if the number is odd or even and finds
// the sum of all numbers up to and including the entered number.

#include <iostream>
using namespace std;

int Odd_Or_Even (int Integer);
int Sum_Up_Numbers (int Integer);

void main()
{
	int Integer, Remainder, Sum;
	
	cout << "This program takes an integer between 1 and 100, checks if it is " << endl
		<< "odd or even, and finds the sum of all numbers up to and including " << endl
		<< "the entered number." << endl << endl;
	cout << "Please enter an integer between 1 and 100. Enter a number outside " << endl
		<< "range to quit. ";
	cin >> Integer;

	while (Integer >= 1 && Integer <= 100)
	{
		Remainder = Odd_Or_Even(Integer);
		
		if (Remainder == 0)
			cout << "The number " << Integer << " is even." << endl;
		else
			cout << "The number " << Integer << " is odd." << endl;

		Sum = Sum_Up_Numbers (Integer);
		
		cout << "The sum of the numbers up to " << Integer << " is " << Sum << endl << endl;
		
		cout << "Please enter an integer between 1 and 100. Enter a number outside " << endl
			<< "range to quit. ";
		cin >> Integer;;
	}
}

/***********Odd_Or_Even**************
Action: This function determines if a number is odd or even.
Parameters:
In: An integer between 1 and 100 entered by the user.
Out: None
Returns: The remainder of the entered integer divided by 2. If the
number is even, the function will return 0. If the number is odd,
the function will return 1.
************************************/
int Odd_Or_Even (int Integer)
{
	int Remainder;

	Remainder = Integer % 2;
	return Remainder;
}

/******Sum_Up_Numbers**********
Action: This function finds the sum of all numbers up to and 
including the entered number.
Parameters:
In: An integer between 1 and 100 entered by the user.
Out: None
Returns: The sum of all the numbers up to and including the 
entered number.
******************************/
int Sum_Up_Numbers (int Integer)
{
	int Count, Sum;
	Count = 1;
	Sum = 0;

	while (Count <= Integer)
	{
		Sum += Count;
		++ Count;
	}
	return Sum;
}

/*This program takes an integer between 1 and 100, checks if it is
odd or even, and finds the sum of all numbers up to and including
the entered number.

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 3
The number 3 is odd.
The sum of the numbers up to 3 is 6

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 4
The number 4 is even.
The sum of the numbers up to 4 is 10

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 1
The number 1 is odd.
The sum of the numbers up to 1 is 1

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 0
Press any key to continue . . .

This program takes an integer between 1 and 100, checks if it is
odd or even, and finds the sum of all numbers up to and including
the entered number.

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 99
The number 99 is odd.
The sum of the numbers up to 99 is 4950

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 100
The number 100 is even.
The sum of the numbers up to 100 is 5050

Please enter an integer between 1 and 100. Enter a number outside
range to quit. 101
Press any key to continue . . .*/



