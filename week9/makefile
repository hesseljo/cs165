PROGS := list pfEval

all: $(PROGS)

list: DoubleList.o tester.o
	g++ -g DoubleList.o tester.o -o list

DoubleList.o: DoubleList.cpp DoubleList.hpp
	g++ -c DoubleList.cpp

tester.o: tester.cpp
	g++ -c tester.cpp

pfEval: postfixEval.cpp
	g++ -g postfixEval.cpp -o pfEval


clean:
	rm -f $(PROGS) *.o *~
