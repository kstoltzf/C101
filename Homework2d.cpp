//Kyle Stoltzfus
//1/28/2012
//Homework 2
//Homework2d.cpp
//This program finds the retroactive pay due, the new annual salary, and the new monthly salary of the workers.

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	float PrevSalary, NewSalary, RetroPay, NewMonthlySalary, OldMonthlySalary;
	const float PAY_INCREASE= 1.076;
	const int MONTHS_IN_YEAR= 12;

	cout << "This program calculates the new annual and monthly salary \nand shows the retroactive pay due.";
	cout << "\nEnter the employee's previous annual salary --> ";
	cin >> PrevSalary;
	OldMonthlySalary= PrevSalary / MONTHS_IN_YEAR;
	NewSalary= PrevSalary * PAY_INCREASE;
	NewMonthlySalary= NewSalary / MONTHS_IN_YEAR;
	RetroPay= (NewMonthlySalary - OldMonthlySalary) * 6;
	cout << left << setw(19) << "Retroactive Pay" << "--> $" << setiosflags (ios::fixed) << setiosflags (ios::showpoint) 
	<< setprecision(2) <<RetroPay << endl;    
	//setiosflags is used to force the output to display a number with a decimal point
	//setprecision is used to determine the number of spaces after the decimal point
	cout << left << setw(19) << "New Annual Salary" << "--> $" << NewSalary << endl;
	cout << left << setw(19) << "New Monthly Salary" << "--> $" << NewMonthlySalary << endl;
}