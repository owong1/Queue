#ifndef _NODE_H
#define _NODE_H

template<class T>
class Node{
public:
	T data;
	Node<T>* next;
	Node<T>* prev;

	Node(T d){
		data = d;
		next = prev = NULL();
	}
};
#endif