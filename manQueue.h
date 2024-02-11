#ifndef MANQUEUE_H
#define MANQUEUE_H

#include <string> 

class manQueue 
{
private:
    
    struct Node 
    {
        std::string data;
        Node* prev;
        Node* next;
    };
    Node* head;
    Node* tail;
    int size;

public:
    manQueue(); 
    void push(std::string data);
    std::string pop(); 
    void displayQueue(); 
};

#endif // MANQUEUE_H