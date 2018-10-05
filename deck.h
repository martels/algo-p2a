#ifndef DECK_H
#define DECK_H

#include "card.h"
#include "d_dnode.h"
#include "d_nodel.h"

class _Deck
{
private:
	node<Card> * head;
	node<Card> * tail;
	node<Card> * cursor;
	int size;
public:
			Deck() : head(null), tail(null), cursor(null), size(0) {}						

void		push_front_Deck(Card n);
void		push_back_Deck(Card n);

node<Card>*	pop_back_Deck();
node<Card>*	pop_front_Deck();


inline Card	get_front_Deck(){return head->nodeValue;}
inline Card	get_back_Deck(){return tail->nodeValue;}
inline int 	get_size_Deck() {return size;}
inline Card	get_cursor_val_Deck(){return cursor->nodeValue;}

void 		insert_above_Deck(Card n);
void		insert_below_Deck(Card n);
node<Card>* pluck_Deck();

inline void	set_cursor_val_Deck(Card newval){cursor->nodeValue = newval;}

inline void jump_front_Deck(){cursor = head;}
inline void jump_back_Deck(){cursor = tail;}


void		print_Deck();
void		shuffle_Deck();
Deck*		deal_Deck(int num)
};



#endif