/*********************************************************************
** Author: Joshua Hesseltine
** Date: 08 Mar 2015
** Description: DoubleList.hpp
*********************************************************************/
#ifndef LINKED_LIST
#define LINKED_LIST
class DoubleList
{
    private:
        // List node class definition
        class ListNode
        {
            public:
                double data;
                ListNode *next; // Link to the next node
                // Node Constructor Functions
                ListNode(){}
                ListNode(double theData,ListNode *theNext = 0)
                    : data(theData), next((ListNode *)theNext) { }
        };
    public:
        // Constructor
        DoubleList();
        DoubleList(DoubleList &source); // Copy Constructor

        ~DoubleList();

        void add(double val);
        void pop();

        bool isMember(double val);

        void nodeSwap(int first,int second);
        void recPrint();
        unsigned size; // number of nodes in the list
        ListNode *head;
    private:
        void recPrint(ListNode *curr);
        void add_recursive(ListNode *curr);
        void nodeSwap(ListNode *p,ListNode *q) ;
};
#endif
