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
	Node* root;
	Node* AddNode(int value, Node* root)
	{
		if (root == nullptr)
		{
			Node* newNode = new Node;
			newNode->data = value;
			newNode->left = nullptr;
			newNode->right = nullptr;
			return newNode;
		}

		if (value < root->data)
			root->left = AddNode(value, root->left);
		else
			root->right = AddNode(value, root->right);

		return root;
	}
	void FlippyTheFlipFlop()
	{
		FlippyTheFlipFlop(root);
	}
public:
	BinTree();
	void AddNode(int value);
	void InOrderTraverse(Node* root);
	void PostOrderTraverse(Node* root);
	void LevelOrderTraverse(Node* root);
	void PreOrderTraverse(Node* root);
	int AmountOfNodes(Node* root);
	int DepthOfThePussy(Node* root);
	void FlippyTheFlipFlop(Node* root);
	Node* GetRoot() const;
};

#endif 

