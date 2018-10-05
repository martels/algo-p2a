#include "deck.h"


using namespace Deck;

void push_back_Deck(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	if(head == NULL && tail == NULL)
	{
		head = newval;
		tail = newval;
		cursor = newval;
		newval->next = NULL;
		newval->prev = NULL;
	}
	else
	{
		newval->prev = tail;
		newval->next = NULL;
		tail->next = newval;
		tail = newval;
		cursor = tail;
	}
	size++;
}


void push_front_Deck(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	if(head == NULL && tail == NULL)
	{
		head = newval;
		tail = newval;
		cursor = newval;
		newval->next = NULL;
		newval->prev = NULL;
	}
	else
	{
		newval->next = head;
		newval->prev = NULL;
		head->prev = newval;
		head = newval;
		cursor = head;
	}
	size++;

}