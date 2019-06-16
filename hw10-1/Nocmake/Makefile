all: print_shape cast_quiz dynamic_cast
print_shape: print_shape.o print_shape_main.o
	g++ -std=c++14 -o print_shape print_shape.o print_shape_main.o
print_shape_main.o: print_shape_main.cc print_shape.h
	g++ -std=c++14 -c print_shape_main.cc
print_shape.o: print_shape.cc print_shape.h
	g++ -std=c++14 -c print_shape.cc
cast_quiz: cast_quiz.o
	g++ -std=c++11 -o cast_quiz cast_quiz.o
cast_quiz.o: cast_quiz.cc
	g++ -std=c++11 -c cast_quiz.cc
dynamic_cast: dynamic_cast.o dynamic_cast_main.o
	g++ -std=c++11 -o dynamic_cast dynamic_cast.o dynamic_cast_main.o
dynamic_cast_main.o: dynamic_cast_main.cc dynamic_cast.h
	g++ -std=c++11 -c dynamic_cast_main.cc
dynamic_cast.o: dynamic_cast.cc dynamic_cast.h
	g++ -std=c++11 -c dynamic_cast.cc
clean:
	rm print_shape cast_quiz dynamic_cast *.o
