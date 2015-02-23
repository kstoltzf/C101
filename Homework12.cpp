//Kyle Stoltzfus & Matt Holloway
//4/23/2012
//Homework 12
//Homework12.cpp & a13shell.cpp
//This homework uses functions to deal with C++ strings, which are null 
//terminating character arrays.


/***************************  Upcase  ************************************
DESCRIPTION : This function will accept a character string and convert
              all the characters to uppercase if they are not already.
PARAMETERS  :
  S[]       : Pointer to string address
returns     : nothing
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void Upcase (char S[ ])
{
   for (int i = 0; S[i] != 0; ++ i)
	  S[i] = toupper(S[i]);
}

/*================= Testing Upcase Function ================

Enter null string to terminate

Enter string => Hello! How are you?

Str = 'Hello! How are you?'

After calling Upcase,

Str = 'HELLO! HOW ARE YOU?'

----------------------------------------------------------

Enter string => 1234 bHkjhjy /.,';[]

Str = '1234 bHkjhjy /.,';[]'

After calling Upcase,

Str = '1234 BHKJHJY /.,';[]'

----------------------------------------------------------/*


/***************************  DeleteFirst  *******************************
DESCRIPTION : This function will delete the first character of any string
PARAMETERS  :
  S[]       : pointer to string address
returns     : nothing
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void DeleteFirst (char S[ ])
{
	char Temp = S[1];

	for (int i = 0; S[i] != 0; ++ i)
	{
		S[i] = Temp;
		Temp = S[i+2];
	}
	//Moves all the elements of the array one position to the left and erases the
	//first element of the original array.
}

/*========== Testing Delete First Function ================

Enter null string to terminate

Enter string => Hello!

Str = 'Hello!'

After calling DeleteFIrst,

Str = 'ello!'

--------------------------------------------------------

Enter string => 12jkha

Str = '12jkha'

After calling DeleteFIrst,

Str = '2jkha'

--------------------------------------------------------

Enter string =>  Hello

Str = ' Hello'

After calling DeleteFIrst,

Str = 'Hello'

--------------------------------------------------------*/


/*************************** InsertBlank  ********************************
DESCRIPTION : This function will insert a blank into a string given
              location specified by the user.  If the position is outside
              the length of the string then nothing happens.
PARAMETERS  :
  S[]       : pointer to string address
  Pos       : The position in the array where the blank is to be inserted
returns     : nothing
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void InsertBlank (char S[ ], int  Pos)
{
	int i = Pos - 1;
	char Temp1, Temp2;

	if (S[i] != 0)
	//Checks to make sure there is a character in the array postion
	//where the blank is to be inserted.
	{
		Temp1= S[i];
		S[i] = ' ';

		for (i += 1; Temp1 != 0; ++ i)
		{
			Temp2 = S[i];
			S[i] = Temp1;
			Temp1 = Temp2;
		}
		//Moves every element in the array after the blank one position
		//to the right.
	}
}

/*========== Testing Insert Blank Function ===============

Enter null string to terminate

Enter string => Hello!

Enter the position to insert blank ---> 1

Str = 'Hello!'

After calling InsertBlank,

Str = ' Hello!'

----------------------------------------------------------

Enter string => Hello!

Enter the position to insert blank ---> 3

Str = 'Hello!'

After calling InsertBlank,

Str = 'He llo!'

----------------------------------------------------------

Enter string => Hello!

Enter the position to insert blank ---> 6

Str = 'Hello!'

After calling InsertBlank,

Str = 'Hello !'

----------------------------------------------------------

Enter string => Hello!

Enter the position to insert blank ---> 7

Str = 'Hello!'

After calling InsertBlank,

Str = 'Hello!'

----------------------------------------------------------*/


/*************************** Position  ********************************
DESCRIPTION : This function will tell you what position or location
              a given character is in the string.  If character is not
              found a -1 is returned. Function is case sensitive.
PARAMETERS :
  Ch       : The character being searched for in the array.
  S[]      : pointer to string address
returns    : Position of the character being searched for if it is found. If
			 the character is not in the array, -1 is returned.
note     : my position starts at 1, so "this is fun" and look for "t" then
           found in position 1.
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
int Position (char Ch, char S[])
{
	int Pos = -1;
	//This is a default value that will be returned if the character being 
	//searched for is not in the array.
	
	for (int i = 0; S[i] != 0; ++ i)
		
		if (Ch == S[i])
		{
			Pos = i +1;
			break;
			//Once the character is found, the program will break out of the 
			//for loop.
		}

  return Pos;
}

/*========== Testing Position Function ===============

Enter null string to terminate

Enter string => Hello!

Enter the character to find location in string ---> !

After calling Position Function,
'!' is found in 6 position of string

----------------------------------------------------------

Enter string => Hello!

Enter the character to find location in string ---> l

After calling Position Function,
'l' is found in 3 position of string

----------------------------------------------------------

Enter string => Hello!

Enter the character to find location in string ---> h

After calling Position Function,
'h' is found in -1 position of string

----------------------------------------------------------

Enter string => Hello!

Enter the character to find location in string ---> L

After calling Position Function,
'L' is found in -1 position of string

----------------------------------------------------------

Enter string => Hello!

Enter the character to find location in string ---> H

After calling Position Function,
'H' is found in 1 position of string

----------------------------------------------------------*/