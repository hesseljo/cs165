/*********************************************************************
** Author: Joshua Hesseltine
** Date: 7 Feb 2015
** Description: Sphere project
*********************************************************************/

#ifndef SPHERE_HPP
#define SPHERE_HPP

class Sphere {
private:
	double radius;

public:
	Sphere();
	Sphere(double);
	void setRadius(double);
	double getRadius();
	double getVolume(double);

};

#endif
