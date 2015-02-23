//Kyle Stoltzfus
//2/16/2012
//Homework 5
//Homework5b.cpp
/*This program takes two integers inputted by the user and performs the
desired math operation. */

#include <iostream>
using namespace std;

void main()
{
	cout << "This program takes two integers and performs the desired math operation." << endl << endl;

	int Integer1, Integer2, Result;
	char Operand, Response;
	
	do
	{
		cout << "Enter an integer. ";
		cin >> Integer1;
		cout << "Enter another integer. ";
		cin >> Integer2;
		cout << "Enter a mathematical operator. ";
		cin >> Operand;

		switch (Operand)
		{			
			case '+': Result = Integer1 + Integer2;break;
			case '-': Result = Integer1 - Integer2;break;
			case '*': Result = Integer1 * Integer2;break;
			case '/': Result = Integer1 / Integer2;break;
			case '%': Result = Integer1 % Integer2;break;
			default: Operand = 0;  
		}

		if (Operand != 0)
			cout << endl << Integer1 << " " << Operand << " " << Integer2 << " = " << Result << endl << endl;
		else
			cout << endl << "Bad Operator." << endl << endl;

		cout << "Would you like to run this program again? (Y/N)  ";
		cin >> Response;
	}
	while (Response == 'y' || Response == 'Y');
}

/*This program takes two integers and performs the desired math operation.

Enter an integer. 4
Enter another integer. 6
Enter a mathematical operator. +

4 + 6 = 10

Would you like to run this program again? (Y/N)  y
Enter an integer. 5
Enter another integer. 3
Enter a mathematical operator. -

5 - 3 = 2

Would you like to run this program again? (Y/N)  Y
Enter an integer. 2
Enter another integer. 4
Enter a mathematical operator. *

2 * 4 = 8

Would you like to run this program again? (Y/N)  y
Enter an integer. 9
Enter another integer. 3
Enter a mathematical operator. /

9 / 3 = 3

Would you like to run this program again? (Y/N)  y
Enter an integer. 5
Enter another integer. 3
Enter a mathematical operator. %

5 % 3 = 2

Would you like to run this program again? (Y/N)  y
Enter an integer. 6
Enter another integer. 2
Enter a mathematical operator. m

Bad Operator.

Would you like to run this program again? (Y/N)  n
Press any key to continue . . . */




