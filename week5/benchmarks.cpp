/*********************************************************************
** Author: Joshua Hesseltine
** Date: 7 Feb 2015
** Description: Benchmarks project
*********************************************************************/

#include <iostream>
#include <stdlib.h>     //srand, rand
#include <time.h>       //time

using namespace std;

//function prototypes
void generateArray(int *&arrayForBubble, int *&array2, int arraySize);
int bubbleSort(int arrayForBubble[], int arraySize);
int selectionSort(int arrayForSelection[], int arraySize);
//testing
void printArray(int myArray[], int arraySize);

int main()
{
    int *arrayForBubble;
    int *arrayForSelection;
    int dataSize[4] = {100,1000,10000,100000};
    for (int i = 0; i < 4; i++){
        int arraySize = dataSize[i];
        cout << "data size = " << arraySize << endl;
        generateArray(arrayForBubble, arrayForSelection, arraySize);
        //cout << "unsorted data" << endl;
        //printArray(arrayForBubble, arraySize);
        int comparisonsForBubbleSort = bubbleSort(arrayForBubble, arraySize);
        //cout << "sorted bubble data" << endl;
        //printArray(arrayForBubble, arraySize);
        int comparisonsForSelectionSort = selectionSort(arrayForSelection, arraySize);
        //cout << "sorted selected data" << endl;
        //printArray(arrayForSelection, arraySize);
        cout << "Bubble sort Comparisons = " << comparisonsForBubbleSort << endl;
        cout << "Selection sort Comparisons = " << comparisonsForSelectionSort << endl << endl;
        delete[] arrayForBubble;
        delete[] arrayForSelection;
    }
    return 0;
}

/*********************************************************************
** Description: This function creates the arrays and sets seed
** Parameters: int array size and pointer to addresses for sort methods
*********************************************************************/
void generateArray(int *&arrayForBubble, int *&arrayForSelection, int arraySize)
{
    //int *array1 = new int [arraySize];
    arrayForBubble = new int[arraySize];
    arrayForSelection = new int[arraySize];
    srand(time(NULL)); //Initialize random seed
    for (int i = 0; i < arraySize; i++)
    {
        int x = ((int)rand()) ;
        arrayForBubble[i] = x;
        arrayForSelection[i] = x;
    }
}

/*********************************************************************
** Description: This function bubble sorts the arrays
** Parameters: int array and int size
*********************************************************************/
int bubbleSort(int arrayForBubble[], int arraySize)
{
    int comparisons = 0;
    int temp;
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < (arraySize-1); i++)
        {
            comparisons++;
            if (arrayForBubble[i] > arrayForBubble[i + 1] )
            {
                temp = arrayForBubble [i];
                arrayForBubble[i] = arrayForBubble [i + 1];
                arrayForBubble[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);

    return comparisons;
}

/*********************************************************************
** Description: This function selection sorts the arrays
** Parameters: int array and int size
*********************************************************************/
int selectionSort(int arrayForSelection[], int arraySize)
{
    int startScan, minIndex, minValue;
    int comparisons = 0;
	for (startScan = 0; startScan < (arraySize - 1); startScan++)
	{
	    //int temp;// for swap
		minIndex = startScan;
		minValue = arrayForSelection[startScan];
		for (int index = startScan + 1; index < arraySize; index++)
		{
		    comparisons++;
			if (arrayForSelection[index] < minValue)
			{
				minValue = arrayForSelection[index];
				minIndex = index;
			}
		}
		//swap
		//temp = arrayForSelection[minIndex];
		arrayForSelection[minIndex] = arrayForSelection[startScan];
		arrayForSelection[startScan] = minValue;
	}
    return comparisons;
}

/*********************************************************************
** Description: This function prints the results for testing purposes
** Parameters: int array and int size
*********************************************************************/
void printArray(int myArray[], int arraySize)
{
    for (int i = 0; i < (arraySize); i++)
    {
        cout << myArray[i] << endl;
    }
}

/*
output from the console:
1st run:
--------------
data size = 100
Bubble sort Comparisons = 9405
Selection sort Comparisons = 4950

data size = 1000
Bubble sort Comparisons = 978021
Selection sort Comparisons = 499500

data size = 10000
Bubble sort Comparisons = 99400059
Selection sort Comparisons = 49995000

data size = 100000
Bubble sort Comparisons = 1369565812
Selection sort Comparisons = 704982704


Process returned 0 (0x0)   execution time : 104.393 s
Press any key to continue.
-------------
2nd run:
data size = 100
Bubble sort Comparisons = 8910
Selection sort Comparisons = 4950

data size = 1000
Bubble sort Comparisons = 952047
Selection sort Comparisons = 499500

data size = 10000
Bubble sort Comparisons = 99790020
Selection sort Comparisons = 49995000

data size = 100000
Bubble sort Comparisons = 1389365614
Selection sort Comparisons = 704982704


Process returned 0 (0x0)   execution time : 104.594 s
Press any key to continue.
-------------
*/

/*
Analysis:
Using Big-O notations,
both methods have same time complexity for comparison: O(n^2)
But, in calculating big-o, additive values and constants are omitted.

one way to look at at is:
(1) selection sort: compares n,(n-1),(n-2),....2, 1
total comparisons = n(n-1)/2
(2) Bubble sort: it is data dependent.
it list is already sorted then comparisons = n
if list is not sorted then worst case comparisons = n^2.
in our case in random numbers it is close to n^2 sometimes.
*/
