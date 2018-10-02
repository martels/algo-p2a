#include "list.h"
#include <stdlib.h>

class Deck
{
private:
	list<Card> block;

public:
	Deck();
void shuffle();
Card getTop() const;
list<Card> getList() const;
};

std::ostream& operator<< (std::ostream& ostr, const Deck& deck)
{
	
}