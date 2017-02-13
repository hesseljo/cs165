/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Feb 2015
** Description: convert.cpp
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <sstream>

using namespace std;
//function prototypes
int convertfromBinary(int input1);
int convertfromDecimal(int input2);

int main ()
{
	int select;
	std::string input;
	int input2;

	do
	{
	cout<<"\n Menu (1 or 2 or 3, others to exit)"<<"\n";
	cout<<"\n 1: convert binary to decimal  ";
	cout<<"\n 2: convert decimal to binary  ";
	cout<<"\n 3: Exit  ";
	cin>>select;

	if (select == 1)
	{
		cout << "\n Enter a binary number to convert: " <<endl;
		cin>>input;

		string temp = (input);
		int binary;

		stringstream convert(temp);
		if (!(convert >> binary))
		binary = 0;

		for (int i = 0; i < input.length(); i++)

		{
			if (i > 1)
			{
				cout << "invalid input try again";
			}
			else if (i <  0)
			{
				cout << "invalid input try again";
			}
			else
			{
				cout << "\n" << convertfromBinary(binary);
			}
		}
	}

	else if (select == 2)
	{
		cout << "\n Enter a decimal number to convert: " <<endl;
		cin>>input2;
		cout << "\n" << convertfromDecimal(input2);
	}
	else
	{
		cout <<"\n invalid input";
	}

	// true for 1, 2 and 3 ONLY, then repeat
	// false for other numbers including 0, then stop.
	}while((select > 0) && (select < 2));


return 0;
}

/*********************************************************************
 ** Description: Converts an integer binary number to decimal format
 ** Parameters: input from user
 *********************************************************************/
int convertfromBinary(int binary)
{
	if (!(binary / 10))
	{
		return binary;
	}
	else
	{
		return (binary % 10 + convertfromBinary(binary / 10) * 2);
	}
}

/*********************************************************************
 ** Description: Converts an integer from decimal to binary format
 ** Parameters: input from user
 *********************************************************************/
int convertfromDecimal(int input2)
{
	if (input2 == 0)
	{
		return 0;
	}
	else
	{
		return (input2 % 2 + 10 * convertfromDecimal(input2 / 2));
	}

}




