#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};
// Insert node at tail
void insertTail(ListNode *&head, int val)
{
    ListNode *node1 = new ListNode(val);
    ListNode *temp = head;
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
void insertHead(ListNode *&head, int val)
{
    ListNode *temp = new ListNode(val);
    temp->next = head;
    head = temp;
}
//print list
void PrintList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
//delete element from list
void deleteNode(ListNode *&head, int val)
{
    //*node = *node->next ; code1

    // if(node->next == NULL) //code2
    // {
    //   delete node;
    // }
    // swap(node-> val , node->next ->val);
    // ListNode * temp = node->next;
    // node->next = node->next->next;
    // delete temp;

    // node ->val = node->next->val;  // code3
    // node->next = node->next->next;  // o(1)
    ListNode *temp = head;
    while (temp->next->val != val)
    {
        temp = temp->next;
    }
    ListNode *node = temp->next;
    temp->next = temp->next->next;
    delete node;
}
//delete head 
void deleteatHead(ListNode *&head)
{
    ListNode *node = head;
    head = head->next;
    delete node;
}

//driver code
int main()
{
    ListNode *head = NULL;
    int n;
    int d;
    cin >> n >> d;
    while (n--)
    {
        int x;
        cin >> x;
        insertTail(head, x);
    }
    PrintList(head);
    deleteNode(head, d);
    PrintList(head);
    deleteatHead(head);
    PrintList(head);
}