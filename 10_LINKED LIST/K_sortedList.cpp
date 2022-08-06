
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define mod 1000000007

// make class for listnode
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//store list values in vector
vector<int> StoreList(vector<ListNode *> &lists)
{
    vector<int> v;
    for (int i = 0; i < lists.size(); i++)
    {
        ListNode *temp = lists[i];
        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
    }

    sort(v.begin(), v.end());
    return v;
}

//make list from vector
ListNode *MakeList(vector<int> &v)
{
    ListNode *head = new ListNode(v[0]);
    ListNode *temp = head;
    for (int i = 1; i < v.size(); i++)
    {
        temp->next = new ListNode(v[i]);
        temp = temp->next;
    }
    return head;

}



class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode*>& lists)
    {
       vector<int> v = StoreList(lists);
         ListNode *head = MakeList(v);
            return head;

    }
};