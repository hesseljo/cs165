/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: Board.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#include "Board.hpp"

using namespace std;


Board::Board(){

	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			array[i][k] = '.';
		}
	}
}

bool Board::makeMove(int x, int y, char whoseturn)
{

	if (array[x][y] != '.')
		return false;

	array[x][y] = whoseturn;
	print();

	return true;
}


Board::gameStatus Board::gameState()
{
	if (isWinner('X'))
		return x_won;
	if (isWinner('O'))
		return o_won;
	if (isDraw())
		return draw;

	return in_progress;
}

bool Board::isWinner(char player)
{

	for (int i = 0; i < size; i++)
	{
		if (array[i][0] == player && array[i][1] == player && array[i][2] == player)
			return true;
	}

	for (int i = 0; i < size; i++)
	{
		if (array[0][i] == player && array[1][i] == player && array[2][i] == player)
			return true;
	}

	if (array[0][0] == player && array[1][1] == player && array[2][2] == player)
		return true;
	if (array[0][3] == player && array[1][1] == player && array[2][0] == player)
		return true;

	return false;
}

bool Board::isDraw()
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j ++)
		{
			if (array[i][j] == '.')
				count++;
			if (count > 1)
				return false;
		}
	}
	if (count < 2)
		return true;
}

void Board::print()
{
	cout << "  0 1 2" << endl;
	cout << "0 " << array[0][0] << " " << array[0][1] << " " << array[0][2] << endl;
	cout << "1 " << array[1][0] << " " << array[1][1] << " " << array[1][2] << endl;
	cout << "2 " << array[2][0] << " " << array[2][1] << " " << array[2][2] << endl;
}
