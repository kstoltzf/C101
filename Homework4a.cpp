//Kyle Stoltzfus
//2/9/2012
//Homework 4
//Homework4a.cpp
//This program determines a person's GPA based on two classes.

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	cout << "This program determines a person's GPA based on two classes." << endl;
	float StudentGPA, TotalPoints, Class1_Points, Class2_Points;
	char Grade1, Grade2;
	int Class1_Credits, Class2_Credits;

	cout << "Enter letter grade for first class --> ";
	cin >> Grade1;
	cout << "Enter number of credit hours for first class --> ";
	cin >> Class1_Credits;
	cout << endl << "Enter letter grade for second class --> ";
	cin >> Grade2;
	cout << "Enter the number of credit hours for second class --> ";
	cin >> Class2_Credits;

	switch (Grade1)
	{
	case 'A': Class1_Points = 4.0;break;
	case 'B': Class1_Points = 3.0;break;
	case 'C': Class1_Points = 2.0;break;
	case 'D': Class1_Points = 1.0;break;
	default: Class1_Points = 0.0;
	}

	switch (Grade2)
	{
	case 'A': Class2_Points = 4.0;break;
	case 'B': Class2_Points = 3.0;break;
	case 'C': Class2_Points = 2.0;break;
	case 'D': Class2_Points = 1.0;break;
	default: Class2_Points = 0.0;
	}

	TotalPoints = (Class1_Points * Class1_Credits) + (Class2_Points * Class2_Credits);
	StudentGPA = TotalPoints / (Class1_Credits + Class2_Credits);
	
	cout << left << setw(4) << Grade1 << Class1_Credits << endl;
	cout << left << setw(4) << Grade2 << Class2_Credits << endl;
	cout << "Your GPA = " << StudentGPA << endl << endl;
	
	if (StudentGPA < 2.0)
		cout << "You are doing poorly." << endl;
	else if (StudentGPA >= 3.5)
		cout << "Congratulations, doing good." << endl;
}

/*This program determines a person's GPA based on two classes.
Enter letter grade for first class --> B
Enter number of credit hours for first class --> 3

Enter letter grade for second class --> C
Enter the number of credit hours for second class --> 4
B   3
C   4
Your GPA = 2.42857

Press any key to continue . . .

This program determines a person's GPA based on two classes.
Enter letter grade for first class --> B
Enter number of credit hours for first class --> 3

Enter letter grade for second class --> A
Enter the number of credit hours for second class --> 4
B   3
A   4
Your GPA = 3.57143

Congratulations, doing good.
Press any key to continue . . .

This program determines a person's GPA based on two classes.
Enter letter grade for first class --> D
Enter number of credit hours for first class --> 3

Enter letter grade for second class --> C
Enter the number of credit hours for second class --> 3
D   3
C   3
Your GPA = 1.5

You are doing poorly.
Press any key to continue . . .*/