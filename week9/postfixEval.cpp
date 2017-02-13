/*********************************************************************
** Author: Joshua Hesseltine
** Date: 08 Mar 2015
** Description: postfixEval.cpp
*********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

using namespace std;

const int MAX = 50 ;

class postfix
{
	private :
		int stack[MAX];
		int top, res;
		char *s;
	public:
		postfix();
		void setstack(char *str);
		void push (int item);
		int pop();
		void evaluate();
};

postfix :: postfix( )
{
	top = -1 ;
}
void postfix::setstack (char *str)
{
	s = str;
}

void postfix :: push ( int item )
{
	if ( top == MAX - 1 )
		cout << endl << "Stack is full" ;
	else
	{
		top++ ;
		stack[top] = item ;
	}
}

int postfix::pop()
{
	if (top == -1)
	{
	}
	int data = stack[top] ;
	top--;
	return data;
}

void postfix::evaluate()
{
	int input1;
	int input2;
	int input3;
	while (*s)
	{
		if (*s == ' '||*s == '\t')
		{
			s++;
			continue;
		}
		if (isdigit(*s))
		{
			res = *s - '0';
			push(res);
		}
		else
		{
			input1 = pop();
			input2 = pop();
			switch (*s)
			{
				case '+':
					input3 = input2 + input1;
					break;
				case '-':
					input3 = input2 - input1;
					break;
				case '/':
					input3 = input2 / input1;
					break;
				case '*':
					input3 = input2 * input1;
					break;
				default:
					cout << "operator not recognized try again";
			}
			push (input3);
		}
		s++;
	}

	res = pop();
	cout << "result is: " << res;
}

int main( )
{

	char stack[MAX];
	cout << "please enter a postfix expression: ";
	cin.getline (stack, MAX);
	postfix q;
	q.setstack (stack);
	q.evaluate();

	return 0;
}


