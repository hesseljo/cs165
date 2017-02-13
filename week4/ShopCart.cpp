/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: ShopCart.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Item.hpp"
#include "ShopCart.hpp"

using namespace std;

char test;
unsigned int amount;
string name[5];
double price[5];
unsigned int quantity[5];
unsigned int select;


int main()
{
	ShoppingCart x;
	Item y;
	cout<<"\n *****************************************************************************"<<endl;
	cout<<"\n Welcome, please choose from the following menu: "<<endl;
	cout<<"\n To add items press 1: "<<endl;
	cout<<"\n To list items press 2: "<<endl;
	cout<<"\n To display total price press 3: "<<endl;
	cout<<"\n To exit press 4: "<<endl;
	cout<<"\n *****************************************************************************"<<endl;

	cin>> select;
	if(select <= 0)
	{
	cout<<"\n Please enter valid selection "<<endl;
	cout<<"\n To add items press 1: "<<endl;
	cout<<"\n To list items press 2: "<<endl;
	cout<<"\n To display total price press 3: "<<endl;
	cout<<"\n To exit press 4: "<<endl;
	cin>> select;
	};
	if(select > 4)
	{
	cout<<"\n Please enter valid selection "<<endl;
	cout<<"\n To add items press 1: "<<endl;
	cout<<"\n To list items press 2: "<<endl;
	cout<<"\n To display total price press 3: "<<endl;
	cout<<"\n To exit press 4: "<<endl;
	cin>> select;
	};

	if(select == 1)
	{
	cout<<"\n Thanks"<<endl;
	x.addItem();
	};
	if(select == 2)
	{
	cout<<"\n Thanks"<<endl;
	x.listContents();
	};
	if(select==3)
	{
	cout<<"Thanks"<<endl;
	x.totalPrice();
	};
	if(select==4)
	{
	cout<<"Thanks"<<endl;

}
return 0;

}
void ShoppingCart::addItem()
{
	ShoppingCart x;
	name[1],name[2],name[3],name[4],name[5] = "";
	price[1],price[2],price[3],price[4],price[5] = 0.00;
	quantity[1],quantity[2],quantity[3],quantity[4],quantity[5] = 0;
	total = 0.00;
	amount, x.amount = 0;

	cout<<"\n How many Items would you like 1 - 5?"<<endl;
	cin>> amount;
	while(amount < 0 )
	{
		cout<<"Please enter a valid number from 1 - 5 "<<endl;
		cin>> amount;
	};
	while(amount > 5)
	{
		cout<<"Please enter a valid number from 1 - 5 "<<endl;
		cin>> amount;
	}
	x.amount = amount;
	cout<<"\n the amount is: " << amount <<endl;

	cout<<"\n Thanks, Press 'y' then enter to continue"<<endl;
	cin>>test;
	while(test != 'y')
	{
		cout<<"\n Invalid Entry Please try again "<<endl;
		cout<<"\n Press 'y' the enter to continue"<<endl;
		cin>>test;
	}
	if (amount == 1)		// if statement to collect data for only one item
	{
		cout<<"\n Please enter the name of the Item "<<endl;
		cin>>name[1];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[1];

		while(price[1] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[1];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[1];
		while(quantity[1] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[1];
		}
		n[1] = name[1];
		p[1] = price[1];
		q[1] = quantity[1];

		x.listContents();


	};
	/*********************If statement for 2 Items*/
	if (amount == 2)		// if statement to collect data for only one item
	{
		cout<<"\n Please enter the name of the Item "<<endl;
		cin>>name[1];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[1];

		while(price[1] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[1];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[1];
		while(quantity[1] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[1];
		}
		n[1] = name[1];
		p[1] = price[1];
		q[1] = quantity[1];

		cout<<"\n Please enter the name of the 2nd Item "<<endl;
		cin>>name[2];

		cout<<"\n Please enter the price of the 2nd Item "<<endl;
		cin>>price[2];

		while(price[2] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[2];
		}

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[2];
		while(quantity[2] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[2];
		}
		n[2] = name[2];
		p[2] = price[2];
		q[2] = quantity[2];

		x.listContents();
	};
	/***************************If statement for 3 items***************************/
	if (amount == 3)		// if statement to collect data for only one item
	{
		cout<<"\n Please enter the name of the Item "<<endl;
		cin>>name[1];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[1];

		while(price[1] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[1];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[1];
		while(quantity[1] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[1];
		}
		n[1] = name[1];
		p[1] = price[1];
		q[1] = quantity[1];

		cout<<"\n Please enter the name of the 2nd Item "<<endl;
		cin>>name[2];

		cout<<"\n Please enter the price of the 2nd Item "<<endl;
		cin>>price[2];

		while(price[2] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[2];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[2];
		while(quantity[2] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[2];
		}
		n[2] = name[2];
		p[2] = price[2];
		q[2] = quantity[2];

		cout<<"\n Please enter the name of the 3rd Item "<<endl;
		cin>>name[3];

		cout<<"\n Please enter the price of the 3rd Item "<<endl;
		cin>>price[3];

		while(price[3] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[3];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[3];
		while(quantity[3] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[3];
		}
		n[3] = name[3];
		p[3] = price[3];
		q[3] = quantity[3];

		x.listContents();
	//};
	/*************If statement for 4 Items***************/
	if (amount == 4)		// if statement to collect data for only one item
	{
		cout<<"\n Please enter the name of the Item "<<endl;
		cin>>name[1];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[1];

		while(price[1] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[1];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[1];
		while(quantity[1] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[1];
		}
		n[1] = name[1];
		p[1] = price[1];
		q[1] = quantity[1];

		cout<<"\n Please enter the name of the 2nd Item "<<endl;
		cin>>name[2];

		cout<<"\n Please enter the price of the 2nd Item "<<endl;
		cin>>price[2];

		while(price[2] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[2];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[2];
		while(quantity[2] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[2];
		}
		n[2] = name[2];
		p[2] = price[2];
		q[2] = quantity[2];

		cout<<"\n Please enter the name of the 3rd Item "<<endl;
		cin>>name[3];

		cout<<"\n Please enter the price of the 3rd Item "<<endl;
		cin>>price[3];

		while(price[3] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[3];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[3];
		while(quantity[3] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[3];
		}
		n[3] = name[3];
		p[3] = price[3];
		q[3] = quantity[3];
		};
	cout<<"\n Please enter the name of the 4th Item "<<endl;
		cin>>name[4];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[4];

		while(price[4] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[4];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[4];
		while(quantity[4] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[4];
		}
		n[4] = name[4];
		p[4] = price[4];
		q[4] = quantity[4];

		x.listContents();
		};

		/**********************If statement for 5 items******************************/
	if (amount == 5)		// if statement to collect data for only one item
	{
		cout<<"\n Please enter the name of the Item "<<endl;
		cin>>name[1];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[1];

		while(price[1] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[1];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[1];
		while(quantity[1] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[1];
		}
		n[1] = name[1];
		p[1] = price[1];
		q[1] = quantity[1];

		cout<<"\n Please enter the name of the 2nd Item "<<endl;
		cin>>name[2];

		cout<<"\n Please enter the price of the 2nd Item "<<endl;
		cin>>price[2];

		while(price[2] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[2];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[2];
		while(quantity[2] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[2];
		}
		n[2] = name[2];
		p[2] = price[2];
		q[2] = quantity[2];

		cout<<"\n Please enter the name of the 3rd Item "<<endl;
		cin>>name[3];

		cout<<"\n Please enter the price of the 3rd Item "<<endl;
		cin>>price[3];

		while(price[3] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[3];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[3];
		while(quantity[3] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[3];
		}
		n[3] = name[3];
		p[3] = price[3];
		q[3] = quantity[3];

	cout<<"\n Please enter the name of the 4th Item "<<endl;
		cin>>name[4];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[4];

		while(price[4] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[4];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[4];
		while(quantity[4] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[4];

		n[4] = name[4];
		p[4] = price[4];
		q[4] = quantity[4];
		};
		cout<<"\n Please enter the name of the 5th Item "<<endl;
		cin>>name[5];

		cout<<"\n Please enter the price of the Item "<<endl;
		cin>>price[5];

		while(price[5] < 0)
		{
			cout<<"\n Please enter a valid dollar amount ex. 1.00 "<<endl;
			cin>>price[5];
		};

		cout<<"\n Please enter the quantity for this Item "<<endl;
		cin>>quantity[5];
		while(quantity[5] < 0)
		{
			cout<<"\n Please enter a quantity of 0 or more " <<endl;
			cin>>price[5];

		n[5] = name[5];
		p[5] = price[5];
		q[5] = quantity[5];

		};
		x.listContents();
		}

	cout<<" Thanks"<<endl;



}	// end of addItem

void ShoppingCart::listContents()
{
	ShoppingCart x;
	amount = x.amount;
	cout<<"\n Your item(s) are/is " <<endl;
	cout<<"\n Item #1: "<<endl;
	cout<<"\n Name: "<< name[1] <<endl;
	cout<<"\n Price: "<< price[1]<< setprecision(4) << endl;
	cout<<"\n Quantity: "<< quantity[1] <<endl;
	cout<<"\n"<<endl;
	cout<<"\n Your item(s) are/is " <<endl;
	cout<<"\n Item #2: "<<endl;
	cout<<"\n Name: "<< name[2] <<endl;
	cout<<"\n Price: "<< price[2]<< setprecision(4) << endl;
	cout<<"\n Quantity: "<< quantity[2] <<endl;
	cout<<"\n"<<endl;
	cout<<"\n Your item(s) are/is " <<endl;
	cout<<"\n Item #3: "<<endl;
	cout<<"\n Name: "<< name[3] <<endl;
	cout<<"\n Price: "<< price[3]<< setprecision(4) << endl;
	cout<<"\n Quantity: "<< quantity[3] <<endl;
	cout<<"\n"<<endl;
	cout<<"\n Your item(s) are/is " <<endl;
	cout<<"\n Item #4: "<<endl;
	cout<<"\n Name: "<< name[4] <<endl;
	cout<<"\n Price: "<< price[4]<< setprecision(4) << endl;
	cout<<"\n Quantity: "<< quantity[4] <<endl;
	cout<<"\n"<<endl;
	cout<<"\n Your item(s) are/is " <<endl;
	cout<<"\n Item #5: "<<endl;
	cout<<"\n Name: "<< name[5] <<endl;
	cout<<"\n Price: "<< price[5]<< setprecision(4) << endl;
	cout<<"\n Quantity: "<< quantity[5] <<endl;

	x.totalPrice();

}
void ShoppingCart::totalPrice()
{
	total = (p[1] + p[2] + p[3] + p[4] + p[5])* (q[1] + q[2] + q[3] + q[4] + q[5]);	// compute total price

	cout<<"\n"<<endl;
	cout<<"\n Total Price: " <<setprecision(5)<< total <<endl;

	cout<<"\n Press any Key"<<endl;
	cin>>test;
}
void ShoppingCart::exit()
{
	cout<<" Have a nice day "<<endl;
	0;
}



