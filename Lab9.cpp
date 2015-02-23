//Kyle Stoltzfus

#include <iostream>
using namespace std;

void FindEvenOdd (int);

void main ()
{
	int Integer;
	
	do
	{
		cout << "Enter an integer. Enter 0 to quit. ";
		cin >> Integer;
		FindEvenOdd (Integer);
	}
	while (Integer != 0);
}

void FindEvenOdd (int Integer)
{
	int Remainder;
	static int EvenCount = 0;
	static int OddCount = 0;
	static int TimesCalled = 0;

	++ TimesCalled;

	(Integer % 2 == 0) ? ++ EvenCount : ++ OddCount;

	if (TimesCalled % 3 == 0)
		cout << "The number of even numbers entered is " << EvenCount << endl << endl;
}


