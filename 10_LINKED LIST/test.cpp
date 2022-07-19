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

int minMaxGame(vector<int> &nums)
{
    vector<int> newVector;
    int n = nums.size();
    // vector<pair<int,int>> p;
    while (n != 1)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
                newVector[i] = min(nums[2 * i], nums[2 * i + 1]);
            else
                newVector[i] = max(nums[2 * i], nums[2 * i + 1]);
        }

        nums = newVector;
    }

    return nums[0];
}

int main()
{
    fio;
    ll m;
    cin >> m;
    while (m--)
    {
        ll x,y;
        cin >> x>>y;
        //e+e =e
        //o+o =e
        //o+e =odd
        if(x==1)
        {
            cout<<"YES"<<endl;
        } 
        if(x%2==0 && y%2==0 )
        {
            cout<<"YES"<<endl;
        }
        else if(x%2==0 && (x-y)%2 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
