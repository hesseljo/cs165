/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: CustomerProject.hpp
*********************************************************************/
#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

//base class
class CustomerProject
{
public:
	//constructors
	CustomerProject();
	CustomerProject(double hours, double materials, double transportation);

	//mutator methods
	void setHours(double);
	void setMaterials(double);
	void setTransportation(double);

	//accessor methods
	double getHours();
	double getMaterials();
	double getTransportation();

	//virtual pure function
	virtual double billAmount() =0;

protected:
	double hours;
	double materials;
	double transportation;

};

#endif


