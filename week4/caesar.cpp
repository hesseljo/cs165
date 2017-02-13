/*********************************************************************
** Author: Joshua Hesseltine
** Date: 01 Feb 2015
** Description: caesar.cpp
*********************************************************************/

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <string.h>

using namespace std;

//void encipher (string, int);

int main ()

{

	string input;
	int offset;

	cout <<"hey user input a string: \n";
	cout << "and a number to offset: \n";
	cin >> input >> offset;

	//converted C++ string to c-style string
//	encipher(input.c_str(), offset);
return 0;


}


//std::string: c_str () return a const char*   void encipher (string input, int offset)

//{
	//convert cpp string to c-style string
	//char alphabet [25] = {'a''b''c''d''e''f''g''h''i''j''k''l''m''n''o''p''q''r''s''t''u''v''w''x''y''z'}

	//char newInput(input[offset]);

//}


