/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Library.cpp
*********************************************************************/

#include <string>
#include <iostream>
#include "LibraryItem.hpp"
#include "Patron.hpp"
#include "Library.hpp"
#include "Book.hpp"
#include "Album.hpp"
#include "Movie.hpp"
using namespace std;
template <class DstType, class SrcType>
bool IsType(const SrcType* src)
{
  return dynamic_cast<const DstType*>(src) != 0;
}
Library:: Library()
{
    currentDate=0;
    holdings.reserve(100);
    members.reserve(100);
}
bool Library::isLibraryIdused(std::string libraryID)
{
    for(int i=0;i<holdings.size();i++)
        if(holdings[i]->getIdCode()==libraryID)
            return true;
    return false;
}
void Library:: addLibraryItem(LibraryItem *item)
{


    if(!isLibraryIdused(item->getIdCode()))
    {
        holdings.push_back(item);
    }
    else
        cout<<"LibraryItem "<<item->getIdCode()<< " is already in use"<<endl;


}
bool Library::isMemberIdused(std::string patronID)
{
    for(int i=0;i<members.size();i++)
        if(members[i]->getIdNum()==patronID)
            return true;
    return false;
}
void Library:: addMember(Patron *p)
{

    if(!isMemberIdused(p->getIdNum()))
    {
        members.push_back(p);
    }
    else
        cout<<"Member "<<p->getIdNum()<< " is already in use"<<endl;

}
void Library:: checkOutLibraryItem(std::string patronID, std::string libraryItemID)
{
    int memberIndex=-1;
    int LibraryItemIndex=-1;
    for(int i=0;i<members.size();i++)
    {
        if(members[i]->getIdNum()==patronID)
            memberIndex=i;
    }
    if(memberIndex==-1)
    {
        cout<<"Patron with given ID " << patronID <<" not a member"<<endl;
        return;
    }

    for(int i=0;i<holdings.size();i++)
    {
        if(holdings[i]->getIdCode()==libraryItemID)
            LibraryItemIndex=i;
    }

    if(LibraryItemIndex==-1)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" not in library"<<endl;
        return;
    }
    if(holdings[LibraryItemIndex]->getCheckedOutBy()!=NULL)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" already checked out by another patron"<<endl;
        return;
    }

    if(holdings[LibraryItemIndex]->getRequestedBy()!=NULL && holdings[LibraryItemIndex]->getRequestedBy()!=members[memberIndex])
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" already on hold by another patron"<<endl;
        return;
    }

    holdings[LibraryItemIndex]->setCheckedOutBy(members[memberIndex]);
    holdings[LibraryItemIndex]->setLocation(CHECKED_OUT);
    holdings[LibraryItemIndex]->setDateCheckedOut(currentDate);
    holdings[LibraryItemIndex]->setRequestedBy(NULL);
    members[memberIndex]->addLibraryItem(holdings[LibraryItemIndex]);
    cout<<"LibraryItem "<< holdings[LibraryItemIndex]->getTitle() << " has been checked out to "<< members[memberIndex]->getName()<<endl;

}
void Library:: returnLibraryItem(std::string libraryItemID)
{

    int LibraryItemIndex=-1;
    for(int i=0;i<holdings.size();i++)
    {
        if(holdings[i]->getIdCode()==libraryItemID)
            LibraryItemIndex=i;
    }

    if(LibraryItemIndex==-1)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" not in library"<<endl;
        return;
    }

    if(holdings[LibraryItemIndex]->getCheckedOutBy()==NULL)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" is not checkout out"<<endl;
    }
    holdings[LibraryItemIndex]->setLocation(ON_SHELF);
    Patron *p=holdings[LibraryItemIndex]->getCheckedOutBy();
    holdings[LibraryItemIndex]->setCheckedOutBy(NULL);
    if(holdings[LibraryItemIndex]->getRequestedBy()!=NULL && holdings[LibraryItemIndex]->getRequestedBy()!=p)
        holdings[LibraryItemIndex]->setLocation(ON_HOLD_SHELF);
    else
        holdings[LibraryItemIndex]->setRequestedBy(NULL);

    p->removeLibraryItem(holdings[LibraryItemIndex]);
    cout<<"LibraryItem "<< holdings[LibraryItemIndex]->getTitle() << " has been returned " << endl;
}
void Library:: requestLibraryItem(std::string patronID, std::string libraryItemID)
{

    int memberIndex=-1;
    int LibraryItemIndex=-1;
    for(int i=0;i<members.size();i++)
    {
        if(members[i]->getIdNum()==patronID)
            memberIndex=i;
    }
    if(memberIndex==-1)
    {
        cout<<"Patron with given ID " << patronID <<" not a member"<<endl;
        return;
    }

    for(int i=0;i<holdings.size();i++)
    {
        if(holdings[i]->getIdCode()==libraryItemID)
            LibraryItemIndex=i;
    }

    if(LibraryItemIndex==-1)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" not in library"<<endl;
        return;
    }
    if(holdings[LibraryItemIndex]->getRequestedBy()!=NULL)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" already requested "<<endl;
        return;
    }
    if(holdings[LibraryItemIndex]->getLocation()==ON_SHELF)
        holdings[LibraryItemIndex]->setLocation(ON_HOLD_SHELF);
    holdings[LibraryItemIndex]->setRequestedBy(members[memberIndex]);
    cout<<"LibraryItem "<< holdings[LibraryItemIndex]->getTitle() << " is requested by " <<  members[memberIndex]->getName() << endl;

}
void Library:: incrementCurrentDate()
{
    currentDate++;
    for(int i=0;i<members.size();i++)
    {
        vector<LibraryItem*> items=members[i]->getCheckedOutItems();
        for(int j=0;j<items.size();j++)
        {
            int over_days=currentDate-items[j]->getDateCheckedOut()-items[j]->getCheckOutLength();
            if(over_days>0)
                members[i]->amendFine(0.1);
        }
    }
}
void Library:: payFine(std::string patronID, double payment)
{
    int memberIndex=-1;
    for(int i=0;i<members.size();i++)
    {
        if(members[i]->getIdNum()==patronID)
            memberIndex=i;
    }
    if(memberIndex==-1)
    {
        cout<<"Patron with given ID " << patronID <<" not a member"<<endl;
        return;
    }
    members[memberIndex]->amendFine(-payment);
    cout<<"fines for patron with ID " << patronID <<" is now " << members[memberIndex]->getFineAmount()<<endl;

}
void Library:: viewPatronInfo(std::string patronID)
{
    int memberIndex=-1;
    for(int i=0;i<members.size();i++)
    {
        if(members[i]->getIdNum()==patronID)
            memberIndex=i;
    }
    if(memberIndex==-1)
    {
        cout<<"Patron with given ID " << patronID <<" not a member"<<endl;
        return;
    }
    cout<<"Patron with given ID " << patronID <<" is "<< members[memberIndex]->getName() << endl;
    vector<LibraryItem*> items=members[memberIndex]->getCheckedOutItems();
    if(items.size())
    {
        cout<<"Current Checkout items :"<<endl;
        for(int i=0;i<items.size();i++)
        {
            cout<<"LibraryItem with ID "<<items[i]->getIdCode()<<" and title "<<items[i]->getTitle()<<endl;
        }
    }
    cout<<"Total fines "<< members[memberIndex]->getFineAmount() << endl;

}
void Library:: viewItemInfo(std::string libraryItemID)
{

    int LibraryItemIndex=-1;
    for(int i=0;i<holdings.size();i++)
    {
        if(holdings[i]->getIdCode()==libraryItemID)
            LibraryItemIndex=i;
    }

    if(LibraryItemIndex==-1)
    {
        cout<<"LibraryItem with given ID " << libraryItemID <<" not in library"<<endl;
        return;
    }
    string type = "LibraryItem";

    if(IsType<Book,LibraryItem>(holdings[LibraryItemIndex]))
    {
        type = "Book";
        Book *book=dynamic_cast<Book*>(holdings[LibraryItemIndex]);
        cout<<"Book with ID "<< libraryItemID << " has title "<< holdings[LibraryItemIndex]->getTitle() << " and author " << book->getAuthor()<<endl;
    }
    if(IsType<Movie,LibraryItem>(holdings[LibraryItemIndex]))
    {
        type = "Movie";
        Movie *movie=dynamic_cast<Movie*>(holdings[LibraryItemIndex]);
        cout<<"Movie with ID "<< libraryItemID << " has title "<< holdings[LibraryItemIndex]->getTitle() << " and director " << movie->getDirector()<<endl;
    }

    if(IsType<Album,LibraryItem>(holdings[LibraryItemIndex]))
    {
        type = "Album";
        Album *album=dynamic_cast<Album*>(holdings[LibraryItemIndex]);
        cout<<"Album with ID "<< libraryItemID << " has title "<< holdings[LibraryItemIndex]->getTitle() << " and artist " << album->getArtist()<<endl;
    }
    LibraryItem *item=holdings[LibraryItemIndex];
    if(item->getLocation()==ON_HOLD_SHELF)
        cout<<type<<" is on hold"<<endl;
    else if(item->getLocation()==ON_SHELF)
        cout<<type<<" is on shelf"<<endl;
    else if(item->getLocation()==CHECKED_OUT)
        cout<<type<<" is checked out"<<endl;

    if(item->getRequestedBy()!=NULL)
    {
        cout<<type<<" is requested by "<< item->getRequestedBy()->getName() << endl;
    }
    if(item->getCheckedOutBy()!=NULL)
    {
        cout<<type<<" is checked out by "<< item->getCheckedOutBy()->getName() << " with due date "<< (item->getDateCheckedOut()+item->getCheckOutLength()) << endl;
    }
}

