//Kyle Stoltzfus
//Lab 12

#include <iostream>
using namespace std;

int Words (char []);
int Characters (char []);
void ReverseDisplay (char []);

void main ()
{
	char Sentence [50];

	cout << "Enter some sentence: " << endl;
	cin.getline (Sentence, 50);

	cout << "Your sentence has " << Words (Sentence) << " words." << endl;
	cout << "And your sentence has " << Characters (Sentence) << " characters." << endl << endl;
	cout << "Your sentence backwards is as follows:" << endl;
	ReverseDisplay (Sentence);
	cout << endl << endl;
}

int Words (char N [])
{
	int W = 0;
	
	for (int i = 0; N[i]; ++ i)
		if (N[i] == ' ')
			++ W;
	
	return W + 1;
}

int Characters (char X [])
{
	int C = 0;

	while (X[C])
		++ C;

	return C;
}

void ReverseDisplay (char A [])
{
	int i = 0;

	while (A[i])
		++ i;

	for (i= i-1; A[i] >= 0; -- i)
			cout << A[i];
}