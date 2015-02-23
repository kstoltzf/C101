//Lab 10

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void CheckNumbers (int, int);

void main ()
{
	srand (time (NULL));

	int UserInput, CompInput;
	char Response;

	do
	{
		CompInput = (rand () % 3) + 1;

		cout << "Enter 1, 2, or 3. ";
		cin >> UserInput;
		CheckNumbers (UserInput, CompInput);
		cout << "Run again? (Y/N) ";
		cin >> Response;
		cout << endl;
	}
	while (Response == 'Y' || Response == 'y');
}

void CheckNumbers (int UserInput, int CompInput)
{
	if (UserInput == CompInput)
		cout << "The numbers " << UserInput << " and " << CompInput << " are the same." << endl << endl;
	else
		cout << "The numbers " << UserInput << " and " << CompInput << " are different." << endl << endl;
}
