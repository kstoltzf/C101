//Kyle Stoltzfus

#include <iostream>
using namespace std;

void main()
{
	int SpaceCount, VowelCount;
	char Ch;

	SpaceCount = 0;
	VowelCount = 0;

	cout << "This program determines the number of vowels and spaces in a sentence." << endl;
	cout << "Please enter a sentence." << endl;
	cin.get(Ch);

	while (Ch != '\n')
	{
		if (Ch == ' ')
			++ SpaceCount;
		else if (Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u')
			++ VowelCount;
		cin.get(Ch);
	}

	cout << endl << "VOWELS = " << VowelCount << endl;
	cout << "SPACES = " << SpaceCount << endl;
}

