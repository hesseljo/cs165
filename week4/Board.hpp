/*********************************************************************
** Author: Joshua Hesseltine
** Date: 30 Jan 2015
** Description: Board.hpp
*********************************************************************/

#ifndef BOARD_HPP_
#define BOARD_HPP_

class Board
{
	public:
		Board(void);
		static const int size = 3;
		char array[3][3];
		enum gameStatus
		{
			x_won,
			o_won,
			draw,
			in_progress
		};
		const static gameStatus defaultGame = in_progress;

		bool makeMove(int x, int y, char whoseturn);
		gameStatus gameState();

		void print();

	private:

		bool isWinner(char player);
		bool isDraw();
};

#endif // BOARD_HPP_
