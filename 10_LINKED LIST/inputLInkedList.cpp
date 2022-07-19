
#include <bits/stdc++.h>
using namespace std;
// class node
class node
{
public:
    int data;   // store data of Node,
    node *next; // store address of next node

    // create Constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
// Print Linked List
void PrintList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Insert node at tail
void insertTail(node *&head, int val)
{
    node *node1 = new node(val);
    node *temp = head;
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
// Node *InsertElement()
// {
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     Node *tail=NULL;
//     while (data != -1)
//     {
//         Node*newNode = new Node(data);
//         if(head ==NULL)
//         {
//             head =newNode;
//             tail =newNode;
//         }
//         else{
//             tail-> next = newNode;
//             tail = tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        insertTail(head, x);
    }
    PrintList(head);
}