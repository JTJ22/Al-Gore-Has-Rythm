#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "SingleLink.h"

class LinkedList {
private:
    SingleLink* head;

public:
    LinkedList();
    void InsertAtEnd(int);
    void DisplayList();
    void DeleteLink(int);
};

#endif // LINKEDLIST_H

