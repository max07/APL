all: array link

array: main.o array.o
	g++ main.cpp array.cpp -o array

link:  main.o  linkedlist.o
 	g++ main.cpp linkedlist.cpp -o link

main.o: main.cpp
	g++ -c main.cpp

array.o: array.cpp
	g++ -c array.cpp

linkedlist.o: linkedlist.cpp
    g++ -c linkedlist.cpp



clean:
	rm -rf *.o all
