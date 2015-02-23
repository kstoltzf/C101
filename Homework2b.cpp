//Kyle Stoltzfus
//1/28/2012
//Homework 2
//Homework2b.cpp
//This program calculates the area and circumference of a circle when the user inputs the radius.

#include<iostream>
using namespace std;

void main()
{
	float Radius, Area, Circumference;
	const float PI= 3.14159;
	
	cout << "This program calculates the area and circumference of a circle.";
	cout << "\nEnter the radius of the circle. ";
	cin >> Radius;
	Area= Radius * Radius * PI;
	Circumference= Radius * 2 * PI;
	cout << "The area of the circle is " << Area << ".";
	cout << "\nThe circumference of the circle is " << Circumference << "." << endl;
}