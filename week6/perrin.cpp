/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Feb 2015
** Description: perrin.cpp
*********************************************************************/

#include <iostream>

using namespace std;

/*********************************************************************
 ** Description: Recursively returns the nth term of the Perrin sequence
 ** Parameters: int counter and 3 intgers for sequence arthimetic
 *********************************************************************/
int perrinSeq (int counter, int nMinus1, int nMinus2, int nMinus3)
{
    cout << "x" << endl;
    if (counter == 1)  // base case
        return nMinus3;
    if (counter == 2)  // base case
        return nMinus2;
    if (counter == 3)  // base case
        return nMinus1;
    return perrinSeq(counter - 1, nMinus2 + nMinus3, nMinus1, nMinus2);  // recursive case
}
/*********************************************************************
 ** Description: Function call to user input and base numbers
 ** Parameters: User input integer
 *********************************************************************/
int perrinSeq (int term)
{
    return perrinSeq(term, 2, 0, 3);
}

int main()
{
    cout << "enter an integer followed by enter" << endl;
    int term;
    cin >> term;
    std::cout << std::endl << perrinSeq(term) << std::endl;
}
