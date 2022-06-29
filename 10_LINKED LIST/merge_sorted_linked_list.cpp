#include <bits/stdc++.h>
using namespace std;

class Node
{
    // Declaring data members as punlic.
public:
    int data;   // store data of Node,
    Node *next; // store address of next Node

    // create Constructor
    Node(int x)
    {
        this->data = x;
        next = NULL;
    }
};

//RECURSIVE METHOD
// Node *reverseList(Node *head) 
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }

//     reverseList(head->next);

//     cout<<head->data<<" ";
// }
void insertTail(Node *&head, int val)
{
    Node *node = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = node;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

//ITRATIVE METHOD
Node * reverseList(Node* head)
{
    Node* newHead = NULL;
    while(head != NULL)
    {
        Node* temp =head-> next;
        head->next =newHead;
        newHead =head;
        head =temp;
    }
    return newHead;
}

void  reverseList1(Node* head)
{
    Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
}

void PrintList(Node *head)
{
    Node *temp = head; // temp pointer
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

Node* reverseInGroupK(Node* head, int k)
{
    // base case
    if (!head)
        return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
 
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
 
    if (next != NULL)
        head->next = reverseInGroupK(next, k);
 
    return prev;
}

Node* mergeTwoLists(Node* l1, Node* l2) {    
          
		if(l1 == NULL)
        {
			return l2;
		}

		if(l2 == NULL)
        {
			return l1;
		} 
	
		if(l1 -> data <= l2 -> data)
        {
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}

		else
        {
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;    
        }
    }
int main()
{
    Node* head =NULL;
    Node* head1 =NULL;
    Node* head2 =NULL;
    insertTail(head1, 10);
    insertTail(head2, 20);
    insertTail(head1, 30);
    insertTail(head2, 40);
    insertTail(head1, 50);
    insertTail(head2, 60);
    insertTail(head1, 70);
    insertTail(head2, 80);
    insertTail(head1, 90);
    //insertTail(head, 100);
    //reverseList(head);
    head = mergeTwoLists(head1, head2);
    PrintList(head);
    
}