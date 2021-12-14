
#include<iostream>
#define MAXSIZE 10

class MyQueue
{
private:
	int front = -1;
	int rear = -1;
	int a[MAXSIZE];
public:
	MyQueue() {
		front = -1;
		rear = -1;
	}
	bool IsEmpty() {
		if (front == -1 && rear == -1) return true;
		return false;
	}

	void Enqueue(int x) {
		if (front == (rear + 1) % sizeof(a)) {
			return;
		}
		else if (IsEmpty()) {
			front = 0;
			rear = 0;
		}
		else {
			rear = (rear + 1) % sizeof(a);
		}
		a[rear] = x;

	}

	void Dequeue() {
		if (IsEmpty()) {
			return;
		}
		else if (front == rear) {
			front = -1;
			rear  = -1;
		}
		else {
			front = (front + 1) % sizeof(a);
		}
	}

	int Front() {
		return a[front];
	}

	void Print() {
		for (const auto& s : a) {
			std::cout << s << " ";
		}
		std::cout << std::endl;
	}
};

int main() {
	std::cout << "asdsad";
	MyQueue myqueue;
	myqueue.Enqueue(1);
	myqueue.Enqueue(15);
	myqueue.Enqueue(12);
	myqueue.Enqueue(13);
	myqueue.Enqueue(14);
	myqueue.Print();
	return 0;
};