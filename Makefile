CC = g++
CFLAGS = -Wall

scramble: scramble.o
	$(CC) -o scramble scramble.o $(CFLAGS)

scramble.o: scramble.cpp
	$(CC) -c scramble.cpp $(CFLAGS)
