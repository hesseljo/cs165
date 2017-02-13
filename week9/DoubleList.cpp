/*********************************************************************
** Author: Joshua Hesseltine
** Date: 08 Mar 2015
** Description: DoubleList.cpp
*********************************************************************/
#include "DoubleList.hpp"
#include <iostream>
using namespace std;

DoubleList:: DoubleList()
{
    head=NULL;
    size=0;
}
DoubleList:: ~DoubleList()
{
    while(size>0)
        pop();
}
DoubleList::DoubleList(DoubleList &source) // Copy Constructor
{

    head=NULL;
    size=0;
    add_recursive(source.head);
}
void DoubleList::add_recursive(ListNode *curr)
{
    if(curr==NULL)
        return;

    add_recursive(curr->next);
    add(curr->data);
}
void DoubleList::add(double val)
{

    ListNode* new_node=new ListNode(val,NULL);
    if(head==NULL)
        head=new_node;
    else
    {
        new_node->next=head;
        head=new_node;
    }
    size++;
}
bool DoubleList::isMember(double val)
{

    ListNode *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==val)
            return true;
        curr=curr->next;
    }
    return false;
}
void DoubleList::pop()
{
    if(size==0)
        return;
    if(size==1)
    {
        size=0;
        delete head;
        head=NULL;
    }
    else
    {
        ListNode *del_node=head;
        head=head->next;
        delete del_node;
        size--;
    }

}
void DoubleList::recPrint()
{
    cout<< "List is : ";
    recPrint(head);
}
void DoubleList::recPrint(ListNode *curr)
{
    if(curr==NULL)
        return;
    if(curr->next!=NULL)
        cout << curr->data << " --> ";
    else
        cout << curr->data << endl;
    recPrint(curr->next);
}
void DoubleList:: nodeSwap(ListNode *p,ListNode *q)
{
    ListNode *t1, *t2, *t3;
    if (p != q) {
        t1 = p->next; t2 = q->next; t3 = q->next->next;
        p->next = q->next;
        q->next = t1;
        t2->next = t1->next;
        t1->next = t3;
    }
}
void DoubleList::nodeSwap(int first,int second)
{
    if(first>second)
        swap(first,second);

    if(first==second) return;

    if(first==0)
    {
        ListNode* secondNodePrev=head;
        while(second-->1)
            secondNodePrev=secondNodePrev->next;
        ListNode *t1 = head;
        ListNode *t2=secondNodePrev->next;
        ListNode *t3=secondNodePrev->next->next;
        head=secondNodePrev->next;
        secondNodePrev->next=t1;
        t2->next=t1->next;
        t1->next=t3;
    }
    else
    {
        ListNode* firstNodePrev=head;
        while(first-->1)
            firstNodePrev=firstNodePrev->next;

        ListNode* secondNodePrev=head;
        while(second-->1)
            secondNodePrev=secondNodePrev->next;

        nodeSwap(firstNodePrev,secondNodePrev);
    }
}

