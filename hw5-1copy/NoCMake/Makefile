all: command_argument cmdarg swaping circle_main
command_argument: command_argument.o
	g++ -o command_argument command_argument.o
command_argument.o: command_argument.cc
	g++ -c command_argument.cc
cmdarg: cmdarg.o
	g++ -o cmdarg cmdarg.o
cmdarg.o: cmdarg.cc
	g++ -c cmdarg.cc
swaping: swaping.o
	g++ -o swaping swaping.o
swaping.o: swaping.cc
	g++ -c swaping.cc
circle_main: circle_main.o circle.o
	g++ -o circle_main circle_main.o circle.o
circle_main.o: circle_main.cc circle.cc circle.h
	g++ -c circle_main.cc
clean:
	rm -rf *.o command_argument cmdarg swaping circle_main

