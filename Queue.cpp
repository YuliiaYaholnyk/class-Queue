#include <iostream>
#include "Queue.h"

Queue::Queue() : pHead(pHead), pTale(pTale), size(0) {}

void Queue::push(const Datatype& data) {
	Node* pNew = new Node(data);

	if (this->pHead != nullptr) {
		this->pTale->setpNext(pNew);
		this->pTale = pNew;
	}
	else {
		this->pHead = pNew;
		this->pTale = pNew;

	}

	size++;
}

void Queue::pop() {
	Node* pNext = this->pHead->getpNext();
	delete this->pHead;
	pHead = pNext;
	this->size--;
}

Datatype Queue::front() const {
	return this->pHead->getData();
}

Datatype Queue::back() const {
	return this->pTale->getData();
}

size_t Queue::getSize() const {
	return this->size;
}

bool Queue::empty() const {
	if (this->size != 0) {
		return false;
	}
	else {
		return true;
	}
}
