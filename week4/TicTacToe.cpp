/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: TicTacToe.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#include "TicTacToe.hpp"
#include "Board.hpp"
//#include "Board.cpp"

using namespace std;



TicTacToe::TicTacToe(char whoIsFirst)
{
	whoseturn = whoIsFirst;
	cout << whoIsFirst << " is first" << endl;
	play();
}

void TicTacToe::play()
{

	board = Board();
	Board::gameStatus currentStatus = Board::defaultGame; //in_progress;
	int x,y;

	while (currentStatus == Board::defaultGame)
	{
		cout << "Player " << whoseturn << ": Please enter your move." << endl;
		cin >> x >> y;
		validate(x, y, board);
		bool moved = board.makeMove(x, y, whoseturn);
		if (moved)
        {
            currentStatus = board.gameState();
            switchPlayer(whoseturn);
        }

	}
	declareResult(currentStatus);

}

void TicTacToe::validate(int& x, int& y, Board& board)
{
	while (true)
	{
		if (board.array[x][y] == '.')
		return; // all good

		cout << "That square is already taken. enter again!" << endl;
		cin >> x >> y;
	}

}

void TicTacToe::declareResult(Board::gameStatus currentStatus)
{
	switch (currentStatus)
	{
	case Board::x_won:
		cout << "X is the winner" << endl;
		break;
	case Board::o_won:
		cout << "O is the winner" << endl;
		break;
	case Board::draw:
		cout << "Game is a draw" << endl;
		break;
	case Board::in_progress:
		break;
	default:
		break;
	}
}

void TicTacToe::switchPlayer(char& whoseturn)
{
	if (whoseturn == 'O')
	{
		whoseturn = 'X';
		return;
	}
	if (whoseturn == 'X')
		whoseturn = 'O';
}

int main()
{
	char whoIsfirst;
	cout << "Welcome to Tic tac Toe game" << endl;
	cout << "Who will go first? Enter 'X' or 'O'" << endl;
	cin >> whoIsfirst;
	whoIsfirst = toupper(whoIsfirst);
	TicTacToe ttt = TicTacToe(whoIsfirst);
return 0;
}
