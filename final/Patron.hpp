/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Patron.hpp
*********************************************************************/

#ifndef PATRON_HPP
#define PATRON_HPP

#include <string>
#include <vector>

class LibraryItem;

class Patron
{
private:
    std::string idNum;
    std::string name;
    std::vector<LibraryItem*> checkedOutItems;
    double fineAmount;
public:
    Patron();
    Patron(std::string idn, std::string n);
    std::string getIdNum();
    std::string getName();
    std::vector<LibraryItem*> getCheckedOutItems();
    void addLibraryItem(LibraryItem* b);
    void removeLibraryItem(LibraryItem* b);
    double getFineAmount();
    void amendFine(double amount);
};

#endif
