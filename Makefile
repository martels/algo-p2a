flipcard: deck.o card.o main.o
	g++ deck.o card.o main.o -o flipcard

card.o: card.cpp
	g++ -Wall -c card.cpp

deck.o: deck.cpp
	g++ -Wall -c deck.cpp

main.o: main.cpp
	g++ -Wall -c main.cpp

clean:
	rm main.o deck.o card.o flipcard
