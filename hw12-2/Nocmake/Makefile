all: linked_list shared_ptr
linked_list: linked_list.o linked_list_main.o
	g++ -std=c++14 -o linked_list linked_list.o linked_list_main.o
linked_list_main.o: linked_list_main.cc linked_list.h
	g++ -std=c++14 -c linked_list_main.cc
linked_list.o: linked_list.cc linked_list.h
	g++ -std=c++14 -c linked_list.cc
shared_ptr: shared_ptr.o shared_ptr_main.o
	g++ -std=c++11 -o shared_ptr shared_ptr.o shared_ptr_main.o
shared_ptr_main.o: shared_ptr_main.cc shared_ptr.h
	g++ -std=c++11 -c shared_ptr_main.cc
shared_ptr.o: shared_ptr.cc shared_ptr.h
	g++ -std=c++11 -c shared_ptr.cc
clean:
	rm linked_list shared_ptr *.o
