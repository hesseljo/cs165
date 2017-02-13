/*********************************************************************
** Author: Joshua Hesseltine
** Date: 01 Mar 2015
** Description: templateShuffle.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

template <class T>
void shuffleArray (T array[], int s);


int main ()
{
	int input;
	int s;
	cout << "What variable type do you want to sort?" << endl;
	cout << "Press 1 for Integer" << endl;
	cout << "2 for Double" << endl;
	cout << "3 for String" << endl;
	cin >> input;

	if (input == 1)
	{
        cout << "Please enter array size: ";
        cin >> s;

        int *p1 = new int [s];

        int intArray;
			for (int i = 0; i < s; i++)
			{
				cout << "Now enter a number followed by enter" << endl;
				cin >>intArray;
				*(p1+i) = intArray;
			}
    	shuffleArray(p1, s);
	}

	else if (input == 2)
	{
		cout << "Please enter array size: ";
	    cin >> s;
	    double *p2 = new double [s];
	    double doubleArray;
		for (int i = 0; i < s; i++)
		{
			cout << "Now enter a number followed by enter" << endl;
			cin >>doubleArray;
			*(p2+i) = doubleArray;
		}
	shuffleArray(p2, s);

	}
	else if (input == 3)
	{
       cout << "Please enter array size: ";
       cin >> s;

       char *p3 = new char [s];

       char charArray;
       for (char i = 0; i < s; i++)
       {
    	   cout << "Now enter a string followed by enter" << endl;
		   cin >>charArray;
		   *(p3+i) = charArray;
		}
    	shuffleArray(p3, s);
	}


	return 0;
}

/*********************************************************************
** Description: This function randomizes an array of any type
** Parameters: array of any type and int size
*********************************************************************/
template <class S>
void shuffleArray (S a[], int s)
{
	srand ( time (0) ); //use a different seed to ensure each run is different

	for (int i = 0; i < s; i++)
	{
		a[i] = i; //fill the array in order

		for (int i = 0; i < s; i++)
		{
			int random = rand() % s; //build out a random position
			int temp = a[i]; a [i] = a[random]; a[random] = temp; //swap the positions
		}
	}
	for (int p = 0; p < s; p++) //print the randomized array
	{
		cout << " "<< a[p];
	}
	delete[]a; //delete the array
}




