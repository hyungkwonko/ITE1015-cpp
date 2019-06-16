all: get_sum_diff sort_int
get_sum_diff: get_sum_diff.o
	g++ -o get_sum_diff get_sum_diff.o
get_sum_diff.o: get_sum_diff.cc
	g++ -c get_sum_diff.cc
sort_int: sort_int.o sort.o
	g++ -o sort_int sort_int.o sort.o
sort_int.o: sort_int.cc sort.cc sort.h
	g++ -c sort_int.cc
clean:
	rm -rf *.o get_sum_diff sort_int
