// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//     int val;
//     ListNode *next;
//     ListNode(int val)
//     {
//         this->val = val;
//         next = NULL;
//     }
// };
// // Insert node at tail
// void insertTail(ListNode *&head, int val)
// {
//     ListNode *node = new ListNode(val);
//     ListNode *temp = head;
//     if (head == NULL)
//     {
//         head = node;
//         return;
//     }
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = node;
// }
// // Insert node at head
// void insertHead(ListNode *&head, int val)
// {
//     ListNode *temp = new ListNode(val);
//     temp->next = head;
//     head = temp;
// }
// // print list
// void PrintList(ListNode *head)
// {
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// // delete element from list
// void deleteNode(ListNode *&head, int val)
// {
//     ListNode *temp = head;
//     while (temp->next->val != val)
//     {
//         temp = temp->next;
//     }
//     ListNode *node = temp->next;
//     temp->next = temp->next->next;
//     delete node;
// }
// // delete head
// void deleteatHead(ListNode *&head)
// {
//     ListNode *node = head;
//     head = head->next;
//     delete node;
// }
// // length of linked lsit
// int LengthList(ListNode *&head)
// {
//     int len = 0;
//     ListNode *temp = head;
//     while (head != NULL) // while(temp != NULL)
//     {
//         head = head->next; // temp= temp->next;
//         len++;
//     }
//     return len;
// }
// // return intersected node
// int getIntesectionNode(ListNode *head1, ListNode *head2)
// {

//     // Count the number of nodes in both the linked list
//     int l1 = LengthList(head1);
//     int l2 = LengthList(head2);
//     int d = 0;
//     ListNode *ptr1;
//     ListNode *ptr2;
//     // If first is greater
//     if (l1 > l2)
//     {
//         d = l1 - l2;
//         ptr1 = head1;
//         ptr2 = head2;
//     }
//     else
//     {
//         d = l2 - l1;
//         ptr1 = head2;
//         ptr2 = head1;
//     }
//     for (int i = 0; i < d && ptr1; i++) {
//         ptr1 = ptr1->next;
//     }

//     while (ptr1  && ptr2)
//     {
//         if (ptr1 == ptr2)
//             return ptr1->val;

//         // Move both the pointers forward
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }

//     return -1;
// }
// // Intersection Point
// void IntersectionPoint(ListNode *&head1, ListNode *&head2, int pos)
// {
//     pos--;
//     ListNode *temp1 = head1;
//     while (pos--)
//     {
//         temp1 = temp1->next;
//     }
//     ListNode *temp2 = head2;
//     while (temp2->next != NULL)
//     {
//         temp2 = temp2->next;
//     }
//     temp2->next = temp1;
// }
// int main()
// {
//     ListNode *head = NULL;
//     ListNode *head1 = NULL;
//     ListNode *head2 = NULL;
//     // int n;
//     // int d;
//     // cin >> n >> d;
//     // while (n--)
//     // {
//     //     int x;
//     //     cin >> x;
//     //     insertTail(head1, x);
//     //     insertTail(head2, x);
//     // }
//     // insertTail(head, 20);
//     // insertTail(head, 20);
//     // insertTail(head, 20);
//     // insertTail(head, 20);
//     // insertTail(head, 100);
//     // PrintList(head);
//     // cout << LengthList(head);
//     insertTail(head1, 10);
//     insertTail(head1, 20);
//     insertTail(head1, 30);
//     insertTail(head1, 40);
//     insertTail(head1, 50);
//     insertTail(head1, 60);
//     insertTail(head2, 90);
//     insertTail(head2, 100);
//     IntersectionPoint(head1, head2, 3);
//     PrintList(head1);
//     PrintList(head2);
//     cout << getIntesectionNode(head1, head2);
// }

#include <bits/stdc++.h>
using namespace std;
 
// A Linked List Node
struct Node
{
    int data;
    Node* next;


};
 
// Utility function to create a new node with the given data and
// pushes it onto the list's front
void push(Node*& head, int data)
{
    // create a new linked list node from the heap
    Node* newNode = new Node;
 
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
 
// Utility function to find the total number of nodes in a linked list
int size(Node* head)
{
    int nodes = 0;
    for (Node* curr = head; curr != NULL; curr = curr->next) {
        nodes++;
    }
    return nodes;
}
 
// Function to find the intersection point of two linked lists.
// Assume that the first list contains `k` nodes more than the second list
Node* _findIntersection(Node* first, Node* second, int k)
{
    // advance the bigger list by `k` nodes
    for (int i = 0; i < k && first; i++) {
        first = first->next;
    }
 
    // simultaneously move both lists at the same speed until they meet
    while (first && second)
    {
        // if both lists meet any node, then that node is the intersection point
        if (first == second) {
            return first;
        }
 
        // advance both lists by one node
        first = first->next;
        second = second->next;
    }
 
    // return null if both lists don't meet
    return NULL;
}
 
// Function to find the intersection point of two linked lists

 Node* findIntersection(Node* first, Node* second)
{
    // get the difference in the number of nodes in both lists
    int diff = size(first) - size(second);
 
    // if the first list has a smaller number of nodes, exchange both lists
    if (diff < 0) {
        swap(first, second);
    }
 
    // find and return the intersection node
    return _findIntersection(first, second, abs(diff));
}
int main()
{
    // construct the first linked list (1 —> 2 —> 3 —> 4 —> 5 —> null)
    Node* first = NULL;
    for (int i = 70; i > 0; i-=10) {
        push(first, i);
    }
 
    // construct the second linked list (1 —> 2 —> 3 —> null)
    Node* second = NULL;
    for (int i = 30; i > 0; i-=10) {
        push(second, i);
    }
 
    // link tail of the second list to the fourth node of the first list
    second->next->next->next = first->next->next->next;
    cout<<findIntersection(first,second)->data;
    // Node* addr = findIntersection(first, second);
    // if (addr) {
    //     cout << "The intersection point is " << addr->data << endl;
    // }
    // else {
    //     cout << "The lists do not intersect." << endl;
    // }
 
    return 0;
}