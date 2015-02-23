/*  Source : LAB4.CPP

   Action  : Program will display a menu and have user enter a choice,
             will continue to loop or repeat until user decides to quit.
             Menu choices are as follows:

             First choice:
               Program ask user to enter Fahrenheit temperature then
               calculates and displays the Celsius equavilent temperature.

             Second choice:
               Program ask user to enter radius of a circle then displays
               the area of circle.

             Third choice:
               Program ask user to enter any character from the keyboard
               and then tells whether entered key is a lower case letter,
               an upper case letter or no letter at all.

             Final choice:
               Program will quit when user enters a 'Q' or 'q'.

  ** NOTES **
      You need to fill in the missing code to get the program to work as
      describe above.

      Do not change any of the code with the do-while loop, and do not
      change any of the existing code, just add what you need to get it to
      work.  You may add more variables if you want to.

      Also note that this program will not compile the way it is now,
      you must add the correct code first, then compile it.
----------------------------------------------------------------------*/
#include <iostream>
using namespace std;

void main()
{
  const float PI = 3.14;

  float Fahrenheit, Radius, Celsius, Area;
  char Response, Ch;

  do
    {
     cout << "Choose one of the following:\n";
     cout << "   1) convert Fahrenheit to Celsius\n";
     cout << "   2) calculate area of a circle\n";
     cout << "   3) Enter a character to see if upper or lower case or other\n";
     cout << "   Q) Quit\n";
     cout << "Response --> ";
     cin >> Response;

     if (Response == '1')
       {
	    cout << "Enter the temperature in Fahrenheit. "; 
		cin >> Fahrenheit;
		Celsius = (5.0 / 9.0) * (Fahrenheit - 32);
		cout << "The temperature in Celsius is " << Celsius << "." << endl;
       }
     else if (Response == '2')
       {
		cout << "Enter the radius of the circle. ";
		cin >> Radius;
		Area = Radius * Radius * PI;
		cout << "The area of the circle is " << Area << "." << endl;
       }
     else if (Response == '3')
       {
		 cout << "Enter a character. ";
		 cin >> Ch;
		 if ((Ch >= 'A') && (Ch <= 'Z'))
			 cout << "The character " << Ch << " is an uppercase character." << endl;
		 else if ((Ch >= 'a') && (Ch <= 'z'))
			 cout << "The character " << Ch << " is a lowercase character." << endl;
		 else
			 cout << "The character " << Ch << " is not a letter character." << endl;
		}
     else if (Response != 'Q' && Response != 'q')  // DO NOT change any code 
       cout << "\nILLEGAL INPUT, pick again\n\n";  // in these two lines or below
   }
  while (Response != 'Q' && Response != 'q');
  cin.ignore(2);
}