/*********************************************************************
** Author: Joshua Hesseltine
** Date: 6 Feb 2015
** Description: Shuffle an array of integer elements into random order
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void shuffleArray (int [], int);

int main ()
{

	cout << "Hey user -- how many integers do you want to enter? " << endl;
	int size;
	cin >> size;

	int *p = new int [size];

    int input;
	for (int i = 0; i < size; i++)
	{
		cout << "Now enter a number followed by enter" << endl;
		cin >>input;
		*(p+i) = input;
	}
	shuffleArray(p, size);
	//delete [] p;

	return 0;
}

/*********************************************************************
** Description: This function randomizes an array of integers then prints the result
** Parameters: array of ints and the size of the array
*********************************************************************/
void shuffleArray (int input[], int size)
{
	srand ( time (0) ); //use a different seed to ensure each run is different

	for (int i = 0; i < size; i++)
	{
		input[i] = i; //fill the array in order

		for (int i = 0; i < size; i++)
		{
			int random = rand() % size; //build out a random position
			int temp = input[i]; input [i] = input[random]; input[random] = temp; //swap the positions
		}
	}
	for (int p = 0; p < size; p++) //print the randomized array
	{
		cout << " "<< input[p];
	}
	delete[]input; //delete the array
}

