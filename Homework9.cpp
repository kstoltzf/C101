//Kyle Stoltzfus
//3/30/2012
//Homework 9
//Homework9.cpp
//This program calculates monthly loan payments after having the user input the 
//principal, interest rate, number of years, and number of payments per year.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Read_Loan_Info (float&, float&, int&, int&);
float MonthlyPayment (float, float, int, int);
void Show_Table (float, float, int, int);

void main()
{
	float Principal, Rate;
	int Years, PaymentsPerYear;
	char Response;

	cout << "This program calculates monthly loan payments." << endl;
	
	do
	{
		Read_Loan_Info (Principal, Rate, Years, PaymentsPerYear);
		Show_Table (Principal, Rate, Years, PaymentsPerYear);
		cout << "Would you like to run this program again? (Y/N) ";
		cin >> Response;
	}
	while (Response == 'Y' || Response == 'y');
}

/************************Read_Loan_Info**********************************************
Action: This function asks the user to enter the loan information including the principal,
interest rate, number of years, and number of payments per year.
Parameters:
	In: Nothing
	Out: The principal, interest rate, number of years, and number of payments per years
	     entered by the user.
Returns: Nothing
************************************************************************************/

void Read_Loan_Info (float& Principal, float& Rate, int& Years, int& PaymentsPerYear)
{
	cout << endl << "Enter the principal --------------------> ";
	cin >> Principal;
	cout << "Enter the interest rate ----------------> ";
	cin >> Rate;
	cout << "Enter the number of years --------------> ";
	cin >> Years;
	cout << "Enter the number of payments per year --> ";
	cin >> PaymentsPerYear;
}

/**********************MonthlyPayment********************************************
Action: This function takes the information entered by the user and calculates the 
monthly loan payment.
Parameters:
	In: The principal, interest rate, number of years, and number of payments per year
	    entered by the user in the Read_Loan_Info function.
	Out: Nothing
Returns: The monthly loan payment.
*********************************************************************************/

float MonthlyPayment (float Principal, float Rate, int Years, int PaymentsPerYear)
{
	float Monthly;
	float Interest_Rate = (Rate / 100) / 12;
	int Term = Years * PaymentsPerYear;
	
	Monthly = Principal * (Interest_Rate / (1 - pow(Interest_Rate + 1, -Term) ) );

	return Monthly;
}

/********************Show_Table*********************************************
Action: This function displays all the information from the previous functions
on the screen in a formatted table.
Parameters:
	In: The principal, interest rate, number of years, and payments per year entered
	    by the user in the Read_Loan_Info function.
	Out: Nothing
Returns: Nothing
***************************************************************************/

void Show_Table (float Principal, float Rate, int Years, int PaymentsPerYear)
{
	int TotalPayments = Years * PaymentsPerYear;
	float PaidMonthly;

	PaidMonthly = MonthlyPayment (Principal, Rate, Years, PaymentsPerYear);

	cout << endl << endl << left << setw(20) << "Principal" << "$" << setiosflags (ios::fixed)
		<< setiosflags (ios::showpoint) << setprecision (2) << Principal << endl;
	//setiosflags is used to correctly format the output
	cout << left << setw(20) << "Interest Rate" << Rate << "%" << endl;
	cout << left << setw(20) << "No. of Years" << Years << endl;
	cout << left << setw(20) << "Payments per Year" << PaymentsPerYear << endl;
	cout << left << setw(20) << "No. of Payments" << TotalPayments << endl;
	cout << left << setw(20) << "Monthly Payment" << "$" << PaidMonthly << endl << endl;
}

/*
This program calculates monthly loan payments.

Enter the principal --------------------> 11000
Enter the interest rate ----------------> 10
Enter the number of years --------------> 4
Enter the number of payments per year --> 12


Principal           $11000.00
Interest Rate       10.00%
No. of Years        4
Payments per Year   12
No. of Payments     48
Monthly Payment     $278.99

Would you like to run this program again? (Y/N) Y

Enter the principal --------------------> 15500
Enter the interest rate ----------------> 5.7
Enter the number of years --------------> 5
Enter the number of payments per year --> 12


Principal           $15500.00
Interest Rate       5.70%
No. of Years        5
Payments per Year   12
No. of Payments     60
Monthly Payment     $297.50

Would you like to run this program again? (Y/N) y

Enter the principal --------------------> 115000
Enter the interest rate ----------------> 7.75
Enter the number of years --------------> 30
Enter the number of payments per year --> 12


Principal           $115000.00
Interest Rate       7.75%
No. of Years        30
Payments per Year   12
No. of Payments     360
Monthly Payment     $823.88

Would you like to run this program again? (Y/N) n
Press any key to continue . . . 
*/