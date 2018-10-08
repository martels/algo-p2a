#include "deck.h"
#include <iostream>
#include <stdlib.h>


//using namespace Deck;

void Deck::push_back_Deck(const Card &n)
{
	dnode<Card> *newval;
	newval = new dnode<Card>;
	newval->nodeValue = n;
	if(size != 0)
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


void Deck::push_front_Deck(const Card &n)
{
	dnode<Card> *newval;
	newval = new dnode<Card>;
	newval->nodeValue = n;
	if(!size)
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

Card Deck::pop_back_Deck()
{
	dnode<Card> *newval;
	Card n;
	newval->nodeValue = n;
	if(!size)
	{
		std::cout << "the deck is empty" << std::endl;
		return newval->nodeValue;
	}
	else if(size == 1)
	{
		newval = tail;
		delete tail;
		head = NULL;
		tail = NULL;
		cursor = NULL;
		size--;
		return newval->nodeValue;
	}
	else
	{
		 cursor = tail->prev;
		 newval = tail;
		 delete tail;
		 tail = cursor;
		 tail->next = NULL;
		 size--;
		 return newval->nodeValue;
	}
}

Card Deck::pop_front_Deck()
{
	dnode<Card> *newval;
	Card n;
	newval->nodeValue = n;
	if(size == 0)
	{
		std::cout << "the deck is empty" << std::endl;
		return newval->nodeValue;
	}
	else if(size == 1)
	{
		newval = head;
		delete head;
		head = NULL;
		tail = NULL;
		cursor = NULL;
		size--;
		return newval->nodeValue;
	}
	else
	{
		cursor = tail->next;
		newval = head;
		delete head;
		head = cursor;
		head->next = NULL;
		size--;
		return newval->nodeValue;
	}
}

void Deck::insert_above_Deck(const Card &n)
{
	dnode<Card> *newval;
	newval = new dnode<Card>;
	newval->nodeValue = n;
	if(size == 0)
	{
		head = newval;
		tail = newval;
		cursor = newval;
		newval->next = NULL;
		newval->prev =NULL;
		size++;
	}
	else
	{
		newval->next = cursor;
		newval->prev = cursor->prev;
		cursor = cursor->prev;
		cursor->next = newval;
		cursor = cursor->next;
		cursor = cursor->next;
		cursor->prev = newval;
		size++;
	}

}

void Deck::insert_below_Deck(const Card &n)
{
	dnode<Card> *newval;
	newval = new dnode<Card>;
	newval->nodeValue = n;
	if(size == 0)
	{
		head = newval;
		tail = newval;
		cursor = newval;
		newval->next = NULL;
		newval->prev =NULL;
		size++;
	}
	else
	{
		newval->next = cursor->next;
		newval->prev = cursor;
		cursor = cursor->next;
		cursor->prev = newval;
		cursor = cursor->prev;
		cursor = cursor->prev;
		cursor->next = newval;
		size++;
	}

}
Card Deck::pluck_Deck()
{
	dnode<Card> *newval;
	if(size == 0)
	{
		Card n;
		newval = new dnode<Card>;
		newval->nodeValue = n;
		std::cout << "the deck is empty" << std::endl;
		return newval->nodeValue;
	}
	else if(size == 1)
	{
		newval = head;
		delete head;
		head = NULL;
		tail = NULL;
		cursor = NULL;
		return newval->nodeValue;
		size--;
	}
	else
	{
		newval = cursor;
		cursor->prev->next = cursor->next;
		cursor->next->prev = cursor->prev;
		cursor->next = NULL;
		cursor->prev = NULL;
		delete cursor;
		return newval->nodeValue;
		size--;
	}

}

void Deck::print_Deck()
{
	if(size == 0)
	{
		std::cout << "the deck is empty" << std::endl;
		return;
	}
	else
	{
		cursor = head;
		while(cursor != NULL)
		{
			std::cout << cursor->nodeValue;
			cursor = cursor->next;
		}
		std::cout << std::endl << std::endl;
	}
}
void Deck::standard_Deck()
{
	Card temp;
	for(int i = 0; i < 4; i++)
	{
		temp.setSuit(i);
		for(int k = 1; k <= 13; k++)
		{
			temp.setValue(k);
			push_back_Deck(temp);
		}
	}
	return;
}

Deck Deck::shuffle_Deck()
{
	srand(time(0));
	int i = 0;
	Deck temp;
	while(size != 0)
	{
		cursor = head;
		i = rand() % size;
		while(i != -1)
		{
			cursor = cursor->next;
		}
		temp.push_front_Deck(pluck_Deck());
	}
	return temp;
}

