/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: Rectangle.cpp
*********************************************************************/

#include <iostream>
#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}

Rectangle::Rectangle(double length, double width)
{
	setLength(length);
	setWidth(width);
}

void Rectangle::setLength(double pl)
{
	pl = length;
}

void Rectangle::setWidth(double pw)
{
	pw = width;
}

/*********************************************************************
 ** Description: Calculates the area of an Object
 ** Parameters: two double params length and width
 *********************************************************************/
double Rectangle::area(double length, double width)
{
	double area;
	area = length * width;
	return area;
}

/*********************************************************************
 ** Description: Calculates the perimeter of an Object
 ** Parameters: two double params length and width
 *********************************************************************/
double Rectangle::perimeter(double length, double width)
{
	double perimeter;
	perimeter = length * 2 + width * 2;
	return perimeter;
}


