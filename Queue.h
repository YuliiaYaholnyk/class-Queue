#pragma once
#include "Node.h"
#include "Queue.h"
class Queue {
	Node* pHead;
	Node* pTale;
	size_t size;

public:
	Queue();
	void push(const Datatype& data);
	void pop();
	Datatype front() const;
	Datatype back() const;
	size_t getSize() const;
	bool empty() const;

};

