//Kyle Stoltzfus
//3/17/2012
//Homework 7
//Homework7a.cpp
//This program allows the user to enter the total number of seconds
//and calls a function to find the number of hours, minutes, and seconds.

#include <iostream>
#include <iomanip>
using namespace std;

void Calculate_Hours_Minutes_Seconds(int TotalSeconds);

void main()
{
	int TotalSeconds;

	cout << "This program takes the total number of seconds entered and determines " << endl
		<< "the number of hours, minutes, and seconds." << endl << endl;
	cout << "Enter the total number of seconds. Enter 0 to end the program. --> ";
	cin >> TotalSeconds;
	
	while (TotalSeconds != 0)
	{
		Calculate_Hours_Minutes_Seconds(TotalSeconds);
		cout << "Enter the total number of seconds. Enter 0 to end the program. --> ";
		cin >> TotalSeconds;
	}
}

/************Calculate_Hours_Minutes_Seconds*************
Action: This function takes the total number of seconds and calculates
the number of hours, minutes, and seconds and displays them on the screen.
Parameters:
In: The total number of seconds entered by the user.
Out: Nothing
Returns: Nothing
*********************************************************/

void Calculate_Hours_Minutes_Seconds (int TotalSeconds)
{
	int Hours, Minutes, Seconds, TimeLeft;

	Hours = TotalSeconds / 3600;
	TimeLeft = TotalSeconds % 3600;
	Minutes = TimeLeft / 60;
	Seconds = TimeLeft % 60;

	cout << setw(2) << setfill('0') << Hours << ":" << setw(2) << Minutes << ":"<< setw(2) << Seconds << endl << endl;
}

/*This program takes the total number of seconds entered and determines
the number of hours, minutes, and seconds.

Enter the total number of seconds. Enter 0 to end the program. --> 1
00:00:01

Enter the total number of seconds. Enter 0 to end the program. --> 59
00:00:59

Enter the total number of seconds. Enter 0 to end the program. --> 60
00:01:00

Enter the total number of seconds. Enter 0 to end the program. --> 61
00:01:01

Enter the total number of seconds. Enter 0 to end the program. --> 3599
00:59:59

Enter the total number of seconds. Enter 0 to end the program. --> 3600
01:00:00

Enter the total number of seconds. Enter 0 to end the program. --> 3601
01:00:01

Enter the total number of seconds. Enter 0 to end the program. --> 31758468
8821:47:48

Enter the total number of seconds. Enter 0 to end the program. --> 0
Press any key to continue . . .*/
