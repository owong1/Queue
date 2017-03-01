#ifndef _QUEUE_H
#define _QUEUE_H
#include "Node.h"

template<class T>
class Queue{
private:
	Node<T>* front;
	Node<T>* back;
	unsigned int size;

public:
	Queue();
	~Queue();

	void enqueue(T d); //insert (push back)
	T dequeue(); //delete (pop front)

	unsigned int getSize();
	bool isEmpty();
};

#endif