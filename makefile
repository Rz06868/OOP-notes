CXX = g++
CFLAGS = -Wall -Wextra -g

all: main.o
	$(CXX) $(CFLAGS) main.o -o main.exe

run: all
	./main.exe

clean:
	rm -f *.o *.out *.exe

tree:
	tree . --gitignore --filesfirst > tree.txt