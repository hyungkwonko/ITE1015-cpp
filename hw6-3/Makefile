all: minimal_fighter simple_account
minimal_fighter: minimal_fighter.o minimal_fighter_main.o
	g++ -std=c++11 -o minimal_fighter minimal_fighter.o minimal_fighter_main.o
minimal_fighter_main.o: minimal_fighter_main.cc minimal_fighter.h
	g++ -std=c++11 -c minimal_fighter_main.cc
minimal_fighter.o: minimal_fighter.cc minimal_fighter.h
	g++ -std=c++11 -c minimal_fighter.cc
simple_account: simple_account.o simple_account_main.o
	g++ -o simple_account simple_account.o simple_account_main.o
simple_account_main.o: simple_account.cc simple_account_main.cc simple_account.h
	g++ -c simple_account_main.cc
clean:
	rm minimal_fighter simple_account *.o
