using namespace std;
#include <iostream>
#include "LinkedList.h"
#include "manQueue.h"
#include "manStack.h"
#include "BinTree.h"

int main()
{
    LinkedList list;

    list.InsertAtEnd(1);
    list.InsertAtEnd(2);
    list.InsertAtEnd(3);
    list.InsertAtEnd(4);
    cout << "List is: ";
    list.DisplayList();
    cout << endl;
    list.DeleteLink(2);
    cout << "Updated list is: ";
    list.DisplayList();
    cout << endl;

    manQueue myQueue;

    myQueue.push("Hi");
    myQueue.push("Hello");
    myQueue.push("Bonjour");
    myQueue.push("Gutentagg");
    myQueue.displayQueue();
    myQueue.pop();
    myQueue.pop();
    myQueue.displayQueue();

    manStack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.displayStack();
    myStack.pop();
    myStack.displayStack();
    return 0;
}

