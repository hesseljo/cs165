/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: PreferredProject.cpp
*********************************************************************/

#include "PreferredProject.hpp"

PreferredProject::PreferredProject(double pH, double pM, double pT): CustomerProject(pH, pM, pT) {}


/*********************************************************************
 ** Description: returns the adjusted calculation for a Preferred Project
 ** Parameters: none
 *********************************************************************/
double PreferredProject::billAmount()
{
	double tempM;
	tempM = materials *.85;
	double tempT;
	tempT = transportation *.90;
	if (hours > 100)
	{
		hours = 100;
		return (hours*80 + tempM + tempT);
	}
	else
	{
		return (hours*80 + tempM + tempT);
	}
}

