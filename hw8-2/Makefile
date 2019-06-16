draw_shape: draw_shape.o draw_shape_main.o
	g++ -std=c++11 -o draw_shape draw_shape.o draw_shape_main.o
draw_shape_main.o: draw_shape_main.cc draw_shape.h
	g++ -std=c++11 -c draw_shape_main.cc
draw_shape.o: draw_shape.cc draw_shape.h
	g++ -std=c++11 -c draw_shape.cc
clean:
	rm draw_shape *.o
