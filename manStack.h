#ifndef MANSTACK_H
#define MANSTACK_H

#include <string> 

class manStack
{
private:

    struct Node
    {
        int data;
        Node* next;
    };
    Node* head;
    int size;

public:
    manStack();
    void push(int data);
    int pop();
    void displayStack();
};

#endif // MANSTACK_H
