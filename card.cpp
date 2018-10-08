
#include "card.h"


Card::Card()
{
	value = 0;
	suit = 0;
}

Card::Card(int v, int s)
{
	value = v;
	suit = s;
}

char Card::translateValue() const
{
	char val = 0;
	if(value == 1)
		val = 'A';
	else if(value == 11)
		val = 'J';
	else if(value == 12)
		val = 'Q';
	else if(value == 13)
		val = 'K';
	else 
		val = value;
	return val;
}

std::string Card::translateSuit() const
{
	std::string s;
	if(suit == 0)
		s = "Clubs";
	else if(suit == 1)
		s = "Diamonds";
	else if(suit == 2)
		s = "Hearts";
	else if(suit == 3)
		s = "Spades";
	return s;
}

