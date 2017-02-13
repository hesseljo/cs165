/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: TicTacToe.hpp
*********************************************************************/

#ifndef TICTACTOE_HPP//deleted underscore
#define TICTACTOE_HPP//deleted underscore

#include "Board.hpp"

class TicTacToe
{
	public:
		TicTacToe(char whoIsFirst); // constructor

		void play();

	private:
		Board board;
		char whoseturn;


		void validate(int& x, int& y, Board& board);
		void declareResult(Board::gameStatus currentStatus);
		void switchPlayer(char& whoseturn);
};

#endif // TICTACTOE_HPP_INCLUDED
