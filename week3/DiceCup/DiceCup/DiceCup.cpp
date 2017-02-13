/*
 * DiceCup.cpp
 *
 *  Created on: Jan 21, 2015
 *      Author: jkhesseltine
 */

#include <iostream>
#include <string>
#include "DiceCup.hpp"

using namespace std;


int main() {

	DiceCup cup1;
    int inDice, inFaces, inRoll;

	cout << "Please enter the number of Die" <<endl;
	cin >> inDice;
	cout << "Please enter the number of Faces" <<endl;
	cin >> inFaces;

	cup1.setnumDice(inDice);
	cup1.setnumFaces(inFaces);

	cout << "Please enter how many times you wish to roll" <<endl;
	cin >> inRoll;

	cout << "number of rolls: " << cup1.rollDice() << endl;

	return 0;
}

void DiceCup::setnumFaces(int inFaces)
{
    if (numFaces <= 0)
    {
    	cout << "Invalid input";
    }
    else
    {
    	numFaces = inFaces;
    }
}

void DiceCup::setnumDice(int inDice)
{
    if (numDice <= 0)
    {
    	cout << "Invalid input";
    }
    else
    {
    	numDice = inDice;
    }
}

int DiceCup::rollDice()
{
    return numDice + numFaces;
}





