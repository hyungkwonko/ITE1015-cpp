all: sorted_array integer_set
sorted_array: sorted_array.o sorted_array_main.o
	g++ -std=c++14 -o sorted_array sorted_array.o sorted_array_main.o
sorted_array_main.o: sorted_array_main.cc sorted_array.h
	g++ -std=c++14 -c sorted_array_main.cc
sorted_array.o: sorted_array.cc sorted_array.h
	g++ -std=c++14 -c sorted_array.cc
integer_set: integer_set.o integer_set_main.o
	g++ -std=c++11 -o integer_set integer_set.o integer_set_main.o
integer_set_main.o: integer_set_main.cc integer_set.h
	g++ -std=c++11 -c integer_set_main.cc
integer_set.o: integer_set.cc integer_set.h
	g++ -std=c++11 -c integer_set.cc
clean:
	rm sorted_array integer_set *.o
