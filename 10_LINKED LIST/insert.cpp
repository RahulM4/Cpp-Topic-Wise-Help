
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// Insert node at tail
void insertTail(Node *&head, int val)
{
    Node *node1 = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = node1;
        return;
    }

    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node1;
}
// Insert node at head
void insertHead(Node* &head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//Search in linked list

bool searchKey(Node* head, int key)
{
        Node * temp =head;
        while (temp != NULL)
        {
            if(temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
}

int main()
{

    Node *head = NULL;
    insertTail(head, 10);
    insertTail(head, 20);
    insertTail(head, 40);
    insertHead(head, 50);
    insertTail(head, 60);
    insertHead(head, 30);
    printList(head);
    cout<<boolalpha<<searchKey(head,30)<<endl;
    cout<<boolalpha<<searchKey(head,100);
}