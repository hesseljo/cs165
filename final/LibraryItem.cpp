/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: LibraryItem.cpp
*********************************************************************/

#include <string>
#include "LibraryItem.hpp"
LibraryItem::LibraryItem()
{
}
LibraryItem::LibraryItem(std::string idc, std::string t)
{
    idCode=idc;
    title=t;
    location=ON_SHELF;
    checkedOutBy=NULL;
    requestedBy=NULL;
}
std::string LibraryItem::getIdCode()
{
    return idCode;
}
std::string LibraryItem::getTitle()
{
    return title;
}
Locale LibraryItem::getLocation()
{
    return location;
}
void LibraryItem::setLocation(Locale lo)
{
    location=lo;
}
Patron* LibraryItem::getCheckedOutBy()
{
    return checkedOutBy;
}
void LibraryItem::setCheckedOutBy(Patron* p)
{
    checkedOutBy=p;
}
Patron* LibraryItem::getRequestedBy()
{
    return requestedBy;
}
void LibraryItem::setRequestedBy(Patron* p)
{
    requestedBy=p;
}
int LibraryItem::getDateCheckedOut()
{
    return dateCheckedOut;
}
void LibraryItem::setDateCheckedOut(int d)
{
    dateCheckedOut=d;
}
