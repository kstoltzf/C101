//Kyle Stoltzfus
//2/2/2012
//Homework 3
//Homework3d.cpp
//This program takes the number of shirts purchased as input and outputs the 
//number of shirts purchased, the price of the shirts, the sales tax and the 
//total price.

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int Shirts;
	float Subtotal, Tax, Total, ShirtCost;
	const float ORIGINAL_PRICE = 15.75;
	const float SMALL_DISCOUNT = 12.50;
	const float LARGE_DISCOUNT = 8.00;
	const float SALES_TAX = .06;

	cout << "This program takes the number of shirts purchased and " << endl 
		<< "determines the price of the shirts, the sales tax, and " << endl
		<< "the total price." << endl;
	cout << "Enter the number of shirts purchased. ";
	cin >> Shirts;

	if (Shirts < 4)
	{
		Subtotal = Shirts * ORIGINAL_PRICE;
		ShirtCost = ORIGINAL_PRICE;
	}
	else if (Shirts >= 4 && Shirts <= 10)
	{
		Subtotal = Shirts * SMALL_DISCOUNT;
		ShirtCost = SMALL_DISCOUNT;
	}
	else
	{
		Subtotal = Shirts * LARGE_DISCOUNT;
		ShirtCost = LARGE_DISCOUNT;
	}
	
	Tax = Subtotal * SALES_TAX;
	Total = Subtotal + Tax;

	cout << "The number of shirts being purchased is " << Shirts << "." << endl;
	cout << setiosflags (ios::fixed) << setiosflags (ios::showpoint) << setprecision(2)
		//setiosflags and set precision are used to correctly format the dollar ouput
		<< "The individual price of the shirts is $" << ShirtCost << "." << endl;
	cout << "The sales tax is $" << Tax << "." << endl;
	cout << "The total price is $" << Total << "." << endl;
}

/*This program takes the number of shirts purchased and
determines the price of the shirts, the sales tax, and
the total price.
Enter the number of shirts purchased. 3
The number of shirts being purchased is 3.
The individual price of the shirts is $15.75.
The sales tax is $2.84.
The total price is $50.08.
Press any key to continue . . . 

This program takes the number of shirts purchased and
determines the price of the shirts, the sales tax, and
the total price.
Enter the number of shirts purchased. 4
The number of shirts being purchased is 4.
The individual price of the shirts is $12.50.
The sales tax is $3.00.
The total price is $53.00.
Press any key to continue . . .

This program takes the number of shirts purchased and
determines the price of the shirts, the sales tax, and
the total price.
Enter the number of shirts purchased. 9
The number of shirts being purchased is 9.
The individual price of the shirts is $12.50.
The sales tax is $6.75.
The total price is $119.25.
Press any key to continue . . .

This program takes the number of shirts purchased and
determines the price of the shirts, the sales tax, and
the total price.
Enter the number of shirts purchased. 10
The number of shirts being purchased is 10.
The individual price of the shirts is $12.50.
The sales tax is $7.50.
The total price is $132.50.
Press any key to continue . . .

This program takes the number of shirts purchased and
determines the price of the shirts, the sales tax, and
the total price.
Enter the number of shirts purchased. 11
The number of shirts being purchased is 11.
The individual price of the shirts is $8.00.
The sales tax is $5.28.
The total price is $93.28.
Press any key to continue . . .*/
