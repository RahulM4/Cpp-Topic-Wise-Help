#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    // ListNode(int val)
    // {
    //     this->val = val;
    //     next = NULL;
    // }
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode(int x) : val(x), next(nullptr) {}

};
void InsertTail(ListNode *&head, int x)
{
    ListNode *newNode = new ListNode(x);

    ListNode *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
//print linked list
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


//reverse linked lsit
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
//Add two numbers represented by linked lists from geetforgeeks
ListNode *addTwoNumbers(ListNode *l11, ListNode *l22)
{
    ListNode *l1 = reverseList(l11), *l2 = reverseList(l22);
    ListNode *head = NULL;
    ListNode *temp = NULL;
    int carry = 0;
    while (l1 != NULL || l2 != NULL)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        if (head == NULL)
        {
            head = new ListNode(sum);
            temp = head;
        }
        else
        {
            temp->next = new ListNode(sum);
            temp = temp->next;
        }
    }
    if (carry > 0)
    {
        temp->next = new ListNode(carry);
    }
    ListNode * ans  =reverseList(head);
}



int main()
{
    //tale input two linked list
    ListNode *l1 = NULL;
    ListNode *l2 = NULL;
    // InsertTail(l1, 1);
    // InsertTail(l1, 2);
    // InsertTail(l1, 3);
    InsertTail(l1, 4);
    InsertTail(l1, 5);


    // InsertTail(l2, 6);
    // InsertTail(l2, 7);
    // InsertTail(l2, 8);
    // InsertTail(l2, 9);
    // InsertTail(l2, 0);
    InsertTail(l2, 3);
    InsertTail(l2,4);
    InsertTail(l2,5);
    //print linked list
    PrintList(l1);
    PrintList(l2);
    //add two numbers represented by linked lists
    ListNode *result = addTwoNumbers(l1, l2);
    PrintList(result);

    //reverse linked lsit
    // ListNode *result1 = reverseList(result);
    // PrintList(result1);


}