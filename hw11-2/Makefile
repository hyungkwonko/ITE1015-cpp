all: world_clock calendar
world_clock: world_clock.o world_clock_main.o
	g++ -std=c++11 -o world_clock world_clock.o world_clock_main.o
world_clock_main.o: world_clock.cc world_clock_main.cc world_clock.h
	g++ -std=c++11 -c world_clock_main.cc
calendar: calendar.o calendar_main.o
	g++ -std=c++11 -o calendar calendar.o calendar_main.o
calendar_main.o: calendar.cc calendar_main.cc calendar.h
	g++ -std=c++11 -c calendar_main.cc
clean:
	rm world_clock calendar *.o
