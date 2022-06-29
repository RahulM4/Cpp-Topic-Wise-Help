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
void PrintList(ListNode *head)
{
    ListNode *temp = head;
    if (temp != NULL)
    {
        return;
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int sum = 0, carry = 0;
    ListNode *head = new ListNode(0);
    ListNode *temp = head;

    while (l1 != NULL || l2 != NULL || carry)
    {
        sum = 0;
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
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
    }
    return head->next;
}

int main()
{
    ListNode *head1= NULL;
    ListNode *head2= NULL;
    ListNode* head =NULL;
    InsertTail(head1, 1);
    InsertTail(head1, 2);
    InsertTail(head1, 3);
    InsertTail(head1, 4);
    InsertTail(head2, 1);
    InsertTail(head2, 2);
    InsertTail(head2, 3);
    InsertTail(head2, 4);
    head =addTwoNumbers(head1, head2);
    PrintList(head);
}