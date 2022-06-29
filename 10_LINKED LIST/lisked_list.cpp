
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void printList(Node *n)
{
	while (n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;
	Node *fourth = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = fourth;
	fourth->data = 10;
	fourth->next = NULL;

	printList(head);

	return 0;
}
