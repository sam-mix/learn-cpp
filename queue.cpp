// queue.cpp -- Queue and Customer methods
#include "queue.h"
#include <cstdlib>


// Queue methods
Queue::Queue(int qs) : qsize(qs) {
	front = rear = nullptr;
	items = 0;
}

Queue::~Queue() {
	Node* temp;
	while (front != nullptr) { // while queue is not yet empty
		temp = front; // save address of front item
		front = front->next; // reset pointer to next item
		delete temp; // delete former front
	}
}

bool Queue::isempty() const {
	return items == 0;
}

bool Queue::isfull() const {
	return items == qsize;
}

int Queue::queuecount() const {
	return items;
}

// Add item to queue
bool Queue::enqueue(const Item & item) {
	if (isfull()) {
		return false;
	}

	Node* add = new Node; // create node
	// on failure, new throws std::bad_alloc exception
	add->item = item;
	add->next = nullptr; // or NULL
	items++;
	if (front == nullptr) {
		front = add;
	} else {
		rear->next = add;
	}
	rear = add;
	return true;
}

bool Queue::dequeue(Item & item) {
	if (front == nullptr) {
		return false;
	}
	item = front->item; // set item to first item in queue
	items--;
	Node* temp = front; // save location of first item
	front = front->next; // reset front to next item
	delete temp; // delete former first item
	if (items == 0) {
		rear = nullptr;
	}
	return true;
}

// customer method

// when is the time at which the customer arrives
// the arrival time is set to when and the processing
// time set to a random value in the range 1- 3
void Customer::set(long when) {
	processtime = std::rand() % 3 + 1;
	arrive = when;
}
