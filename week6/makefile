
PROGS := revPrint recSum hailstone2 perrin convert

all: $(PROGS)


revPrint: revPrint.cpp
	g++ -g revPrint.cpp -o revPrint

recSum: recSum.cpp
	g++ -g recSum.cpp -o recSum

hailstone2: hailstone2.cpp
	g++ -g hailstone2.cpp -o hailstone2

perrin: perrin.cpp
	g++ -g perrin.cpp -o perrin

convert: convert.cpp
	g++ -g convert.cpp -o convert


clean:
	rm -f $(PROGS) *.o *~
