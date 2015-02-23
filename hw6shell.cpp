/******************************************************************
Name :Kyle Stoltzfus and Matt Holloway
Date :2/26/2012
Homework # :  Homework #6 Problem #1
Source  :  hw6shell.cpp  
Action  :  Menu is displayed allows user to calculate
		   Miles per Gallon, Total minutes and seconds
		   and determine if number is a prime number or not

Notes  :
********************************************************************/
#include <iostream>
#include <stdlib.h>      // this header file requires the .h
using namespace std;

void DisplayMenu(void);
void FindMilesPerGallon(void);
void ConvertTotalSeconds(void);
void IsPrimeNumber(void);

// some prototypes have been left out you need to put rest in 

void main()
{
  int Choice;

  system("cls");	// this clears the output screen

  DisplayMenu();
  cin >> Choice;
  while (Choice != 4)
    {
      switch (Choice)
        {
	      case 1: FindMilesPerGallon();
			      break;
		  case 2: ConvertTotalSeconds();break;
		  case 3: IsPrimeNumber();break;
		  default : cout << "Sorry illegal choice, Please try again\n\n";
        }
      DisplayMenu();
      cin >> Choice;

    }
}

/*********************  DisplayMenu  ************************************
Action  :  This just displays the menu to the screen
Parameters  : none
returns     : nothing
***********************************************************************/
void DisplayMenu()
{
  cout << "\n\nDo you want to:\n";
  cout << "   1) Find miles per gallon\n";
  cout << "   2) Convert total seconds to minutes and seconds\n";
  cout << "   3) Determine if number is a prime number or not\n";
  cout << "   4) QUIT\n\n";
  cout << "  CHOICE --> ";
}

/********************  FindMilesPerGallon  ******************************
Action  : Ask user to input number of miles traveled and number of
          gallons used then display the miles per gallon obtained.
Parameters : none
returns    : nothing
------------------------------------------------------------------------*/
void FindMilesPerGallon(void)
{
  float Miles, Gallons, MilesPerGallon;

  cout << "\nEnter the number of miles traveled --> ";
  cin >> Miles;
  cout << "Enter the number of gallons used --> ";
  cin >> Gallons;

  MilesPerGallon = Miles / Gallons;

  cout << "\nThe number of miles per gallon is " << MilesPerGallon << "." << endl << endl;
}

/******************** ConvertTotalSeconds *********************
Action  : Ask user to input a given total number of seconds and then
          displays the corresponding number of minutes and seconds
Parameters : none
returns    : nothing
-------------------------------------------------------------------------*/
void ConvertTotalSeconds()
{
	int TotalSeconds, Minutes, Seconds;

	cout << "\nEnter the total number of seconds --> ";
	cin >> TotalSeconds;

	Minutes = TotalSeconds / 60;
	Seconds = TotalSeconds % 60;

	cout << "\nThere are " << Minutes << " minutes and " << Seconds << " seconds." << endl << endl;
}

/*********************** IsPrimeNumber()****************************
Action  : Ask user to input positive integer and will determine if number
          is a prime number or not.
Parameters  : none
Returns     : nothing
-------------------------------------------------------------------*/
void IsPrimeNumber()
{
	int Number, IsPrime;
	IsPrime = 1;

	cout << "\nEnter a number --> ";
	cin >> Number;

	if (Number == 0 || Number == 1)
		IsPrime = 0;
	else
	{
		for (int Count = 2; Count < (Number / 2); Count ++)
		{
			if (Number % Count == 0)
				IsPrime = 0; 
		}
	}

	if (IsPrime == 1)
		cout << "\nThe number " << Number << " is a prime number." << endl << endl;
	else
		cout << "\nThe number " << Number << " is not a prime number." << endl << endl;
}

/*

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 1

Enter the number of miles traveled --> 200
Enter the number of gallons used --> 10

The number of miles per gallon is 20.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 1

Enter the number of miles traveled --> 100.0
Enter the number of gallons used --> 5

The number of miles per gallon is 20.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2

Enter the total number of seconds --> 59

There are 0 minutes and 59 seconds.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2

Enter the total number of seconds --> 60

There are 1 minutes and 0 seconds.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2

Enter the total number of seconds --> 61

There are 1 minutes and 1 seconds.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2

Enter the total number of seconds --> 15478

There are 257 minutes and 58 seconds.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3

Enter a number --> 0

The number 0 is not a prime number.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3

Enter a number --> 1

The number 1 is not a prime number.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3

Enter a number --> 2

The number 2 is a prime number.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3

Enter a number --> 7

The number 7 is a prime number.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3

Enter a number --> 9

The number 9 is not a prime number.



Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 4
Press any key to continue . . . */



