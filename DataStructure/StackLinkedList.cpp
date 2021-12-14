
#include <iostream>
#include <stdio.h>

struct Node
{
	int data;
	Node* link;
};

void Push(int x, Node** top) {
	Node* temp = new Node;
	temp->data = x;
	temp->link = *top;
	*top = temp;
}

void Pop(Node** top) {
	Node* temp;
	if (*top == NULL) return;
	temp = *top;
	*top = (*top)->link;
	delete temp;
}
//int main()
//{
//	Node* top = NULL;
//	Push(1,&top);
//
//}