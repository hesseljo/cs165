#include <iostream>
#include <string>
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

double Sphere::getVolumn(double rad)
{
	double pi;
	pi = 3.1416926;
	double vol;
	vol = (pi*rad*rad*rad*4/3);
	return vol;
}



/*

Write a class called Sphere that has a field for radius, of type double.

It should have set and get methods for the radius, and a constructor that takes a double and passes it to the set method.

The default constructor should set the radius to 0.0.

There should be a method called getVolume that returns the volume of the Sphere object.



In a separate file (sphereMain.cpp), write a void function called printSphereInfo that takes as a parameter a pointer-to-Sphere and
prints out the radius and volume of the Sphere the parameter points to (appropriately labeled of course).

In the same file, write a main method that asks the user for the radius of a sphere, creates a new Sphere object with that radius,
and passes the address of that Sphere object to printSphereInfo.  SphereMain.cpp will need to #include "Sphere.hpp".

Hint: Remember to use the easier "arrow" notation for accessing members of objects.

The files must be named: Sphere.hpp, Sphere.cpp and sphereMain.cpp.

 */
