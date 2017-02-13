/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: RegularProject.cpp
*********************************************************************/

#include "RegularProject.hpp"

RegularProject::RegularProject(double pH, double pM, double pT): CustomerProject(pH, pM, pT) {}

/*********************************************************************
 ** Description: returns the adjusted calculation for a Regular Project
 ** Parameters: none
 *********************************************************************/
double RegularProject::billAmount()
{
	return (hours*80 + materials + transportation);
}
