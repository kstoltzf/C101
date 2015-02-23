//Kyle Stoltzfus
//2/16/2012
//Homework 5
//Homework5a.cpp
/*This program takes a character inputted by the user and displays it 
along with its ASCII value. It also determines if the character is uppercase,
lowercase, number, or other. */

#include <iostream>
using namespace std;

void main()
{
	char Ch;
	int UpperCase, LowerCase, Number, Other, FirstValue, SecondValue;
	UpperCase = 0;
	LowerCase = 0;
	Number = 0;
	Other = 0;

	cout << "This program diplays the ASCII value of the entered character." <<
		"\nIt also determines if the character is uppercase, lowercase, " <<
		"\nnumber, or other." << endl << endl;
	cout << "Enter a character. Enter # to quit. ";
	cin >> Ch;

	while (Ch != '#')
	{
		FirstValue = int (Ch) + 1;
		SecondValue = int (Ch) + 2;

		cout << "The character entered was " << Ch << "." << endl;
		cout << "The ASCII value of this character is " << int (Ch) << "." << endl;
		cout << "The next character is " << char (FirstValue) << "." << endl;
		cout << "The ASCII value of this character is " << FirstValue << "." << endl;
		cout << "The next character is " << char (SecondValue) << "." << endl;
		cout << "The ASCII value of this character is " << SecondValue << "." << endl << endl;

		if (Ch >= 'A' && Ch <= 'Z')
			++ UpperCase;
		else if (Ch >= 'a' && Ch <= 'z')
			++ LowerCase;
		else if (Ch >= '0' && Ch <= '9')
			++ Number;
		else
			++ Other;

		cout << "Enter a character. Enter # to quit. ";
		cin >> Ch;
	}
	cout << "The number of uppercase characters entered was " << UpperCase << "." << endl;
	cout << "The number of lowercase characters entered was " << LowerCase << "." << endl;
	cout << "The number of number characters entered was " << Number << "." << endl;
	cout << "The number of other characters entered was " << Other << "." << endl;
}

/*This program diplays the ASCII value of the entered
It also determines if the character is uppercase, l
number, or other.

Enter a character. Enter # to quit. ?
The character entered was ?.
The ASCII value of this character is 63.
The next character is @.
The ASCII value of this character is 64.
The next character is A.
The ASCII value of this character is 65.

Enter a character. Enter # to quit. Z
The character entered was Z.
The ASCII value of this character is 90.
The next character is [.
The ASCII value of this character is 91.
The next character is \.
The ASCII value of this character is 92.

Enter a character. Enter # to quit. _
The character entered was _.
The ASCII value of this character is 95.
The next character is `.
The ASCII value of this character is 96.
The next character is a.
The ASCII value of this character is 97.

Enter a character. Enter # to quit. y
The character entered was y.
The ASCII value of this character is 121.
The next character is z.
The ASCII value of this character is 122.
The next character is {.
The ASCII value of this character is 123.

Enter a character. Enter # to quit. .
The character entered was ..
The ASCII value of this character is 46.
The next character is /.
The ASCII value of this character is 47.
The next character is 0.
The ASCII value of this character is 48.

Enter a character. Enter # to quit. 9
The character entered was 9.
The ASCII value of this character is 57.
The next character is :.
The ASCII value of this character is 58.
The next character is ;.
The ASCII value of this character is 59.

Enter a character. Enter # to quit. #
The number of uppercase characters entered was 1.
The number of lowercase characters entered was 1.
The number of number characters entered was 1.
The number of other characters entered was 3.
Press any key to continue . . . */


