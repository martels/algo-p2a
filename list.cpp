#include "list.h"

using namespace List;

List(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	head = newval;
	tail = newval;
	cursor = newval;
}

void push_backList(Card n)
{
	node<Card> *newval;
	newval = new node<Card> n;
	newval->prev = tail;
	tail->next = newval;
	tail = newval;
	tail->next = NULL;
	cursor = tail;
}

void push_frontList(Card n)
{

}

node* pop_backList()
{

}

node* pop_frontList()
{

}

void printList()
{

}

void set_cursor_valList()
{

}

