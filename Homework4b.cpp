//Kyle Stoltzfus
//2/10/2012
//Homework 4
//Homework4b.cpp
//This program displays the first forty Fibonacci numbers.

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	cout << "This program displays the first forty Fibonacci numbers." << endl << endl;
	
	int Count, FirstNumber, SecondNumber,NumberHolder, DisplayCount;
	Count = 1;
	DisplayCount = 1;
	FirstNumber = 0;
	SecondNumber = 1;

	cout << left <<setw(10) << FirstNumber;

	while (Count <= 39)
	{
		if (DisplayCount % 6 == 0)
			cout << endl << left << setw(10) << SecondNumber;
		else
			cout << left << setw(10) << SecondNumber;
		++ DisplayCount;
		//This if statement is used to format the output into six columns.
		NumberHolder = SecondNumber;
		/*NumberHolder is used to retain the old value of SecondNumber so it can be
		used again after SecondNumber has been updated*/
		SecondNumber = FirstNumber + SecondNumber;
		FirstNumber = NumberHolder;
		++ Count;
	}
	cout << endl << endl;
}

/*This program displays the first forty Fibonacci numbers.

0         1         1         2         3         5
8         13        21        34        55        89
144       233       377       610       987       1597
2584      4181      6765      10946     17711     28657
46368     75025     121393    196418    317811    514229
832040    1346269   2178309   3524578   5702887   9227465
14930352  24157817  39088169  63245986

Press any key to continue . . .*/