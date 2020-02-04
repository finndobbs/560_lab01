main: main.o linkedList.o node.o
	g++ main.o linkedList.o node.o -o main

main.o: main.cpp
	g++ -c main.cpp

linkedList.o: linkedList.cpp
	g++ -c linkedList.cpp

node.o: node.cpp
	g++ -c node.cpp

clean:
	rm *.o main

