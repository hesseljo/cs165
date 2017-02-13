/*********************************************************************
** Author: Joshua Hesseltine
** Date: 7 Feb 2015
** Description: Sphere project
*********************************************************************/

#include <iostream>
#include "Sphere.hpp"

using namespace std;

Sphere::Sphere() //default sets radius to 0.0
{
	radius = (0.0);

}

Sphere::Sphere(double rad) //constructor takes a double and passes it to set method
{
	setRadius(rad);
}

void Sphere::setRadius(double rad)
{
	radius = rad;
}

double Sphere::getRadius()
{
	return radius;
}

/*********************************************************************
** Description: This function takes the user input for radious and calculates volumn
** Parameters: double integer radious
*********************************************************************/
double Sphere::getVolume(double rad)
{
	double pi;
	pi = 3.1416926;
	double vol;
	vol = (pi*rad*rad*rad*4/3);
	return vol;
}


