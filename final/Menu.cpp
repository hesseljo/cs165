/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Mar 2015
** Description: Menu.cpp
*********************************************************************/

#include <string>
#include <iostream>
#include <cstdlib>
#include "Library.hpp"
#include "LibraryItem.hpp"
#include "Book.hpp"
#include "Album.hpp"
#include "Movie.hpp"
#include "Patron.hpp"
using namespace std;

int main()
{
    Library library;
    cout<<"Welcome to library"<<endl;
    int quit=false;
    while(!quit)
    {
        cout<<"Main Menu"<<endl;
        cout<<"#1: To add Book  "<<endl;
        cout<<"#2: To add Movie  "<<endl;
        cout<<"#3: To add Album  "<<endl;
        cout<<"#4: To add Member  "<<endl;
        cout<<"#5: To check out Library item   "<<endl;
        cout<<"#6: To return LibraryItem  "<<endl;
        cout<<"#7: To request LibraryItem  "<<endl;
        cout<<"#8: To incrementCurrentDate  "<<endl;
        cout<<"#9: To pay fine  "<<endl;
        cout<<"#10: To view Patron info "<<endl;
        cout<<"#11: To view Item info "<<endl;
        cout<<"#12: To quit program "<<endl;
        cout<<"Enter option : ";
        int option;
        string patronId,bookId;
        string temp;
        getline(cin,temp);
        option=atoi(temp.c_str());
        string idCode,title,author,idNum,name,itemId,artist,diretor;
        Book *book;
        Movie *movie;
        Album *album;
        Patron *patron;
        switch(option)
        {
            case 1:
                cout<<"Enter new book info"<<endl;
                cout<<"Enter idCode : ";
                getline(cin,idCode);
                cout<<"Enter title : ";
                getline(cin,title);
                cout<<"Enter author : ";
                getline(cin,author);
                book=new Book(idCode,title,author);
                library.addLibraryItem(book);
                break;
            case 2:
                cout<<"Enter new movie info"<<endl;
                cout<<"Enter idCode : ";
                getline(cin,idCode);
                cout<<"Enter title : ";
                getline(cin,title);
                cout<<"Enter director : ";
                getline(cin,diretor);
                movie=new Movie(idCode,title,diretor);
                library.addLibraryItem(movie);
                break;

            case 3:
                cout<<"Enter new album info"<<endl;
                cout<<"Enter idCode : ";
                getline(cin,idCode);
                cout<<"Enter title : ";
                getline(cin,title);
                cout<<"Enter artist : ";
                getline(cin,artist);
                album=new Album(idCode,title,artist);
                library.addLibraryItem(album);
                break;
            case 4:

                cout<<"Enter new Patron info"<<endl;
                cout<<"Enter idNum : ";
                getline(cin,idNum);
                cout<<"Enter name : ";
                getline(cin,name);
                patron=new Patron(idNum,name);
                library.addMember(patron);
                break;
            case 5:
                cout<<"Enter patronId :";
                getline(cin,patronId);
                cout<<"Enter itemId :";
                getline(cin,itemId);
                library.checkOutLibraryItem(patronId,itemId);
                break;
            case 6:
                cout<<"Enter itemId :";
                getline(cin,itemId);
                library.returnLibraryItem(itemId);
                break;
            case 7:
                cout<<"Enter patronId :";
                getline(cin,patronId);
                cout<<"Enter itemId :";
                getline(cin,itemId);
                library.requestLibraryItem(patronId,itemId);
                break;
            case 8:
                library.incrementCurrentDate();
                break;
            case 9:
                cout<<"Enter patronId :";
                getline(cin,patronId);
                double payment;
                cout<<"Enter payment amount :";
                getline(cin,temp);
                payment=atof(temp.c_str());
                library.payFine(patronId,payment);
                break;
            case 10:
                cout<<"Enter patronId :";
                getline(cin,patronId);
                library.viewPatronInfo(patronId);
                break;
            case 11:
                cout<<"Enter itemId :";
                getline(cin,itemId);
                library.viewItemInfo(itemId);
                break;
            case 12:
                quit=true;
                break;
        }
    }
    cout<<"GoodBye !"<<endl;
}
