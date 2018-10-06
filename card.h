#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

class Card
{
		private:
		int value;
		int suit;

		public:
		Card();
		Card(int v, int s);
inline int getValue() const;
inline int getSuit() const;
inline void	setValue(int v);
inline void	setSuit(int s);
char	translateValue() const;
string	translateSuit() const;

};

using namespace std;

ostream& operator<< (ostream& ostr, const Card& card)
{
	ostr << "Your card is the " << card.translateValue() << " of " << card.translateSuit() << endl;
	return ostr;
}
#endif