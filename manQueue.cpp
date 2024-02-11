#include "manQueue.h"
#include <iostream>

using namespace std;

manQueue::manQueue() : head(nullptr), tail(nullptr), size(0) 
{

}

void manQueue::push(string data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        tail = head;
    }
    else 
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

string manQueue::pop()
{
    if (head == nullptr) 
    {
        cout << "Queue is empty" << endl;
        return ""; 
    }
    Node* temporary = head;
    string data = temporary->data;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    delete temporary;
    size--;
    return data;
}

void manQueue::displayQueue() 
{
    Node* p = head;
    cout << "Head ";
    while (p != nullptr)
    {
        cout << p->data << " <- ";
        p = p->next;
    }
    cout << "Tail\n";
}