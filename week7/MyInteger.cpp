/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: MyInteger.cpp
*********************************************************************/
#include <iostream>
#include "MyInteger.hpp"

using namespace std;

MyInteger::MyInteger(int value)
{
    pInteger = new int();
    setMyInt(value);
}

MyInteger::MyInteger(MyInteger &obj)
{
    pInteger = new int();
    *pInteger = *obj.pInteger;
}
MyInteger::~MyInteger()
{
    delete  pInteger;
}
int MyInteger::getMyInt()
{
    return *pInteger;
}

void MyInteger::setMyInt(int value)
{
    *pInteger = value;
}
int main()
{
    MyInteger obj1(17);
    MyInteger obj2 = obj1;
    std::cout << obj1.getMyInt() << std::endl;
    std::cout << obj2.getMyInt() << std::endl;

    obj2.setMyInt(9);
    std::cout << obj1.getMyInt() << std::endl;
    std::cout << obj2.getMyInt() << std::endl;

    MyInteger obj3(42);
    obj2 = obj3;
    std::cout << obj2.getMyInt() << std::endl;
    std::cout << obj3.getMyInt() << std::endl;

    obj3.setMyInt(1);
    std::cout << obj2.getMyInt() << std::endl;
    std::cout << obj3.getMyInt() << std::endl;
return 0;
}
