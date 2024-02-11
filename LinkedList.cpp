#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
}

void LinkedList::InsertAtEnd(int data)
{
	SingleLink* newLink = new SingleLink(data);

	if (head == NULL)
	{
		head = newLink;
		return;
	}

	SingleLink* temporary = head;
	while (temporary->nextLink != NULL)
	{
		temporary = temporary->nextLink;
	}

	temporary->nextLink = newLink;
}

void LinkedList::DisplayList()
{
	SingleLink* temporary = head;

	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}

	while (temporary != NULL) {
		cout << temporary->info << " ";
		temporary = temporary->nextLink;
	}
}

void LinkedList::DeleteLink(int index)
{
    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }

    if (index == 1)
    {
        SingleLink* temporary = head;
        head = head->nextLink;
        delete temporary;
        return;
    }

    SingleLink* currentNode = head;
    SingleLink* lastNode = NULL;
    int counter = 1;
    while (currentNode != NULL && counter < index)
    {
        lastNode = currentNode;
        currentNode = currentNode->nextLink;
        counter++;
    }

    if (currentNode == NULL)
    {
        cout << "Well done you broke it :(" << endl;
        return;
    }

    lastNode->nextLink = currentNode->nextLink;

    delete currentNode;
}