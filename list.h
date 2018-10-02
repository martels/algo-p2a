#ifndef LIST_H 
#define LIST_H

#include "card.h"
#include "node.h"

// struct node
// {
// 	Card value;
// 	node *next;
// 	node *previous;
// }
class List
{
private:
node<Card> 	*head, *tail, *cursor;
inline void		headList(){cursor = head;}
inline void		tailList(){cursor = tail;}

public:
			List(Card n);
void		push_frontList(Card n);
void		push_backList(Card n);
node*		pop_backList();
node*		pop_frontList();
void 		insert_aboveList(Card n);
void		insert_belowList(Card n);
void		printList();
void		set_cursor_valList(Card newval);

inline Card	get_cursor_valList(){return cursor->nodeValue;}
inline node*	nextList(){cursor = cusror->next;}
};

#endif