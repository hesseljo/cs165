/*
 * DiceCup.h
 *
 *  Created on: Jan 21, 2015
 *      Author: jkhesseltine
 */

#ifndef DICECUP_HPP
#define DICECUP_HPP

class DiceCup {
private:
	int numDice;
	int numFaces;

public:
	DiceCup() //default constructor
	{
		numDice = 1;
		numFaces = 2;
	}
	DiceCup(int, int) //constructor
	{
		setnumFaces(numFaces);
		setnumDice(numDice);
	}
	void setnumDice(int);
	void setnumFaces(int);
	int rollDice();

};
#endif /* DICECUP_HPP */
