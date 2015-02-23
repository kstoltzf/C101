//Kyle Stoltzfus
//Lab 11

#include <iostream>
using namespace std;

const int SIZE = 20;

void main()
{
	int Temp[SIZE], Final[SIZE], i, k;
	char Response, Digit;

	do 
	{
		for (i = 0; i < SIZE; ++ i)
		{
			Temp[i] = 0;
			Final[i] = 0;
		}

		cout << "Enter a number. ";
		cin.get(Digit);

		i = 0;

		while (Digit != '\n' && i < SIZE)
		{
			Temp[i] = Digit - '0';
			cin.get(Digit);
			++ i;
		}

		for (k = SIZE - 1, -- i; i >= 0; -- k, -- i)
			Final[k] = Temp[i];

		for (k = 0; k < SIZE; ++ k)
			cout << Final[k];
	
	cout << "\nRun again? (Y/N) ";
	cin >> Response;
	 cin.ignore();
	}
	while (Response == 'y' || Response == 'Y');
}