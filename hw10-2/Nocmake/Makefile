all: print_shape clock_time
print_shape: print_shape.o print_shape_main.o
	g++ -std=c++14 -o print_shape print_shape.o print_shape_main.o
print_shape_main.o: print_shape_main.cc print_shape.h
	g++ -std=c++14 -c print_shape_main.cc
print_shape.o: print_shape.cc print_shape.h
	g++ -std=c++14 -c print_shape.cc
clock_time: clock_time.o clock_time_main.o
	g++ -std=c++11 -o clock_time clock_time.o clock_time_main.o
clock_time_main.o: clock_time_main.cc clock_time.h
	g++ -std=c++11 -c clock_time_main.cc
clock_time.o: clock_time.cc clock_time.h
	g++ -std=c++11 -c clock_time.cc
clean:
	rm print_shape clock_time *.o
