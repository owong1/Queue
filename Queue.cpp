#include <iostream>
#include <cassert>
#include "Node.h"
#include "Queue.h"

using namespace std;

template<class T>
Queue<T>::Queue(){
	size = 0;
	front = back = NULL;
}
template<class T>
Queue<T>::~Queue(){
	while (!isEmpty()){
		dequeue();
	}
}

template<class T>
void Queue<T>::enqueue(T d){
	Node<T>* n = new Node<T>(d);		
	if (isEmpty()){	
		front = n;
		back = n;
	}
	else{
		n->next = back;		
		back->prev = n;
		back = n;
	}
	size++;
}
template<class T>
T Queue<T>::dequeue(){
	assert(!isEmpty());
	T d = front->data;		//copy of data
	if (getSize() == 1){		//delete node if only 1 node
		delete front;		//empty list
		front = NULL;
		back = NULL;
	}
	else{					//if more than one node
		front = front->prev;	//copy data to prev
		delete front->next;	//remove data
		front->next = NULL;	//removed address is null
	}
	size--;
	return d;
}

template<class T>
unsigned int Queue<T>::getSize(){
	return size;
}
template<class T>
bool Queue<T>::isEmpty(){
	return size == 0 ? true : false;
}

//explicit instantiations with templates
template class Queue<int>;
//template class Queue<int*>;
//template class Queue<float>;
//template class Queue<float*>;
template class Queue<double>;
//template class Queue<double*>;
//template class Queue<char>;
//template class Queue<char*>;
//template class Queue<std::string>;