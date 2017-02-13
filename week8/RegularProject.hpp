/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: RegularProject.hpp
*********************************************************************/

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP
#include "CustomerProject.hpp"

class RegularProject: public CustomerProject
{
public:
	RegularProject(double, double, double);
	double billAmount();
};

#endif
