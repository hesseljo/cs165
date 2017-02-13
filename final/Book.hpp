/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: book.hpp
*********************************************************************/
#ifndef Book_h
#define Book_h

#include "LibraryItem.hpp"

class Book : public LibraryItem
{
private:
    std::string author;
public:
    static const int CHECK_OUT_LENGTH = 21;
    virtual int getCheckOutLength(){
        return CHECK_OUT_LENGTH;
    }
    Book():LibraryItem()
    {
    }
    Book(std::string idc, std::string t, std::string a):LibraryItem(idc,t)
    {
        author=a;
    }
    std::string getAuthor();
};

#endif
