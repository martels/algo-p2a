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
public:
node<Card> 	*head, *tail, *cursor;
int 		size;
			List(Card n);
			List();
void		push_frontList(Card n);
void		push_backList(Card n);
node<Card>*		pop_backList();
node<Card>*		pop_frontList();
inline node<Card>*	get_frontList(){return head;}
inline node<Card>*	get_backList(){return tail;}
inline int 	get_sizeList() {return size;}
inline Card	get_cursor_valList(){return cursor->nodeValue;}
void 		insert_aboveList(Card n);
void		insert_belowList(Card n);

void		printList();
void		set_cursor_valList(Card newval);

inline void jump_frontList(){cursor = head;}
inline void jump_backList(){cursor = tail;}
inline void iterateList(){cursor = cursor->next;}

};

#endif