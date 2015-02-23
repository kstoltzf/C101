//Kyle Stoltzfus

#include <iostream>
using namespace std;

void FindLargestNumber(int &X, int Y, int Z);

void main()
{
	int Integer1, Integer2, Integer3;
	char Response;
	
	do
	{
		cout << "Enter an integer. ";
		cin >> Integer1;
		cout << "Enter another integer. ";
		cin >> Integer2;
		cout << "Enter an third integer.";
		cin >> Integer3;
		FindLargestNumber (Integer1, Integer2, Integer3);
		cout << Integer1 << endl;
		cout << "Run again? (y/n) ";
		cin >> Response;
	}
	while (Response == 'y' || Response == 'Y');
}

void FindLargestNumber (int &X, int Y, int Z)
{
	if (Y > X)
		X = Y;
	if (Z > X)
		X = Z;
}