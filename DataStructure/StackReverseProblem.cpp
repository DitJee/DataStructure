
#include <iostream>
#include <stack>
#include <stdio.h>


struct Node
{
	int data;
	Node* link;
};
void Reverse(char *C, int n) {
	std::stack<char> S;
	for (size_t i = 0; i < n; i++)
	{
		S.push(C[i]);
	}

	for (size_t i = 0; i < n; i++)
	{
		C[i] = S.top();
		S.pop();
	}
}
Node* head = NULL;
void ReverseLinkedList() {
	if (head == NULL) return;
	std::stack<Node*> S;
	Node* temp = head;
	while (temp!=NULL)
	{
		S.push(temp);
		temp = temp->link;
	}
	// set new head
	temp = S.top(); head = temp; S.pop();
	while (!S.empty())
	{
		temp->link = S.top();
		S.pop();
		temp = temp->link;

	}
	temp->link = NULL;
}
//int main()
//{
//	char C[51];
//	std::cout << "enter a string: ";
//	std::cin >> C;
//	Reverse(C, std::strlen(C));
//	std::cout << "Reversed => " << C;
//}