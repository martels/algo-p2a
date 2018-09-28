
#include "card.h"

using namespace Card;

Card()
{
	value = 0;
	suit = 0;
}

Card(int v, int s);
{
	value = v;
	suit = s;
}

inline int getValue() const
{
	return value;
}

inline int getSuit() const
{
	return suit;
}

inline void setValue(int v)
{
	value = v;
}

inline void setSuit(int s)
{
	suit = s;
}

char translateValue() const
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
string translateSuit() const
{
	string s;
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