/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Patron.hpp
*********************************************************************/

#include <string>
#include "Patron.hpp"

Patron::Patron()
{
    fineAmount=0;
}
Patron:: Patron(std::string idn, std::string n)
{
    idNum=idn;
    name=n;
    fineAmount=0;
}
std::string Patron:: getIdNum()
{
    return idNum;
}
std::string Patron:: getName()
{
    return name;
}
std::vector<LibraryItem*> Patron:: getCheckedOutItems()
{
    return checkedOutItems;
}
void Patron:: addLibraryItem(LibraryItem* b)
{
    checkedOutItems.push_back(b);
}
void Patron:: removeLibraryItem(LibraryItem* b)
{
    int itemIndex=0;
    for(int i=0;i<checkedOutItems.size();i++)
        if(checkedOutItems[i]==b)
            itemIndex=i;
    checkedOutItems.erase(checkedOutItems.begin()+itemIndex);
}
double Patron::  getFineAmount()
{
    return fineAmount;
}
void Patron:: amendFine(double amount)
{
    fineAmount+=amount;
}
