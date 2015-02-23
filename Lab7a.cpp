//Kyle Stoltzfus

#include <iostream>
using namespace std;

int LargestNumber(int X, int Y, int Z);

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
		cout << LargestNumber(Integer1, Integer2, Integer3) << endl;
		cout << "Run again? (y/n) ";
		cin >> Response;
	}
	while (Response == 'y' || Response == 'Y');
}

int LargestNumber(int X, int Y, int Z)
{
	if (X > Y && X > Z)
		return X;
	else if (Y > X && Y > Z)
		return Y;
	else
		return Z;
}