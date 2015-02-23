//Kyle Stoltzfus
//3/25/2012
//Homework 8
//Homework 8.cpp
//This program adds fractions.

#include <iostream>
#include <iomanip>
using namespace std;

void ReadInput (int&, int&, int&, int&);
void FindSum (int, int, int, int, int&, int&);
void DisplayResult (int, int, int, int, int, int);
int GreatestCommonDivisor (int, int);

void main()
{
	char Response;
	int Num1, Denom1, Num2, Denom2, NumSum, DenomSum;

	do
	{
		cout << "This program adds fractions. 'Y' continues, any other key exits program" << endl;
		cout << "=======================================================================" << endl;
		ReadInput(Num1, Denom1, Num2, Denom2);
		FindSum (Num1, Denom1, Num2, Denom2, NumSum, DenomSum);
		DisplayResult(Num1, Denom1, Num2, Denom2, NumSum, DenomSum);
		cout << "---------------------------------------------" << endl;
		cout << "Continue? Y or N! ==> ";
		cin >> Response;
		cout << endl << endl;
	}
	while (Response == 'Y');
}

/********************ReadInput********************************
Action: This function asks the user for the numerator and denominator of two fractions
and stores them as variables.
Parameters:
In: Nothing
Out: The numerator and denominator of the two fractions entered by the user.
Returns: Nothing
*****************************************************************/
void ReadInput (int& Num1, int& Denom1, int& Num2, int& Denom2)
{
	cout << "Enter   numerator 1 ==> ";
	cin >> Num1;
	cout << "Enter denominator 1 ==> ";
	cin >> Denom1;
	cout << "\nEnter   numerator 2 ==> ";
	cin >> Num2;
	cout << "Enter denominator 2 ==> ";
	cin >> Denom2;
}

/*****************************FindSum********************************************
Action: This function finds the sum of the two fractions entered by the user.
Parameters:
In: The numerator and denominator of the two fractions entered by the user in the 
ReadInput function.
Out: The sum of the numerators and the sum of the denominators but not in reduced form.
Returns: Nothing
*********************************************************************************/
void FindSum (int Num1, int Denom1, int Num2, int Denom2, int& NumSum, int& DenomSum)
{
	NumSum = Num1 * Denom2 + Denom1 * Num2;
	DenomSum = Denom1 * Denom2;
}

/**********************DisplayResult********************************************
Action: This function displays the results from the FindSum and ReadInput functions
with the FindSum results displayed in reduced terms.
Parameters:
In: The numerator and denominator of the two fractions entered by the user in the 
ReadInput function. Also, the sum of the numerators and the sum of the denominators from
the FindSum function.
Out: Nothing
Returns: Nothing
********************************************************************************/
void DisplayResult (int Num1, int Denom1, int Num2, int Denom2, int NumSum, int DenomSum)
{
	int GCD, ReducedNumSum, ReducedDenomSum;

	if (NumSum != 0)
	{
		GCD = GreatestCommonDivisor (NumSum, DenomSum);
		ReducedNumSum = NumSum / GCD;
		ReducedDenomSum = DenomSum / GCD;
	}
	else
	{
		ReducedNumSum = 0;
		ReducedDenomSum = 0;
	}

	cout << endl << endl << " " << Num1 << setw(5) << " " << Num2 << setw(5) << " " << ReducedNumSum << endl;
	cout << "--- + --- = ---" << endl;
	cout << " " << Denom1 << setw(5) << " " << Denom2 << setw(5) << " " << ReducedDenomSum << endl << endl;
}

/***************GreatestCommonDivisor**********************************
Action: This function finds the greatest common divisor of two numbers.
Paramters:
In: The sum of the numerators and the sum of the denominators from the 
FindSum function.
Out: Nothing
Returns: The greatest common divisor of the sum of the numerators and 
denominators.
**********************************************************************/
int GreatestCommonDivisor (int NumSum, int DenomSum)
{
	int GCD;

	if (NumSum < DenomSum)
		GCD = NumSum;
	else
		GCD = DenomSum;

	while (NumSum % GCD != 0 || DenomSum % GCD != 0)
		-- GCD;
	
	return GCD;
}

/*This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 1
Enter denominator 1 ==> 6

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 3


 1     1     1
--- + --- = ---
 6     3     2

---------------------------------------------
Continue? Y or N! ==> Y


This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 0
Enter denominator 1 ==> 6

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 3


 0     1     1
--- + --- = ---
 6     3     3

---------------------------------------------
Continue? Y or N! ==> Y


This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 0
Enter denominator 1 ==> 5

Enter   numerator 2 ==> 0
Enter denominator 2 ==> 6


 0     0     0
--- + --- = ---
 5     6     0

---------------------------------------------
Continue? Y or N! ==> Y


This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 8
Enter denominator 1 ==> 5

Enter   numerator 2 ==> 9
Enter denominator 2 ==> 3


 8     9     23
--- + --- = ---
 5     3     5

---------------------------------------------
Continue? Y or N! ==> Y


This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 1
Enter denominator 1 ==> 2

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 2


 1     1     1
--- + --- = ---
 2     2     1

---------------------------------------------
Continue? Y or N! ==> n    /*



