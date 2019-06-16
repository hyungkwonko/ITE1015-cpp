all: except1 except2 except3 except5 shared_ptr
except1: except1.o
	g++ -std=c++14 -o except1 except1.o
except1.o: except1.cc
	g++ -std=c++14 -c except1.cc
except2: except2.o
	g++ -std=c++14 -o except2 except2.o
except2.o: except2.cc
	g++ -std=c++14 -c except2.cc
except3: except3.o
	g++ -std=c++14 -o except3 except3.o
except3.o: except3.cc
	g++ -std=c++14 -c except3.cc
except5: except5.o
	g++ -std=c++14 -o except5 except5.o
except5.o: except5.cc
	g++ -std=c++14 -c except5.cc
shared_ptr: shared_ptr.o shared_ptr_main.o
	g++ -std=c++11 -o shared_ptr shared_ptr.o shared_ptr_main.o
shared_ptr_main.o: shared_ptr_main.cc shared_ptr.h
	g++ -std=c++11 -c shared_ptr_main.cc
shared_ptr.o: shared_ptr.cc shared_ptr.h
	g++ -std=c++11 -c shared_ptr.cc
clean:
	rm except1 except2 except3 except5 shared_ptr *.o
