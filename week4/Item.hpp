/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: Item.hpp
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Item
{
public:
	//void listContents();
    void getItem();

private:
	string name[5];
	double price[5];
	unsigned int quantity[5];
	unsigned int amount;
};

/*Item::Item()
{
	name = "";
	price = 0.0;
	quantity = 0;
}*/
