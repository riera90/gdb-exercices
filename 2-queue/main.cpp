#include <stdio.h>

template <class T>
class Node {
private:
	Node<T>* next_;
	T value_;

public:
	Node(const T& value, Node<T>* next = 0): value_(value), next_(next) {}

	Node<T>* getNext() {
		return this->next_;
	}
	
	const T& getValue() {
		return this->value_;
	}

	void setNext(Node<T>* next) {
		this->next_ = next;
	}
};


template <class T>
class Queue {
private:
	Node<T>* head_;

public:
	Queue() {
		this->head_ = nullptr;
	}

	void push(const T& value) {
		Node<T>* current = this->head_;
		for (;current->getNext() != nullptr; current = current->getNext()) {}
		Node<T>* next = new Node<T>(value);
		current->setNext(next);
	}

	const T& pop() {
		T value = this->head_->getValue();
		Node<T>* next = this->head_->getNext();
		delete this->head_;
		this->head_ = next();
		return value;
	}
	
	const T& peek() {
		return this->head_->getValue();
	}
};

int main(int argc, char** argv) {
	Queue<int> queue;
	queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);
	printf("%i\n", queue.peek());
}
