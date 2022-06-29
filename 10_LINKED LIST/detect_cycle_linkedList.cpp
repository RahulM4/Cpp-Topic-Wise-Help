#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    int flag;

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

// 1. Using Hashing  tc-> o(n) , sc -> o(n)
bool isCycle(ListNode *head)
{
    unordered_set<ListNode *> st;
    while (head != NULL)
    {
        if (st.find(head) != st.end())
        {
            return true;
        }

        st.insert(head);
        head = head->next;
    }
    return false;
}
// 2. Modifying Linked list --  tc -> o(n),sc-> o(1)
bool detectCycle(ListNode *head)
{
    while (head != NULL)
    {
        if (head->flag == 1)
        {
            return true;
        }
        head->flag = 1;
        head = head->next;
    }
    return false;
}
// 3.  Floyd’s Cycle-Finding Algorithm (two pointer -> ->) tc -> o(n),sc-> o(1)
bool FloydetectCycle(ListNode *head)
{
    ListNode *slow = head, *fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ListNode *head = NULL;
    insertTail(head, 20);
    insertTail(head, 30);
    insertTail(head, 40);
    insertTail(head, 50);
    insertTail(head, 60);
    insertTail(head, 100);
    //head->next->next = head;                    // 20-30-40-50-60-100
    cout << boolalpha << isCycle(head) << endl; //  40 points to 20
    cout << boolalpha << detectCycle(head) << endl;
    cout << boolalpha << FloydetectCycle(head) << endl;
    
}