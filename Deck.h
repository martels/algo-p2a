//Barry Yung
//Samual Martel
//Algos Project2a
#ifndef Deck_h
#define Deck_h

#include <iostream>
#include <stdio.h>


using namespace std;


class card{
    
public:
    card(string sValue, string sSuit) {value = sValue; suit = sSuit;}; //class constructor
    
    void setValue(string sValue);
    void setSuit(string sSuit);
    string getSuit();
    string getValue();
    
    
private:
    string value;
    string suit;
};

class Node {
     public:
         Node() {};
         Node* next;
         card* data;
     
 };
 

class Deck {
    public:
        Node* head;
        int length;
        Deck();
        ~Deck();
        void addCard(card& card);
        void shuffle();
        void print();

};



#endif
