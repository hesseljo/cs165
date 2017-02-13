/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Feb 2015
** Description: revPrint.cpp
*********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void revPrint (int [], int);

int main ()
{
	cout << "user how many integers do you want to enter? " << endl;
	int size;
	cin>>size;

	int *p = new int [size];

    int data;
	for (int i = 0; i < size; i++)
	{
		cout << "enter a number followed by enter" << endl;
		cin >>data;
		*(p+i) = data;
	}
	revPrint(p, size);

return 0;
}


/*********************************************************************
 ** Description: Revers prints an aaray of integers using recursion
 ** Parameters: Dynamically alloted array input from user and integer array size
 *********************************************************************/
void revPrint (int array[], int size)
{
	if (size > 0) // base case is size 0
	{
		revPrint(array+1, size - 1);
		cout << " " << array[0] << " ";
	}

}


