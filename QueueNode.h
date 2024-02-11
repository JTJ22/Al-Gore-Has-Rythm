#ifndef QUEUENODE_H
#define QUEUENODE_H

class QueueNode {
public:
	int data;
	QueueNode* prev;
	QueueNode* next;
	
	QueueNode();
};

#endif // QUEUENODE_H

