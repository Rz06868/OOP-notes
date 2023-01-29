CC = g++
CFLAGS = -Wall -Wextra -g

all: main.o
	$(CC) $(CFLAGS) main.o -o main.exe

run: all
	./main.exe

clean:
	rm -f *.o *.out *.exe

tree:
	tree . --gitignore --dirsfirst > tree.txt