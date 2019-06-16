message_book: message_book.o message_book_main.o
	g++ -std=c++11 -o message_book message_book.o message_book_main.o
message_book_main.o: message_book_main.cc message_book.h
	g++ -std=c++11 -c message_book_main.cc
message_book.o: message_book.cc message_book.h
	g++ -std=c++11 -c message_book.cc
clean:
	rm message_book *.o
