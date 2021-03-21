/* Data Structures */

#include <iostream>
#include <string>
#include "linkedlist.h"

using namespace std;

/* LISTS - An abstract data type that can be implemented with an array
   but what if we want a list that will grow?

   Operations desired:
   -empty list has size 0
   -insert
   -remove
   -count
   -Read/modify element at given positon
   -Specify data type

   If implemented with an array, we always have the possibility that we will try
   to insert more elements than can fit in the array allocated. When this happens,
   we need to create a new array of double the size and copy all the elements over
   to this new array. THIS IS AN INEFFICIENT USE OF MEMORY!

   This is where linked-lists come in...

   Each insert with linked lists asks the memory manager only for the space required
   to store a single element along with the pointer to the next element (comprising a node)

   In C, this might look like:

   struct Node
   {
   int data;
   Node *next;
   }

   Have to traverse the list up to a given node to access it.
   Linked lists have no unused memory, but have to store pointer to next node for each element.

   WHEN CHOOSING BETWEEN USING ARRAYS VS LINKED-LISTS, NEED TO
   CONSIDER WHAT THE MOST COMMON OPERATION WILL BE. NO SUCH THING AS ONE IS BETTER THAN THE
   OTHER FOR ALL CASES.
*/

//Implementation 
//The only identity we keep of a linked list for the whole time is the address to the head node

LinkedList::LinkedList() // Should constructor do the job of initializing head node? Me thinks yes
{
	cout << "New linked list created!" << endl;
	this->head = NULL; 
	this->length = 0;
}

LinkedList::~LinkedList()
{
	delete head;
}

void LinkedList::addNodeAtBeginning(int x) {
	Node* temp = new Node(); //Allocate a new node on the heap
	temp->data = x;
	temp->next = head; // This is only used when the list is empty
	this->head = temp; // Setting list's head to newly created node
}


Node* LinkedList::getHead() 
{
	return this->head;
}

void LinkedList::printList() //Currently this is only printing the last element inserted
{
	Node* itr = this->head;
	cout << "linked-list is: ";
	while (itr != NULL) //When list just has a head node, itr will stay pointing to head node with this current implementation
	{
		if (itr->next == NULL)
		{
			cout << itr->data << endl;
			break;
		}
		cout << itr->data << " -> ";
		itr = itr->next;
	}
	cout << "(from most recently inserted to least recently inserted)" << endl;
}




