/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Album.hpp
*********************************************************************/
#ifndef Album_h
#define Album_h

#include "LibraryItem.hpp"

class Album : public LibraryItem
{
private:
    std::string artist;
public:
    static const int CHECK_OUT_LENGTH = 14;
    virtual int getCheckOutLength(){
        return CHECK_OUT_LENGTH;
    }
    Album():LibraryItem()
    {
    }
    Album(std::string idc, std::string t, std::string a):LibraryItem(idc,t)
    {
        artist=a;
    }
    std::string getArtist();
};

#endif
