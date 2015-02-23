//Kyle Stoltzfus
//1/28/2012
//Homework 2
//Homework2a.cpp
// This program finds the volume of a rectangular solid when the user inputs the length, width, height.

#include<iostream>
using namespace std;

void main()
{
	float Length, Width, Height, Volume;

	cout << "This program finds the volume of a rectangular solid.";
	cout << "\nEnter the height of the rectangle. ";
	cin >> Height;
	cout << "Enter the length of the rectangle. ";
	cin >> Length;
	cout << "Enter the width of the rectangle. ";
	cin >> Width;
	Volume = Length * Width * Height;
	cout << "The volume of the rectangle is " << Volume << "." << endl;
}


