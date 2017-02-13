PROGS := rectSquare zombies myInteger

all: $(PROGS)


rectSquare: Rectangle.o Square.o
	g++ -g Rectangle.o Square.o -o rectSquare

Rectangle.o: Rectangle.cpp
	g++ -c Rectangle.cpp

Square.o: Square.cpp
	g++ -c Square.cpp

zombies: Zombie.cpp Zombie.hpp
	g++ -g Zombie.cpp -o zombies

myInteger: MyInteger.cpp MyInteger.hpp
	g++ -g MyInteger.cpp -o myInteger


clean:
	rm -f $(PROGS) *.o *~