/*********************************************************************
** Author: Joshua Hesseltine
** Date: 7 Feb 2015
** Description: Sphere project
*********************************************************************/

#include <iostream>
#include "Sphere.hpp"

using namespace std;
//function prototypes
void sortArray(Sphere myArray[], int arraySize);
void printArray(Sphere myArray[], int arraySize);


int main()
{

    cout << "user how many spheres do you want? " << endl;  //get total number of spheres to be used
	int total;
	cin>>total;


	Sphere *myArray = new Sphere[total];// initialize an array of that size
    double data; // data for input

	for (int i = 0; i < total; i++)//get radius of each sphere and insert into the array
	{
		cout << "enter a radius of each sphere followed by 'enter'" << endl;
		cin >> data;
		myArray[i] = Sphere(data);
	}

	cout << "\nOriginal data:" << endl;//display original data
	printArray(myArray, total);

	sortArray(myArray, total);//sort data in descending order

	cout << "\nSorted data:" << endl;//display sorted data in descending order
	printArray(myArray, total);
    delete[] myArray;
    return 0;
}

/*********************************************************************
** Description: This function sorts an array of spheres
** Parameters: sphere object array and int for array size
*********************************************************************/
void sortArray(Sphere myArray[], int arraySize)
{
    double temp;
	bool swapped;

	do
	{
	    swapped = false;
		for (int i = 0; i < (arraySize-1); i++)
		{
			if (myArray[i].getRadius() < myArray[i + 1].getRadius() )
			{
			    //swap
				temp = myArray [i].getRadius();
				myArray[i].setRadius(myArray [i + 1].getRadius());
				myArray[i + 1].setRadius(temp);
				swapped = true;
			}
		}
	} while (swapped); //loop again if swap occurred during this pass.

}

/*********************************************************************
** Description: This function prints the assorted array
** Parameters: sphere object array and int for array size
*********************************************************************/
void printArray(Sphere myArray[], int arraySize)
{
    for (int i = 0; i < (arraySize); i++)
    {
        cout << myArray[i].getRadius() << endl;
    }
}

