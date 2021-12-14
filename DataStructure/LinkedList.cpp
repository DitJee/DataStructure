

#include <iostream>
struct Node
{
	int data;
	Node* next;
};

void Insert(int x, Node** head) {
	Node* temp = new Node;
	temp->data = x;
	temp->next = *head;
	if (*head == NULL)  *head = temp;
	else {
		Node* temp1 = *head;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
}

void ReCurPrint(Node* head) {
	if (head == NULL) return;
	printf("%d \n", head->data);
	ReCurPrint(head->next);

}

void ReversePrint(Node* head) {
	if (head == NULL) return;
	
	ReversePrint(head->next);
	printf("%d \n", head->data);

}

void Print( Node* head) {
	while (head != NULL)
	{
		printf("The Node is %d \n", head->data);
		head = head->next;
	}
}

void InsertAt(Node** head, int data, int n) {
	Node* temp1 = new Node;
	temp1->data = data;
	temp1->next = NULL;
	if (n == 1) {
		temp1->next = *head;
		*head = temp1;
		return;
	}
	Node* temp2 = *head;
	for (size_t i = 0; i < n-2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

}

void Delete(Node** head, int n) {
	Node* temp1 = *head;
	if (n == 1) {
		*head = temp1->next;
		delete temp1;
		return;
	}
	for (size_t i = 0; i < n-2; i++)
	{
		temp1 = temp1->next;
	} // temp1 is now pointing to n-1
	Node* temp2 = temp1->next; // nth node
	temp1->next = temp2->next; // point to n+1
	delete temp2;
}

void Reverse(Node** head) {
	Node* current, *next, *prev;
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

void ReReverse(Node* p, Node** head) {
	
	if (p->next == NULL) {
		*head = p;
		return;
	}
	ReReverse(p->next, head);
	Node* q = p->next;
	q->next = p;
	p->next = NULL;
}

//int main()
//{
//	//Node* head = NULL;
//	//printf("How many numbers? \n");
//	//int n,x;
//	//scanf_s("%d", &n);
//	//for (size_t i = 0; i < n; i++)
//	//{
//	//	printf("enter the number \n");
//	//	scanf_s("%d", &x);
//	//	Insert(x, &head);
//	//	Print(head);
//	//}
//
//	Node* head = NULL;
//	InsertAt(&head, 2, 1);
//	InsertAt(&head, 3, 2);
//	InsertAt(&head, 4, 1);
//	InsertAt(&head, 5, 2);
//	InsertAt(&head, 999, 3);
//	
//	Print(head);
//	printf("\n");
//
//	Delete(&head, 2);
//	Print(head);
//	printf("\n");
//
//	Delete(&head, 1);
//	Print(head);
//	printf("\n");
//
//	Reverse(&head);
//	Print(head);
//	printf("\n");
//
//	ReCurPrint(head);
//	printf("\n");
//
//	ReversePrint(head);
//	printf("\n");
//
//	ReReverse(head, &head);
//	ReCurPrint(head);
//	printf("\n");
// }


