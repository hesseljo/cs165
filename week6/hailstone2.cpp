/*********************************************************************
** Author: Joshua Hesseltine
** Date: 15 Feb 2015
** Description: hailstone2.cpp
*********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
//function prototypes
int calculateSteps (int input);
int recursivelycalculateSteps(int input);

int main()
{
    int input;
    int res;
    int res2;

    cout<<"Enter a digit" <<endl;
    cin>>input;


    // original method call
    res = calculateSteps(input);

    cout<<"looped:   " << res<<endl;

    //recursive method call
    res2 = recursivelycalculateSteps(input);

    cout<<"recursive:  " << res2<<endl;


    return 0;

}

/*********************************************************************
 ** Description: hailstone calculation from week 2
 ** Parameters: input from user
 *********************************************************************/
int calculateSteps (int input) {

    int count = 0;

    while(input > 1)
    {
        if(input % 2 == 0)
        {
            input /= 2;
            count++;
        }
        else
        {
            input = 3 * input + 1;
            count++;
        }
    }
    return count;
}

/*********************************************************************
 ** Description: hailstone calculation using recursion
 ** Parameters: input from user
 *********************************************************************/
int recursivelycalculateSteps (int input )
{
	int s = input;
	if (s == 1) //base case
	{
		return 0;
	}
	else if (s % 2 == 0)
	{
		return 1 + recursivelycalculateSteps(s/2);
	}
	else
	{
		return 1 + recursivelycalculateSteps(3*s + 1);
	}
}



