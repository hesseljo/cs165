PROGS := templateShuffle fraction custProj

all: $(PROGS)


templateShuffle: templateShuffle.cpp
	g++ -g templateShuffle.cpp -o templateShuffle

fraction: Fraction.cpp Fraction.hpp
	g++ -g Fraction.cpp -o fraction

custProj: CustomerProject.o RegularProject.o PreferredProject.o test.o
	g++ -g CustomerProject.o RegularProject.o PreferredProject.o test.o -o custProj

CustomerProject.o: CustomerProject.cpp CustomerProject.hpp
	g++ -c CustomerProject.cpp

RegularProject.o: RegularProject.cpp RegularProject.hpp
	g++ -c RegularProject.cpp

PreferredProject.o: PreferredProject.cpp PreferredProject.hpp
	g++ -c PreferredProject.cpp

test.o: test.cpp
	g++ -c test.cpp


clean:
	rm -f $(PROGS) *.o *~
