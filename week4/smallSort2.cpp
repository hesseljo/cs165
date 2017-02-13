/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: smallSort2.cpp
*********************************************************************/

#include <iostream>

using namespace std;

void sortAscending(int *, int *, int *);

int main ()

{

	int num1, num2, num3;

	cout<<"enter three numbers in any order \n";
	cin >>num1 >> num2 >> num3;
	cout<< "original order:  " << num1 << "  "<< num2 << "  " << num3 << endl;

	sortAscending(&num3, &num2, &num1);

	return 0;

}

void sortAscending(int *a, int *b, int *c)
{
	int num1 = *a;
	int num2 = *b;
	int num3 = *c;

	  if (a < b && b < c)
	   {
	      cout<< "sorted order: "<<num1<<num2<<num3 << endl;
	   }
	   else if (a > b && b > c)
	   {
	      cout<< "sorted order: "<< num3<<num2<<num1<< endl;
	   }

	   else if (a < b && b > c)
	   {
	      cout<< "sorted order: " << num1<<num3<<num2<<endl;
	   }
	   else
	   {
		   cout<<"ooops!";
	   }

}


