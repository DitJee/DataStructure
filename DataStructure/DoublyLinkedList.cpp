#include <iostream>

struct Node {
	int data;
	Node* next;
	Node* prev;
};

Node* GetNewNode(int x) {
	Node* newNode = new Node;
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void InsertAtHead(int x, Node** head) {
	Node* newNode = GetNewNode(x);
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	else {
		(*head)->prev = newNode;
		newNode->next = *head;
		*head = newNode;
	}

}
void PrintZ(Node* head) {
	while (head != NULL)
	{
		printf("The Node is %d \n", head->data);
		head = head->next;
	}
}

void ReversePrintZ(Node* head) {
	if (head == NULL) return;
	// go to the last node
	while (head->next != NULL)
	{
		head = head->next;
	}

	// traverse back
	printf("reverse ");
	while (head != NULL)
	{
		printf(": %d", head->data);
		head = head->prev;
	}
	printf("\n");
}


//int main()
//{
//	Node* head = NULL;
//	InsertAtHead(2, &head); PrintZ(head); ReversePrintZ(head);
//	InsertAtHead(4, &head); PrintZ(head); ReversePrintZ(head);
//	InsertAtHead(5, &head); PrintZ(head); ReversePrintZ(head);
//
//}