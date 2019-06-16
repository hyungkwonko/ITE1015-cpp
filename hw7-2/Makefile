simple_int_set: simple_int_set.o simple_int_set_main.o
	g++ -std=c++11 -o simple_int_set simple_int_set.o simple_int_set_main.o
simple_int_set_main.o: simple_int_set.cc simple_int_set_main.cc simple_int_set.h
	g++ -std=c++11 -c simple_int_set_main.cc
clean:
	rm simple_int_set *.o
