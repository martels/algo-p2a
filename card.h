
#include <string>
#include <iostream>
#ifndef CARD_H
#define CARD_H


class Card
{
		private:
		int value;
		int suit;

		public:
		Card();
		Card(int v, int s);
inline int getValue() const {return value;}
inline int getSuit() const {return suit;}
inline void	setValue(int v) {value = v;}
inline void	setSuit(int s) {suit = s;}
char	translateValue() const;
std::string	translateSuit() const;
};

inline std::ostream& operator<< (std::ostream& ostr, const Card& card)
{
	using namespace std;
	ostr << "Your card is the " << card.translateValue() << " of " << card.translateSuit() << endl;
	return ostr;
}

#endif