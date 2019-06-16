magic_square: magic_square.o func.o
	g++ -o magic_square magic_square.o func.o
magic_square.o: magic_square.cc func.cc func.h
	g++ -c magic_square.cc
clean:
	rm -rf *.o magic_square
