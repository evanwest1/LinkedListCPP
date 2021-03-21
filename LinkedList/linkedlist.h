#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H


struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
	int length;
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void addNodeAtBeginning(int);
	void printList();
	Node* getHead();
};

#endif