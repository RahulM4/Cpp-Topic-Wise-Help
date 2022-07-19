#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    
    ListNode *next;
    ListNode(int val)
    {
        this->data = val;
        next = NULL;
    }
};

// INSERT at head
void insertHead(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);
     ListNode * temp = head;
    if(head ==NULL)
    {
        newNode->next =newNode;
        head =newNode;
        return;
    }
   
     
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next=newNode;
    newNode->next =head;
    head =newNode;
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
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next =head;
}
//Print list
void printList(ListNode *head)
{
    ListNode *temp = head;
    do{
        cout<<temp->data<<" ";
        temp =temp->next;
    }while (temp != head);
    cout << endl;
}
void deleteHead(ListNode *&head)
{
    ListNode* temp =head;
    while(temp->next != head)
    {
      temp =temp->next;
    }
    ListNode * todelete =head;
    temp->next =head->next;
    head=head->next;
    delete todelete;
    
}
//deletion
void deletionOfNode(ListNode* &head, int pos)
{
   
    if(pos ==1)
    {
        deleteHead(head);
        return;
    }
     ListNode* temp=head;
     int cnt =1;
     while(temp !=NULL && cnt!=pos-1)
     {
         temp = temp->next;
         cnt++;
     }
     
     ListNode * todelete =temp->next;
     temp->next =temp->next->next;
}
int main()
{
    ListNode *head = NULL;
    inserTail(head, 10);
    inserTail(head, 20);
    inserTail(head, 30);
    inserTail(head, 40);
    insertHead(head, 100);
    deleteHead(head);
    deletionOfNode(head, 2);
    // deleteHead(head);
    printList(head);
}