//Kyle Stoltzfus
//2/2/2012
//Homework 3
//Homework3c.cpp
//This program accepts two integers in the range of -180 to 180 and displays
//the product, quotient, and remainder of the numbers.

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int FirstNumber, SecondNumber, Product, Quotient, Remainder;

	cout << "This program accepts two integers in the range of -180 to 180 and"
		<< "\ndisplays the product, quotient, and remainder of the numbers." << endl;
	cout << "Enter two integers between -180 and 180 --> ";
	cin >> FirstNumber;
	cin >> SecondNumber;

	if (FirstNumber > -181 && FirstNumber < 181 && SecondNumber > -181 && SecondNumber < 181)
	{
		Product = FirstNumber * SecondNumber;
		Quotient = FirstNumber / SecondNumber;
		Remainder = FirstNumber % SecondNumber;

		cout << endl << setw(5) << FirstNumber << setw(10) << " " << Quotient << " R " << Remainder << endl;
		cout << "X" << setw(4) << SecondNumber << setw(7) << " " << "_____" << endl;
		cout << "_____" << setw(7) << SecondNumber << "|" << FirstNumber << endl;
		cout << setw(5) << Product << endl;
	}
	else
		cout << "Bad input." << endl;
}

/*This program accepts two integers in the range of -180 to 180 and
displays the product, quotient, and remainder of the numbers.
Enter two integers between -180 and 180 --> 190 23
Bad input.
Press any key to continue . . .

This program accepts two integers in the range of -180 to 180 and
displays the product, quotient, and remainder of the numbers.
Enter two integers between -180 and 180 --> 120 -185
Bad input.
Press any key to continue . . .

This program accepts two integers in the range of -180 to 180 and
displays the product, quotient, and remainder of the numbers.
Enter two integers between -180 and 180 --> 125 34

  125          3 R 23
X  34       _____
_____     34|125
 4250
Press any key to continue . . .

This program accepts two integers in the range of -180 to 180 and
displays the product, quotient, and remainder of the numbers.
Enter two integers between -180 and 180 --> 157 16

  157          9 R 13
X  16       _____
_____     16|157
 2512
Press any key to continue . . .*/
	


