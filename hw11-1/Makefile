MyVector: MyVector.o MyVector_main.o
	g++ -std=c++11 -o MyVector MyVector.o MyVector_main.o
MyVector_main.o: MyVector.cc MyVector_main.cc MyVector.h
	g++ -std=c++11 -c MyVector_main.cc
clean:
	rm MyVector *.o
