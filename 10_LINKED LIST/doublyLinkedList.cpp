#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *prev;
    ListNode *next;
    ListNode(int val)
    {
        this->data = val;
        prev = NULL;
        next = NULL;
    }
};

// INSERT at head
void insertHead(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);
    newNode->next = head;
    if (head != NULL)
    {
        head->prev = newNode;
    }

    head = newNode;
}
//INSERT at tail
void inserTail(ListNode *&head, int val)
{
    if (head == NULL)
    {
        insertHead(head, val);
        return;
    }
    ListNode *newNode = new ListNode(val);
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
//Print list
void printList(ListNode *head)
{
    ListNode *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void deleteHead(ListNode *&head)
{
    ListNode* todelete =head;
    head = head->next;
    head->prev =NULL;

    delete todelete;
}
//elete node
void deletionOfNode(ListNode* &head, int pos)
{
    if(pos ==1)
    {
        deleteHead(head);
        return;
    }
     ListNode* temp=head;
     int cnt =1;
     while(temp !=NULL && cnt!=pos)
     {
         temp = temp->next;
         cnt++;
     }

     temp -> prev->next= temp->next;
     if(temp->next != NULL)
     temp->next->prev =temp -> prev;

     delete temp;
}
int main()
{
    ListNode *head = NULL;
    inserTail(head, 10);
    inserTail(head, 20);
    inserTail(head, 30);

    insertHead(head, 100);
    insertHead(head, 200);
    insertHead(head, 300);
    deletionOfNode(head, 1);
    deleteHead(head);
    printList(head);
}