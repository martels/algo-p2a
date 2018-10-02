#include "deck.h"

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

}

Card getTop()
{
	return block.get_frontList();
}

List getList()
{
	return block;
}