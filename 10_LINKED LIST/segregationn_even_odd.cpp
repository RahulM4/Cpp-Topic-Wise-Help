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

// leetcode
//  ListNode* oddEvenList(ListNode* head) {
//  if(head==NULL || head->next==NULL || head->next->next==NULL){
//  return head;
//  }

//     //ListNode *odd_head = head;
//     ListNode *odd = head;
//     ListNode *even_head = head->next;
//     ListNode *even = head->next;

//     while(even!=NULL && even->next!=NULL){
//         odd->next = even->next;
//         odd = even->next;
//         even->next = odd->next;
//         even = odd->next;
//     }
//     odd->next = even_head;
//     return head;
// }

ListNode *SegregateEvenOdd(ListNode *head)
{
    ListNode *even = NULL, *odd = NULL, *o = NULL, *e = NULL;
    while (head)
    {
        if (head->val % 2 == 0)
        {
            if (even == NULL)
            {
                even = head;
                e = head;
            }
            else
            {
                e->next = head;
                e = e->next;
            }
        }
        else
        {
            if (odd == NULL)
            {
                odd = head;
                o = head;
            }
            else
            {
                o->next = head;
                o = o->next;
            }
        }
    }
    if (e)
    {
        e->next = odd;
    }
    if (o)
    {
        o->next = NULL;
    }
    if (even)
    {
        return even;
    }
    return odd;
}

int main()
{
    fio;
    ll t;
    cin >> t;
}