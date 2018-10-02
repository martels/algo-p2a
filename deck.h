#ifndef DECK_H
#define DECK_H
#include "list.h"
#include <stdlib.h>

using namespace std;

class Deck
{
private:
	List block;
public:
	Deck();
void shuffle();
Card getTop() const;
List getList() const;
};

// ostream& operator<< (ostream& ostr, const Deck& deck)
// {
	
// }
#endif