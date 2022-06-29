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

void insertTail(ListNode *&head, int val)
{
    ListNode *node = new ListNode(val);
    ListNode *temp = head;
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
//itrative 
// int len(ListNode* head)
// {
//     int cnt =0;
//     while(head !=NULL)
//     {
//        cnt++;
//        head =head-> next;

//     }
//     return cnt;
// }
//recursive
int len(ListNode* head)
{
    
    if(head == NULL)
    return 0;
    
    return 1+len(head->next);
}



int main()
{
    ListNode* head =NULL;
    insertTail(head, 20);
    insertTail(head, 20);
    insertTail(head, 20);
    insertTail(head, 20);
    insertTail(head, 20);
    insertTail(head, 20);
    cout<<len(head);

}