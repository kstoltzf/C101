//Kyle Stoltzfus
//4/8/2012
//Homework 10
//Homework10.cpp
//This program shows how the extraction operator works for 
//integer variables.

#include <iostream>
#include <ctype.h>
using namespace std;

int ReadInt (unsigned short int &);

void main ()
{
	char Response;
	int ErrorCode;
	unsigned short int Number;

	cout << "This program shows how the extraction operator works for " << endl
		<< "integer variables." << endl << endl;

	do
	{
		ErrorCode = ReadInt (Number);

		if (ErrorCode == 1)
		{
			cout << "Illegal entry. The first non-whitespace character is not" << endl
				<< " a numeric character." << endl << endl;
			cin.ignore (100, '\n');
			//cin.ignore is used to ignore all characters left in the input
			//buffer up to the newline.
		}
		else if (ErrorCode == 2)
			cout << "Overflow. The number is larger than 65,535." << endl << endl;
		else
			cout << "The number entered is " << Number << "." << endl << endl;

		cout << "Run again? (Y/N) ";
		cin >> Response;
		cout << endl << endl;
	}
	while (Response == 'Y' || Response == 'y');
}

/*******************ReadInt*******************************************************
Action: This function shows how the extraction operator works for an integer variable.
It asks the user to enter a number and then reads it one character at a time.
Parameters:
	In: None
	Out: The number entered by the user if it is less than 65,535.
Returns: An error code. O if the input is legal and in range. 1 if input is illegal.
(Illegal input means the first non-whitespace character is not an integer.) 2 if input
is out of range. (Number cannot be bigger than 65,535 since variable is an unsigned 
short integer.)
*********************************************************************************/

int ReadInt (unsigned short int & Number)
{
	int Num;
	char Input;
	Num = 0;

	cout << "Enter a number --> ";
	cin.get (Input);

	while (isspace (Input) != 0)
		cin.get (Input);
	//This loop gets rid of all leading whitespace characters in the 
	//input buffer.

	if (isalpha (Input) != 0 || ispunct (Input) != 0)
		return 1;
	//This if statement makes sure the first non-whitespace character
	//is a numeric character. If it is not, an error code is returned.
	
	while (isdigit (Input) != 0)
	{
		Input -= '0';
		Num *= 10;
		Num += int(Input);
		cin.get (Input);
	}

	if (Num > 65535)
		return 2;
	else 
	{
		Number = Num;
		return 0;
	}
}


