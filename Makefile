flipcard: deck.o list.o card.o main.o
	g++ deck.o list.o card.o main.o

card.o: card.cpp
	g++ -Wall -c card.cpp

deck.o: deck.cpp
	g++ -Wall -c deck.cpp

main.o: main.cpp
	g++ -Wall -c main.cpp

clean:
	rm main.o list.o deck.o card.o flipcard