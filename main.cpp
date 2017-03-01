#include <iostream>
#include "queue.h"

using namespace std;

int main(){
	Queue<double> P;

	double a[] = { 2.4, 6.1, 3.9, 8.2 };


	//display and input numbers
	cout << "Values to insert: ";
	for (int i = 0; i < 4; i++){
		cout << a[i] << " ";
		P.enqueue(a[i]);
	}

	cout << endl;

	cout << "Values in queue: ";
	for (int i = 0; i < 4; i++){
		std::cout << P.dequeue() << " ";	//display each item as it's deleted from the list
	}

	//keep .exe window open
	getchar();
	return 0;
}
