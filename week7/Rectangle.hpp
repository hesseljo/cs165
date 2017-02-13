/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: Rectangle.hpp
*********************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {

//private:
	//double length;
	//double width;

public:
	double length;
	double width;
	//constructors
	Rectangle();
	Rectangle(double, double);
	// helper methods
	void setLength(double);
	void setWidth(double);
	// mutator methods
	double area(double, double);
	double perimeter(double, double);
};

#endif // RECTANGLE_HPP

