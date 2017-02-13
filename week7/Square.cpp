/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: Square.cpp
*********************************************************************/
#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace std;

//default constructor
Square::Square() {}

//constructor sets the value for a square object to the values used for a Rectangle object
Square::Square(double input) : Rectangle(input, input) {}

int main ()
{
	double pl;
	double pw;
	double side;
	double option;

	do
	  {

	     cout << "1) Create Rectangle \n " << endl;
	     cout << "2) Create Square \n" << endl;
	     cout << "3) Quit \n " << endl;

	     cout << "Please select an option : ";
	     cin >> option;  // taking option value as input and saving in variable "option"

	     if(option == 1) // Checking if user selected option 1
	     {
	 		cout<<"enter length:  "<<endl;
	 		cin>>pl;
	 		cout<<"enter width:  "<<endl;
	 		cin>>pw;
	 		Rectangle newRectangle;
	 	    newRectangle.setLength(pl);
	 	    newRectangle.setWidth(pw);
	 	    cout<<newRectangle.area(pl, pw)<<endl;
	 	    cout<<newRectangle.perimeter(pl, pw)<<endl;
	     }
	     else if(option == 2) // Checking if user selected option 2
	     {
	 		cout<<"enter a side"<<endl;
	 		cin>>side;
	 		Square newSquare;
	 		newSquare.setLength(side);
	 		newSquare.setWidth(side);
	 	    cout<<newSquare.area(side, side)<<endl;
	 	    cout<<newSquare.perimeter(side, side)<<endl;
	     }
	     else if(option == 3) // Checking if user selected option 3
	     {
	    	 cout << "Terminating Program" << endl;
	     }
	     else //if user has entered invalid choice (other than 1,2,3 or 4)
	     {
	    	 cout << "Invalid Option entered" << endl;
	     }
	  }
	  while(option != 3);  //condition of do-while loop

return 0;
}

