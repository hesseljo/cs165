/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: CustomerProject.cpp
*********************************************************************/
#include "CustomerProject.hpp"

CustomerProject::CustomerProject()
{
	hours = 0;
	materials = 0;
	transportation = 0;
}

CustomerProject::CustomerProject(double pH, double pM, double pT)
{
	setHours(pH);
	setMaterials(pM);
	setTransportation(pT);
}

void CustomerProject::setHours(double pH)
{
	hours = pH;
}

void CustomerProject::setMaterials(double pM)
{
	materials = pM;
}

void CustomerProject::setTransportation(double pT)
{
	transportation = pT;
}





