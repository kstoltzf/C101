//Kyle Stoltzfus

#include <iostream>
using namespace std;

void PositiveValue();
void NegativeValue();

void main()
{
	int Integer1, Integer2, Value;
	Value = 0;

	cout << "Please enter two integers, same to quit --> ";
	cin >> Integer1;
	cin >> Integer2;

	while (Integer1 != Integer2)
	{
		Value = Integer1 - Integer2;
		
		if (Value >= 0)
			PositiveValue();
		else 
			NegativeValue();

		cout << "Please enter two integers, same to quit --> ";
		cin >> Integer1;
		cin >> Integer2;
	}
}

void PositiveValue()
{
	cout << endl << "The subtraction of these two has an expression that is" << endl;
	cout << "     *     " << endl;
	cout << "     *     " << endl;
	cout << "***********" << endl;
	cout << "     *     " << endl;
	cout << "     *     " << endl << endl;
}


void NegativeValue()
{
	cout << endl << "The subtraction of these two has an expression that is" << endl;
	cout << "***********" << endl << endl;
}