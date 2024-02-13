using namespace std;
#include <iostream>
#include "LinkedList.h"
#include "manQueue.h"
#include "manStack.h"
#include "BinTree.h"
#include <cstdlib> 
#include <ctime>   

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

   /* BinTree myBin;
   
    myBin.AddNode(2);
    myBin.AddNode(1);
    myBin.AddNode(3);
    myBin.AddNode(4);
    myBin.AddNode(5);
    myBin.AddNode(6);
    myBin.AddNode(7);
    myBin.AddNode(8);
    myBin.LevelOrderTraverse(myBin.GetRoot());
    cout << "\n";
    myBin.PostOrderTraverse(myBin.GetRoot());
    cout << "\n";
    myBin.PreOrderTraverse(myBin.GetRoot());
    cout << "\n";
    myBin.InOrderTraverse(myBin.GetRoot());*/

    srand(static_cast<unsigned int>(time(nullptr)));

    BinTree myBin;


    const int numberOfNodes = 8;
    for (int i = 0; i < numberOfNodes; ++i)
    {
        int randomNumber = rand() % 100;
        myBin.AddNode(randomNumber);
    }

    cout << "Level Order Traversal: ";
    myBin.LevelOrderTraverse(myBin.GetRoot());
    cout << "\n";

    cout << "Post Order Traversal: ";
    myBin.PostOrderTraverse(myBin.GetRoot());
    cout << "\n";

    cout << "Pre Order Traversal: ";
    myBin.PreOrderTraverse(myBin.GetRoot());
    cout << "\n";

    cout << "In Order Traversal: ";
    myBin.InOrderTraverse(myBin.GetRoot());
    cout << "\n";

   /* cout << "Flipping the flip flop\n";
    myBin.FlippyTheFlipFlop(myBin.GetRoot());

    cout << "Level Order Traversal: ";
    myBin.LevelOrderTraverse(myBin.GetRoot());
    cout << "\n";

    cout << "Post Order Traversal: ";
    myBin.PostOrderTraverse(myBin.GetRoot());
    cout << "\n";

    cout << "Pre Order Traversal: ";
    myBin.PreOrderTraverse(myBin.GetRoot());
    cout << "\n";

    cout << "In Order Traversal: ";
    myBin.InOrderTraverse(myBin.GetRoot());
    cout << "\n";*/

    cout << "Delete a number:\n";
    int numberToRemove;
    cin >> numberToRemove;
    myBin.DeleteNode(myBin.GetRoot(), numberToRemove);
        
    cout << "\nIn Order Traversal: ";
    myBin.InOrderTraverse(myBin.GetRoot());
    cout << "\n";
    return 0;
}

