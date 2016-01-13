CC = g++
CFLAGS = -Wall
EXE = scramble

scramble: $(EXE).o
	$(CC) -o $(EXE) $(EXE).o $(CFLAGS)

scramble.o: $(EXE).cpp
	$(CC) -c $(EXE).cpp $(CFLAGS)

clean:
	rm -f $(EXE) *.o
