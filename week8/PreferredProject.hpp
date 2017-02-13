/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: PreferredProject.hpp
*********************************************************************/

#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP

#include "CustomerProject.hpp"

class PreferredProject: public CustomerProject

{
public:
	PreferredProject(double, double, double);
	double billAmount();
};

#endif
