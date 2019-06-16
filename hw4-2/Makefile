all: print_people my_list my_list_replace
print_people: print_people.o
	g++ -o print_people print_people.o
print_people.o: print_people.cc
	g++ -c print_people.cc
my_list: my_list.o
	g++ -o my_list my_list.o
my_list.o: my_list.cc
	g++ -c my_list.cc
my_list_replace: my_list_replace.o
	g++ -o my_list_replace my_list_replace.o
my_list_replace.o: my_list_replace.cc
	g++ -c my_list_replace.cc
clean:
	rm -rf *.o print_people my_list my_list_replace

