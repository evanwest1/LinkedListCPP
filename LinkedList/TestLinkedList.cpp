#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
	LinkedList l1;
	cout << "How many numbers to insert to linked-list? ";
	int numElements, i, userElement;
	cin >> numElements;
	for (i = 0; i < numElements; ++i)
	{
		cout << "Enter value for index " << (numElements - i) - 1 << ": ";
		cin >> userElement;
		l1.addNodeAtBeginning(userElement);
	}
	l1.printList();
	l1.deleteNodeAtIndex(0);
	l1.printList();
	return 0;
}