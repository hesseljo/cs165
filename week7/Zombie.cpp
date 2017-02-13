/*********************************************************************
** Author: Joshua Hesseltine
** Date: 22 Feb 2015
** Description: Zombie.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

using namespace std;

Zombie::Zombie(void)
{
    counter++;
}

Zombie::~Zombie(void)
{
    counter--;
}

void Zombie::speak(void)
{
    cout <<  "Braaaainss!" << endl;
}
int main()
{

    int option = -1;
    while (option == -1)
    {
        option = getOption();
        switch (option)
		{
			case 1: zombieList.push_back(new Zombie());
				option = -1;
				break;
			case 2: delete zombieList.back();
                zombieList.pop_back();
				option = -1;
				break;
			case 3: cout<<(zombieList.at(0))->counter << endl;
				option = -1;
				break;
			case 4: for(std::vector<Zombie *>::iterator iter = zombieList.begin();
                iter != zombieList.end(); ++iter)
                {
                    (*iter)->speak();

                }
				option = -1;
				break;
			case 5: return 0; //exit

			default:
				break;
		}
    }
    return 0;
}

/*********************************************************************
 ** Description: Function to return input options entered by user
 ** Parameters: none, int returned from 1 to 6 corresponding to A,B,C,D,E options
 *********************************************************************/
int getOption()
{
	cout << setw(w1 + w2) << right << "Please select your option by entering appropriate number" << endl << endl;
	cout << setw(w1) << left << "OPTIONS";
	cout << setw(w2) << "Description" << endl << endl;

	cout << setw(w1) << "    A";
	cout << setw(w2) << "Create a new Zombie" << endl;

	cout << setw(w1) << "    B";
	cout << setw(w2) << "Destroy a Zombie" << endl;

	cout << setw(w1) << "    C";
	cout << setw(w2) << "Print the number of existing Zombies" << endl;

	cout << setw(w1) << "    D";
	cout << setw(w2) << "Tell all existing Zombies to speak" << endl;

	cout << setw(w1) << "    E";
	cout << setw(w2) << "Quit" << endl;
	//get input
	string option;
	cin >> option;
	if (option == "A" | option == "a")
		return 1;
	if (option == "B" | option == "b")
		return 2;
	if (option == "C" | option == "c")
		return 3;
	if (option == "D" | option == "d")
		return 4;
	if (option == "E" | option == "e")
		return 5;
	return -1;
}
