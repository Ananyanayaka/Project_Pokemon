CC = g++
CFLAGS = -Wall -std=c++11
EXEC = program
#SOURCES = pokemon_1.cpp
SOURCES = main.cpp
$(EXEC): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXEC)
clean:
	rm -f $(EXEC)
