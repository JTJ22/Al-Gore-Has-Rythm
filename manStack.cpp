#include "manStack.h"
#include <iostream>

using namespace std;

manStack::manStack() : head(nullptr), size(0)
{

}

void manStack::push(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	if (head == NULL) 
	{
		head = newNode; 
	}
	else
	{
		newNode->next = head; 
		head = newNode;
	}

	size++;
}
int manStack::pop()
{
	if (head == nullptr)
	{
		cout << "Stack is empty" << endl;
		return -1; 
	}
	Node* temporary = head;
	int data = temporary->data;
	head = head->next;
	delete temporary; 
	size--;
	return data; 
}

void manStack::displayStack()
{
	cout << "Top ";
	Node* node = head; 
	while (node != nullptr)
	{
		cout << node->data << " -> ";
		node = node->next; 
	}
	cout << "End\n";
}