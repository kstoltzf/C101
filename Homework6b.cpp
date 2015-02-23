//Kyle Stoltzfus
//2/26/2012
//Homework 6
//Homework6b.cpp
//This program verifies that if someone gave you a penny and then doubles
//that amount every day, you would be a millionaire in 30 days.

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	float Amount = .01;

	cout << "This program verifies that if someone gave you a penny and then doubles " << endl 
		<< "that amount every day, you would be a millionaire in 30 days." << endl << endl;
	cout << "Day" << setw(10) << " " << "Amount" << endl;
	cout << "___" << setw(10) << " " << "______" << endl;

	for (int Day = 1; Day <= 30; Day ++)
	{
		cout << left << setw(2) << Day << setw(11) << " " << "$" << setiosflags(ios::fixed) 
			<< setiosflags(ios::showpoint) << setprecision(2) << Amount << endl;

		Amount *= 2;
	}
}

/*This program verifies that if someone gave you a penny and then doubles
that amount every day, you would be a millionaire in 30 days.

Day          Amount
___          ______
1            $0.01
2            $0.02
3            $0.04
4            $0.08
5            $0.16
6            $0.32
7            $0.64
8            $1.28
9            $2.56
10           $5.12
11           $10.24
12           $20.48
13           $40.96
14           $81.92
15           $163.84
16           $327.68
17           $655.36
18           $1310.72
19           $2621.44
20           $5242.88
21           $10485.76
22           $20971.52
23           $41943.04
24           $83886.08
25           $167772.16
26           $335544.31
27           $671088.63
28           $1342177.25
29           $2684354.50
30           $5368709.00
Press any key to continue . . . */
