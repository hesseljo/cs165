/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: findMode.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

void findMode(int [], int);

int main ()
{
	cout << "user how many integers do you want to enter? " << endl;
	int input;
	cin>>input;

	int *p = new int [input];

	int temp;
	int count;
	int mode;

	for (int count = 0; count < input; count++)
	{
		cout << "enter them followed by enter" <<count +1 << endl;
		cin >>input;
		*(p+count) = input;
	}
	//mode = findMode(input, count);

return 0;
}

void findMode (int array[], int size)
{
	int modeNum, oldNum, currentNum = -1, precount, count = 0;

	for (int e = 0; e < size; e++)
	{
		precount = 0;
		oldNum = *(array + (++e));
		for (int n = 0; n < size; n++)
		{
			if (currentNum == oldNum)
				oldNum = *(array + (++e));

		}
		for (int i = 0; i < size; i++)
		{
			if (oldNum == array[i])
			{
				precount++;
			}
		}
		currentNum = oldNum;
		if (precount > count)
		{
			count = precount;
			modeNum = currentNum;
		}
	}
}

