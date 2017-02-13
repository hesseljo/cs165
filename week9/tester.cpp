#include "DoubleList.hpp"
#include <iostream>
using namespace std;
int main()
{
    DoubleList double_list;

    double_list.add(1.3);
    double_list.add(2.1);
    double_list.add(5.00);

    //
    cout << double_list.isMember(10) <<endl;//should print 0
    cout << double_list.isMember(3) <<endl;//should print 0
    cout << double_list.isMember(1.3) <<endl;//should print 1
    cout << double_list.isMember(5.0) <<endl;//should print 1

    double_list.recPrint();

    //copy constructor will be used
    DoubleList second_list = double_list;

    second_list.recPrint();
    second_list.add(10);
    second_list.add(11);

    second_list.recPrint();

    //now testing is member

    cout << second_list.isMember(10) <<endl;//should print 1
    cout << second_list.isMember(3) <<endl;//should print 0
    cout << second_list.isMember(2.1) <<endl;//should print 1
    cout << second_list.isMember(5) <<endl;//should print 1


    //now testing swapNode()

    cout << "node_swap on 2nd list" << endl;
    second_list.recPrint();
    second_list.nodeSwap(1,2);
    second_list.recPrint();
    //
    second_list.nodeSwap(0,4);
    second_list.recPrint();
}
