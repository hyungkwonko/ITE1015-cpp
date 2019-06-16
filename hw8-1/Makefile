all: number rectangle
number: number.o number_main.o
	g++ -std=c++14 -o number number.o number_main.o
number_main.o: number_main.cc number.h
	g++ -std=c++14 -c number_main.cc
number.o: number.cc number.h
	g++ -std=c++14 -c number.cc
rectangle: rectangle.o rectangle_main.o
	g++ -std=c++11 -o rectangle rectangle.o rectangle_main.o
rectangle_main.o: rectangle_main.cc rectangle.h
	g++ -std=c++11 -c rectangle_main.cc
rectangle.o: rectangle.cc rectangle.h
	g++ -std=c++11 -c rectangle.cc
clean:
	rm number rectangle *.o
