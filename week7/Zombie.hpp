/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: Zombie.hpp
*********************************************************************/

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<vector>

class Zombie
{
    public:
        Zombie(void); // constructor
        ~Zombie(void); // deconstructor
        //variable
        static int counter;
        //methods
        void speak(void);


};
int Zombie::counter = 0;
//constants
const int w1 = 10;
const int w2 = 15;

//variables
std::vector<Zombie *> zombieList;
//methods
int getOption(void);



#endif // ZOMBIE_HPP
