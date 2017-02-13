/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Library.hpp
*********************************************************************/

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>

class Patron;
class LibraryItem;

class Library
{
private:
    std::vector<LibraryItem*> holdings;
    std::vector<Patron*> members;
    bool isLibraryIdused(std::string libraryID);
    bool isMemberIdused(std::string patronID);
    int currentDate;
public:
    Library();
    void addLibraryItem(LibraryItem*);
    void addMember(Patron*);
    void checkOutLibraryItem(std::string patronID, std::string ItemID);
    void returnLibraryItem(std::string ItemID);
    void requestLibraryItem(std::string patronID, std::string ItemID);
    void incrementCurrentDate();
    void payFine(std::string patronID, double payment);
    void viewPatronInfo(std::string patronID);
    void viewItemInfo(std::string ItemID);
};

#endif
