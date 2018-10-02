#ifndef DOUBLY_LINKED_NODE_CLASS
#define DOUBLY_LINKED_NODE_CLASS

template <typename T>
class node
{
	public:
		// the members of a node object are used for operations within a
		// doubly linked list; access is simplified by making them public

      	T nodeValue;		// data value of the node
		node<T> *prev;	// previous node in the list
      	node<T> *next;	// next node in the list

		// default constructor. creates object with value T(), the
		// default value of type T. set the node pointers to point at
		// the node itself
      	node()
		{
			next = this;	// the next node is the current node
			prev = this;	// the previous node is the current node
		}

      // constructor with an argument to initialize nodeValue.
		// set the node pointers to point at the node itself
      	node(const T& value): nodeValue(value)
		{
			next = this;	// the next node is the current node
			prev = this;	// the previous node is the current node
		}
};

#endif	// DOUBLY_LINKED_NODE_CLASS