#include "deck.h"
#include <stdlib.h>

using namespace std;

Deck()
{
	List block; 
	for(int k = 0; k < 4; k++)
	{
		for(int i = 0; i < 13; i++)
		{
			Card temp(i+1, k);
			block.push_frontList(temp);
		}
	}
	block.pop_frontList();
	block.printList();
}

void shuffle()
{
	List shuffler1, shuffler2;
	int decksize = block.get_sizeList();
	block.jump_headList();
	for(int i = 0; i < 4; i++)
	{
		for(int i = 0; i < decksize/2; i++)
		{
			shuffler1->cursor->nodeValue = block->cursor->nodeValue;
			shuffler1.iterateList();
			block.iterateList();
		}
		for(int i = decksize/2; i <= decksize; i++)
		{
			shuffler2->cursor->nodeValue = block->cursor->nodeValue;
			shuffler2.iterateList();
			block.iterateList();
		}
		shuffler2->tail->next = shuffler1->head;
		shuffler2->tail = shuffler1->tail;
		block = shuffler2;
	}

	for(int i = 0; i < decksize/2; i++)
	{
		shuffler1->cursor->nodeValue = block->cursor->nodeValue;
		shuffler1.iterateList();
		block.iterateList();
	}
	for(int i = decksize/2; i <= decksize; i++)
	{
		shuffler2->cursor->nodeValue = block->cursor->nodeValue;
		shuffler2.iterateList();
		block.iterateList();
	}
	
	while(block->cursor != block->tail)
	{

	}
}

Card getTop()
{
	return block.get_frontList();
}

List getList()
{
	return block;
}