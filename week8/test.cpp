/*********************************************************************
** Author: Joshua Hesseltine
** Date: 28 Feb 2015
** Description: test.cpp
*********************************************************************/
#include <iostream>
#include "CustomerProject.hpp"
#include "RegularProject.hpp"
#include "PreferredProject.hpp"

using namespace std;

int main ()
{
	cout<<"Enter total hours, material costs, and transportation costs seperated by a space"<<endl;
	double pH, pM, pT;
	cin >> pH >> pM >> pT;

	int input;
	cout<<"type integer 1 for regular or integer 2 for preferred" <<endl;
	cin>>input;

		if (input ==1)
		{
			CustomerProject *pCustProj = new RegularProject(pH, pM, pT);
			pCustProj->setHours(pH);
			pCustProj->setMaterials(pM);
			pCustProj->setTransportation(pT);
			cout<<"amount  $" <<pCustProj->billAmount();
		}
		else if (input == 2)
		{
			CustomerProject *pCustProj = new PreferredProject(pH, pM, pT);
			pCustProj->setHours(pH);
			pCustProj->setMaterials(pM);
			pCustProj->setTransportation(pT);
			cout<<"amount  $" <<pCustProj->billAmount();
		}
		else
		{
			cout<<"invalid input: try again"<<endl;
		}
	return 0;
}


