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

// RECURSIVE METHOD
//  Node *reverseList(Node *head)
//  {
//      if(head == NULL)
//      {
//          return NULL;
//      }

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

// ITRATIVE METHOD
Node *reverseList(Node *head)
{
    Node *newHead = NULL;
    while (head != NULL)
    {
        Node *temp = head->next;
        head->next = newHead;
        newHead = head;
        head = temp;
    }
    return newHead;
}

void reverseList1(Node *head)
{
    Node *current = head;
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *reverseInGroupK(Node *head, int k)
{
    // base case
    if (!head)
        return NULL;
    Node *current = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
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

Node *mergeTwoLists(Node *l1, Node *l2)
{

    if (l1 == NULL)
    {
        return l2;
    }

    if (l2 == NULL)
    {
        return l1;
    }

    if (l1->data <= l2->data)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }

    else
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

bool isPalindrome(Node *head)
{
    int n = 0;
    auto *ptr = head;
    vector<int> revList;

    while (head)
    {
        revList.push_back(head->data);
        head = head->next;
        ++n;
    }

    if (n < 2)
        return true;
    int x = n >> 1;

    while (--n >= x)
    {
        if (ptr->data != revList[n])
            return false;
        ptr = ptr->next;
    }

    return true;
}

Node *removeDuplicates(Node *head)
{
    unordered_map<int, bool> track;
    Node *temp = head;
    while (temp)
    {
        if (track.find(temp->data) == track.end())
        {
            cout << temp->data << " ";
        }
        track[temp->data] = true;
        temp = temp->next;
    }
    return head;
}

Node *deleteDuplicates(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }
        else
            temp = temp->next;
    }
    return head;
}

Node *reverseDLinkedList(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *head1 = NULL;
    Node *head2 = NULL;
    insertTail(head, 10);
    insertTail(head, 20);
    insertTail(head, 30);
    insertTail(head, 40);
    insertTail(head, 50);
    // insertTail(head, 40);
    // insertTail(head, 30);
    // insertTail(head, 20);
    // insertTail(head, 10);
    // insertTail(head, 100);
    // reverseList(head);
    // head = mergeTwoLists(head1, head2);
    // head1 = removeDuplicates(head);
    // cout << isPalindrome(head1);
    //  PrintList(head);
    head1 = reverseDLinkedList(head);
    PrintList(head);
}