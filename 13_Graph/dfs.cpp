#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
const int N = 1e7 + 4;
const int MOD = 1e9 + 4;
class ListNode
{
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



void dfs(int node , vector<int> &vis, vector<int> adj[],vector<int> &storedsf) 
{
    storedsf.push_back(node);
    vis[node]=1;

    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            dfs(it, vis, adj, storedsf);
        }
    }
}

vector<int> dfsGraph(int v, vector<int> adj[])
{
    vector<int> storedfs, vis(v+1,0);

    for(int i=1; i<=v; i++)
    {
        if(!vis[i])
        {
            dfs(i, vis, adj, storedfs);
        }
    }
    return storedfs;
}






int main()
{
    

}