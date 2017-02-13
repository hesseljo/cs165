/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: MyInteger.hpp
*********************************************************************/
#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger
{
	private:
    //variables
    int *pInteger;

    public:
    MyInteger(int);
    ~MyInteger(void);
    MyInteger(MyInteger &);
    //methods
    int getMyInt();
    void setMyInt(int);
};

#endif // MYINTEGER_HPP
