reply_admin: reply_admin.o reply_admin_main.o
	g++ -std=c++11 -o reply_admin reply_admin.o reply_admin_main.o
reply_admin_main.o: reply_admin.cc reply_admin_main.cc reply_admin.h
	g++ -std=c++11 -c reply_admin_main.cc
clean:
	rm reply_admin *.o
