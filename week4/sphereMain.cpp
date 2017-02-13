#include <iostream>
#include <string>
#include "Sphere.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void printSphereInfo(Sphere *);

int main ()
{

	double rad;
	cout<<"hey user whats the radius of the sphere?" <<endl;
	cin >> rad;

	Sphere *pSphere = new Sphere (rad);
    printSphereInfo(pSphere);


return 0;
}


void printSphereInfo(Sphere *pSphere)
{
	double radius = pSphere->getRadius();
	double volumn = pSphere->getVolumn(radius);
	cout << "the radius is:  " << radius << endl;
	cout << "the volumn is:  " << volumn << endl;
}

/*
 * 2) Write a class called Sphere that has a field for radius, of type double.  It should have set and get methods for the radius,
 * and a constructor that takes a double and passes it to the set method.  The default constructor should set the radius to 0.0.
 * There should be a method called getVolume that returns the volume of the Sphere object.
 *
 *

In a separate file (sphereMain.cpp), write a void function called printSphereInfo that takes as a parameter a pointer-to-Sphere
and prints out the radius and volume of the Sphere the parameter points to (appropriately labeled of course).


In the same file, write a main method that asks the user for the radius of a sphere, creates a new Sphere object with that radius,
and passes the address of that Sphere object to printSphereInfo.



Hint: Remember to use the easier "arrow" notation for accessing members of objects.
The files must be named: Sphere.hpp, Sphere.cpp and sphereMain.cpp.

 */
