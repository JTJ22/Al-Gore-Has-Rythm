#include "BinTree.h"
#include <iostream>
#include<queue>
using namespace std;

BinTree::BinTree()
{
    root = nullptr;
}

void BinTree::InOrderTraverse(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    InOrderTraverse(root->left);
    cout << root->data << " ";
    InOrderTraverse(root->right);
}

void BinTree::PostOrderTraverse(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    PostOrderTraverse(root->left);
    PostOrderTraverse(root->right);
    cout << root->data << " ";
}

void BinTree::PreOrderTraverse(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    PreOrderTraverse(root->left);
    PreOrderTraverse(root->right);
}

void BinTree::LevelOrderTraverse(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}

int BinTree::AmountOfNodes(Node* root)
{
    int counter = 0;
    if (root == NULL)
    {
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        counter++;
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
    return counter;
}

int BinTree::DepthOfThePussy(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int leftDepth = DepthOfThePussy(root->left);
        int rightDepth = DepthOfThePussy(root->right);

        if (leftDepth > rightDepth)
            return(leftDepth + 1);
        else
            return (rightDepth + 1);
    }
}

void BinTree::FlippyTheFlipFlop(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    Node* temporaryNode;
    temporaryNode = root->left;
    root->left = root->right;
    root->right = temporaryNode;
    FlippyTheFlipFlop(root->left);
    FlippyTheFlipFlop(root->right);
}

void BinTree::AddNode(int value)
{
    root = AddNode(value, root);
}

BinTree::Node* BinTree::GetRoot() const
{
    return root;
}