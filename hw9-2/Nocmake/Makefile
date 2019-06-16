all: animals draw_shape
animals: animals.o animals_main.o
	g++ -std=c++14 -o animals animals.o animals_main.o
animals_main.o: animals_main.cc animals.h
	g++ -std=c++14 -c animals_main.cc
animals.o: animals.cc animals.h
	g++ -std=c++14 -c animals.cc
draw_shape: draw_shape.o draw_shape_main.o
	g++ -std=c++11 -o draw_shape draw_shape.o draw_shape_main.o
draw_shape_main.o: draw_shape_main.cc draw_shape.h
	g++ -std=c++11 -c draw_shape_main.cc
draw_shape.o: draw_shape.cc draw_shape.h
	g++ -std=c++11 -c draw_shape.cc
clean:
	rm animals draw_shape *.o
