/*********************************************************************
** Author: Joshua Hesseltine
** Date: 7 Feb 2015
** Description: string sort
*********************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctype.h>
using namespace std;
//function prototype
void stringSort(string words[], int numStrings);
//compares string interger values to sort properly during runtime
bool icompare(std::string const& a, std::string const& b)
{
    return std::lexicographical_compare(a.begin(), a.end(),
                                        b.begin(), b.end());
}

int main ()
{
	string input = "";

	int numStrings = 0;
	cout << "Hey user -- how many strings do you want to enter?\n"; // << endl;
	getline(cin, input);

	numStrings = std::atoi(input.c_str());

	string *words;
	words = new string[numStrings]; //created at runtime because...

	for (int i = 0; i < numStrings; i++) //loop to collect the strings and store in words array
	{
		cout << "Now enter a string followed by enter:\n"; // << endl;
		getline(cin, words[i]);
	}
	stringSort(words, numStrings);

	delete [] words;
	return 0;
}
/*********************************************************************
** Description: This function selection sorts the array of strings
** Parameters: string array and integer for number of strings in array or array size
*********************************************************************/
void stringSort (string words[], int numStrings)
{
	int startScan, minIndex;
	string str;

	// need to know the encoding type

	// for all strings
	for(startScan = 0; startScan < (numStrings - 1); startScan++)
	{
		minIndex = startScan;

		// grab string
		str = words[startScan];

		// for all chars in string
		for(int index = startScan + 1; index < numStrings; index++)
		{
			//if (words[index] < str)
			if (icompare(words[index], str))
			{
				str = words[index];
				minIndex = index;
			}
		}
		words[minIndex] = words[startScan];
		words[startScan] = str;
	}

	for (int i = 0; i < numStrings; i++) //print the randomized array
	{
		cout << " "<< words[i];
	}
}





