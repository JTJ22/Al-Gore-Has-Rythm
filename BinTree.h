#ifndef BinTree_H
#define BinTree_H

class BinTree
{
private:
	struct Node
	{
		int data;
		Node* left;
		Node* right;
	};

public:
	BinTree();
	void InOrderTraverse(Node* root);
	void PostOrderTraverse(Node* root);
	void LevelOrderTraverse(Node* root);
	void PreOrderTraverse(Node* root);
	int AmountOfNodes(Node* root);
	int DepthOfThePussy(Node* root);
	void FlippyTheFlipFlop(Node* root);
};

#endif 

