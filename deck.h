#ifndef DECK_H
#define DECK_H

#include "card.h"
#include "d_dnode.h"
//#include "d_nodel.h"

class Deck
{
private:
	dnode<Card> * head;
	dnode<Card> * tail;
	dnode<Card> * cursor;
	int size;

public:
			Deck() : head(NULL), tail(NULL), cursor(NULL), size(0) {}						
void		push_front_Deck(const Card &n);
void		push_back_Deck(const Card &n);

Card 		pop_back_Deck();
Card		pop_front_Deck();


inline Card	get_front_Deck(){return head->nodeValue;}
inline Card	get_back_Deck(){return tail->nodeValue;}
inline int 	get_size_Deck() {return size;}
inline Card	get_cursor_val_Deck(){return cursor->nodeValue;}

void 		insert_above_Deck(const Card &n);
void		insert_below_Deck(const Card &n);
Card 		pluck_Deck();

inline void	set_cursor_val_Deck(const Card &newval){cursor->nodeValue = newval;}

inline void jump_front_Deck(){cursor = head;}
inline void jump_back_Deck(){cursor = tail;}


void		print_Deck();
Deck		shuffle_Deck();
void		standard_Deck();
};



#endif