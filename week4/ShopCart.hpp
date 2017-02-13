/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: ShopCart.hpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
//#include "Item.hpp"

using namespace std;

string n[5];
double p[5];
unsigned int q[5];


struct ShoppingCart
{
public:
	void addItem();
	void listContents();
	void totalPrice();
	void exit();
	vector<int> Item;
	unsigned int amount;
	double total;


};
void Item::getItem()
{
	Item x;

	x.name[1] = n[1];
	x.name[2] = n[2];
	x.name[3] = n[3];
	x.name[4] = n[4];
	x.name[5] = n[5];
	x.price[1] = p[1];
	x.price[2] = p[2];
	x.price[3] = p[3];
	x.price[4] = p[4];
	x.price[5] = p[5];
	x.quantity[1] = q[1];
	x.quantity[2] = q[2];
	x.quantity[3] = q[3];
	x.quantity[4] = q[4];
	x.quantity[5] = q[5];
}
