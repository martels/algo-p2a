#ifndef CARD_H
#define CARD_H
#include <iostream>

using namespace std;


typedef enum _CARD_SUIT
{
	club = 0;
	diamond,
	heart,
	spade
} suit_type;

class Card
{
	private:
	int value;
	suit_type suit;

	public:
	Card();
	Card(int v, suit_type s);
int	getValue() const;
suit_type	getSuit() const;
void	setValue(int v);
void	setSuit(int s);

};


	char val = '0';
	if(card.getValue() == 1)
	{
		val = 'A';
	}

	else if(card.getValue() == 11)
	{
		val = 'J';
	}

	else if(card.getValue() == 12)
	{
		val = 'Q';
	}

	else if(card.getValue() == 13)
	{
		val = 'K';
	}
	else
		val = card.getValue();
	ostr << "Your card is the" << val << " of " << card.getSuit() << endl;
	return ostr;
}



