//Kyle Stoltzfus
//4/15/2012
//Homework 11
//Homework11.cpp
//This program asks the user to input two numbers and stores them in 
//separate integer arrays. It then adds the numbers together and stores
//the result in a third integer array. Finally, it displays all three
//integer arrays.

#include <iostream>
using namespace std;

const int SIZE = 20;

void GetNumber (int []);
void AddTwoNumbers (int [], int [], int []);
void Display (int [], int [], int []);

void main ()
{
	int FirstNumber [SIZE] = {0}, SecondNumber [SIZE] = {0}, Sum [SIZE] = {0};
	char Response;

	do
	{
		cout << "Program will add two large numbers" << endl << endl;
		
		cout << "Please enter first number --> ";
		GetNumber (FirstNumber);
		
		cout << "Please enter second number -- > ";
		GetNumber (SecondNumber);
		
		AddTwoNumbers (FirstNumber, SecondNumber, Sum);
		Display (FirstNumber, SecondNumber, Sum);

		cout << "\n\nContinue 'Y' or 'N' --> ";
		cin >> Response;
		cout << endl << endl;
	}
	
	while (Response == 'Y' || Response == 'y');
}

/************************GetNumber*****************
Action: This function reads the number entered by the user
one character at a time and stores each character in a 
separate element of an array. It then converts the character
array to an integer array and reverses the order of the 
array elements.
Parameters:
	 In: Nothing
	Out: An integer array containing the number entered 
		 by the user.
Returns: Nothing
**************************************************/

void GetNumber (int A [])
{
	int i, k, Temp [SIZE];
	char Input;
	
	for (i = SIZE - 1; i > 0 ; i --)
	{
		A [i] = 0;
		Temp [i] = 0;
	}

	cin >> Input;

	while (Input != '\n' && i < SIZE)
	{
		Temp [i] = Input - '0';
		cin.get(Input);
		++ i;
	}

	for  (k = SIZE - 1, -- i; i >= 0; k --, i --)
		A [k] = Temp [i];

}

/***********************AddTwoNumbers*************
Action: This function adds the two numbers entered by the
user and stored in two integer arrays by the GetNumber
function. It then stores the sum into a third integer array.
Parameters:
	 In: The two integer arrays filled by the GetNumber function.
	Out: A third integer array with the sum of the numbers from
		 the other two integer arrays.
Returns: Nothing
*************************************************/

void AddTwoNumbers (int A [], int B [], int C [])
{
	int CarryBit = 0;

	for (int i = 19; i >= 0; i --)
	{	
		if (A [i] + B[i] + CarryBit >= 10)
		{
			C [i] = (A [i] + B [i] + CarryBit) % 10;
			CarryBit = 1;
		}
		
		else
		{
			C [i] = A [i] + B[i] + CarryBit;
			CarryBit = 0;
		}
	}
}

/********************Display**************
Action: This function displays all the information from the 
previous two functions.
Parameters:
	 In: The three integer arrays filled by the GetNumber and
	     AddTwoNumbers functions.
	Out: Nothing
Returns: Nothing
*****************************************/

void Display (int A [], int B [], int C [])
{
	for (int i = 0; i < SIZE; i ++)
		cout << A [i];
	
	cout << endl;
	
	for (int i = 0; i < SIZE; i ++)
		cout << B [i];

	cout << endl << "--------------------" << endl;

	for (int i = 0; i < SIZE; i ++)
		cout << C [i];
}




