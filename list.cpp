#include "list.h"
#include <iostream>

using namespace List;

List(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	head = newval;
	tail = newval;
	cursor = newval;
}

List()
{
	node<Card> *newval;
	newval = new node<Card>;
	head = newval;
	tail = newval;
	cursor = newval;
}

void push_backList(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	newval->prev = tail;
	newval->next = NULL;
	tail->next = newval;
	tail = newval;
	cursor = tail;
}

void push_frontList(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	newval->next = head;
	newval->prev = NULL;
	head->prev = newval;
	head = newval;
	cursor = head;
}

node<Card>* pop_backList()
{
	node<Card> *temp;
	temp = new node<Card>;
	cursor = tail;
	temp = tail;
	cursor = tail->prev;
	delete tail;
	tail = cursor;
	cursor->next = NULL;
	return temp;
}

node<Card>* pop_frontList()
{
	node<Card> *temp;
	temp = new node<Card>;
	cursor = head;
	temp = head;
	cursor = head->next;
	delete head;
	head = cursor;
	cursor->prev = NULL;
	return temp;
}


void printList()
{
	cursor = head;
	while(cursor->next != NULL)
	{
		std::cout << cursor->nodeValue << std::endl;
		cursor = cursor->next;
	}
}

void set_cursor_valList(Card newval)
{
	cursor->nodeValue = newval;
}

