/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Feb 2015
** Description: recSum.cpp
*********************************************************************/
#include <iostream>

using namespace std;
//function prototype
double getSumRecursively(double myArray[], int arraySize);

int main()
{
    cout << "user how many numbers do you want to enter? " << endl;
	int count;
	cin >> count;

	double *myArray = new double [count];

    double data;
	for (int i = 0; i < count; i++)
	{
		cout << "enter a number followed by enter" << endl;
		cin >> data;
		myArray[i] = data; //same as *(myArray+i) = data;
	}

    double sum = 0;

    sum = getSumRecursively(myArray, count);
    cout << "Recursive sum = " << sum << endl;

    return 0;

}

/*********************************************************************
 ** Description: Recursively returns sum of all doubles in array
 ** Parameters: Dynamically alloted array input from user and array size
 *********************************************************************/
double getSumRecursively(double myArray[], int arraySize)
{
    if (arraySize <= 0)
        return 0;
    return myArray[0] + getSumRecursively( myArray + 1, arraySize -1);

}
