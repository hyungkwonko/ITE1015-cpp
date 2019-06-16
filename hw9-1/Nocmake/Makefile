all: classes print_info print_member
classes: classes.o classes_main.o
	g++ -std=c++14 -o classes classes.o classes_main.o
classes_main.o: classes_main.cc classes.h
	g++ -std=c++14 -c classes_main.cc
classes.o: classes.cc classes.h
	g++ -std=c++14 -c classes.cc
print_info: print_info.o print_info_main.o
	g++ -std=c++11 -o print_info print_info.o print_info_main.o
print_info_main.o: print_info_main.cc print_info.h
	g++ -std=c++11 -c print_info_main.cc
print_info.o: print_info.cc print_info.h
	g++ -std=c++11 -c print_info.cc
print_member: print_member.o print_member_main.o
	g++ -std=c++11 -o print_member print_member.o print_member_main.o
print_member_main.o: print_member_main.cc print_member.h
	g++ -std=c++11 -c print_member_main.cc
print_member.o: print_member.cc print_member.h
	g++ -std=c++11 -c print_member.cc
clean:
	rm classes print_info print_member *.o
