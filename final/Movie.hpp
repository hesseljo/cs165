/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Movie.hpp
*********************************************************************/
#ifndef Movie_h
#define Movie_h

#include "LibraryItem.hpp"

class Movie : public LibraryItem
{
private:
    std::string director;
public:
    static const int CHECK_OUT_LENGTH = 7;
    virtual int getCheckOutLength(){
        return CHECK_OUT_LENGTH;
    }
    Movie():LibraryItem()
    {
    }
    Movie(std::string idc, std::string t, std::string d):LibraryItem(idc,t)
    {
        director=d;
    }
    std::string getDirector();
};

#endif
