
PROGS := stringSort sphereSort shuffle benchmarks

all: $(PROGS)


stringSort: stringSort.cpp
	g++ -g stringSort.cpp -o stringSort

sphereSort: Sphere.o sphereSort.o
	g++ -g Sphere.o sphereSort.o -o sphereSort

sphereSort.o: sphereSort.cpp
	g++ -c sphereSort.cpp

Sphere.o: Sphere.cpp Sphere.hpp
	g++ -c Sphere.cpp

shuffle: shuffle.cpp
	g++ -g shuffle.cpp -o shuffle

benchmarks: benchmarks.cpp
	g++ -g benchmarks.cpp -o benchmarks


clean:
	rm -f $(PROGS) *.o *~