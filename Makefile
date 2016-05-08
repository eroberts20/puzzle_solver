OBJS = solver.o game_bored.o game_object.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

solver: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o solver

solver.o: solver.cpp game_bored.h game_object.h
	$(CC) $(CFLAGS) solver.cpp

game_bored.o : game_bored.h game_bored.cpp game_object.h
	$(CC) $(CFLAGS) game_bored.cpp

game_object.o : game_object.h game_object.cpp
	$(CC) $(CFLAGS) game_object.cpp

clean:
	\rm *.o *~ solver


