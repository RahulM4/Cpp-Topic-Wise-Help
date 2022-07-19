#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
const int N = 1e7 + 4;
const int m = 1e9 + 4;
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
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int countDigit(ll n)
{
    ll cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return b;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
class DListNode
{
    ll data;
    DListNode *left;
    DListNode *right;

    DListNode(ll val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void cforce()
{
    ll n;
    cin >> n;
    if (n % 2)
    {
        if (n > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    else
    {
        if (!(n & (n - 1)))
        {
            cout << n + 1 << endl;
        }
        else
        {
            cout << (n & ~(n - 1)) << endl;
        }
    }
}

void InsertHead(ListNode *&head, int x)
{
    ListNode *temp = new ListNode(x);
    temp->next = head;
    head = temp;
}
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
void Print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int len(ListNode *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
ListNode *deletefromEND(ListNode *A, int B)
{ // dummy_node
    // ListNode *dummy = new ListNode(0);
    // dummy->next = head;
    // ListNode *f = dummy, *s = dummy;
    // int i = 1;
    // while (i <= n + 1)
    // {
    //     f = f->next;
    //     i++;
    // }
    // while (f->next != NULL)
    // {
    //     f = f->next;
    //     s = s->next;
    // }

    // s->next = s->next->next;
    // return dummy->next;

    // calculate length of linked list
    ListNode *slow = A;
    ListNode *fast = A;
    int count = 0;
    if (B == 0)
    {
        B++;
    }
    while (count < B && fast->next != NULL)
    {
        fast = fast->next;
        count++;
    }
    if (fast->next == NULL)
    {
        return slow->next;
    }
    else
    {
        while (fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
    }
    return A;
}

void deleteatHead(ListNode *&head)
{
    ListNode *node = head;
    head = head->next;
    delete node;
}

// Two Pointer method
ListNode *middleNode(ListNode *head)
{
    ListNode *s = head, *f = head;
    while (f and f->next)
    {
        s = s->next;
        f = f->next->next;
    }
    return s;
}

int main()
{
    fio;
    ll t;
    ListNode *head = NULL;
    InsertTail(head, 10);
    InsertTail(head, 20);
    InsertTail(head, 30);
    InsertTail(head, 40);
    InsertTail(head, 50);
    deletefromEND(head, 5);
    Print(head);
    // cout<<middleNode(head)->val;
}