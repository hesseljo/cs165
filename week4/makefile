
PROGS := caesar shopCart ticTacToe smallSort2 sphere findMode

all: $(PROGS)


smallSort2: smallSort2.cpp
	g++ -g smallSort2.cpp -o smallSort2

sphere: Sphere.o sphereMain.o
	g++ -g Sphere.o sphereMain.o -o sphere

sphereMain.o: sphereMain.cpp
	g++ -c sphereMain.cpp

Sphere.o: Sphere.cpp Sphere.hpp
	g++ -c Sphere.cpp

findMode: findMode.cpp
	g++ -g findMode.cpp -o findMode

caesar: caesar.cpp
	g++ -g caesar.cpp -o caesar

shopCart: Item.o ShopCart.o
	g++ -g Item.o ShopCart.o -o shopCart

ShopCart.o: ShopCart.cpp ShopCart.hpp
	g++ -c ShopCart.cpp

Item.o: Item.cpp Item.hpp
	g++ -c Item.cpp

ticTacToe: TicTacToe.o Board.o
	g++ -g TicTacToe.o Board.o -o ticTacToe

TicTacToe.o: TicTacToe.cpp TicTacToe.hpp
	g++ -c TicTacToe.cpp

Board.o: Board.cpp Board.hpp
	g++ -c Board.cpp


clean:
	rm -f $(PROGS) *.o *~
