#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
const int N = 1e7 + 4;
const int M = 1e9 + 4;
//singly linked list
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode * random;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
        random=NULL;
    }
};

//check prime numbers
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
//Count the digits
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
// gcd 
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
//doubly linked list
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
//codeforce
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
//Insert from head
void InsertHead(ListNode *&head, int x)
{
    ListNode *temp = new ListNode(x);
    temp->next = head;
    head = temp;
}
// Insert at from tail
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
//print
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
// length of linked list
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
//delete head
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
// Swap pair wise (recursive) o(n)
ListNode* swapPairs(ListNode* head) {
    if(head && head->next){
        swap(head->val, head->next->val);
        swapPairs(head->next->next);
      } 

        return head;
      
}
//Itrative to swap pair wise o(n)
ListNode* swapPair(ListNode* head) {
    ListNode* temp =head; 
    while(temp && temp->next){
        swap(temp->val, temp->next->val);
       temp = temp->next->next;
      } 
        return head;  
}

void CopyListRandomPOinter(ListNode* head)
{
    ListNode *itr=head, *front=head;
    while(itr!=NULL){
        front = itr->next;
        ListNode* copy = new ListNode(itr->val);
        itr->next = copy;
        copy->next = front;
        itr = front;    
    }
    itr = head;
    while(itr!=NULL){
        if(itr->random!=NULL)
            itr->next->random = itr->random->next;
        itr = itr->next->next;
    }
    itr=head;
    ListNode* newhead = new ListNode(0);
    ListNode* temp = newhead;
    while(itr!=NULL){
        front = itr->next->next;
        temp->next = itr->next;
        itr->next = front;
        temp = temp->next;
        itr = itr->next;
    }
    ListNode *temp1 = newhead->next;
    while (temp1 != NULL)
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    cout << endl;

}

int main()
{
    FIO;
    ListNode *head = NULL;
    InsertTail(head, 10);
    InsertTail(head, 20);
    InsertTail(head, 30);
    InsertTail(head, 40);
    InsertTail(head, 50);
    InsertTail(head, 60);
    CopyListRandomPOinter(head);
    Print(head);
    
}