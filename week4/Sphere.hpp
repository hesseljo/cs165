
/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: Sphere.hpp
*********************************************************************/

#ifndef SPHERE_HPP_
#define SPHERE_HPP_

class Sphere {
private:
	double radius;

public:
	Sphere();
	Sphere(double);
	void setRadius(double);
	double getRadius();
	double getVolumn(double);
};

#endif /* SPHERE_HPP_ */
