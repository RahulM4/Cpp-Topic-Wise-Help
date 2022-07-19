#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define f first
#define s second
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

void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<int> adj[], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << " Vertex " << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        cout << endl;
    }
}

// Tc -> o(E+N)  and SC ->  O(E+N) +O(N)+O(N)
bool checkCycle(int s, int v, vector<int> adj[], vector<int> &vis)
{
    queue<pair<int, int>> q;
    vis[s] = true;

    q.push({s, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = true;
                q.push({it, node});
            }
            else if (parent != it)
            {
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int v, vector<int> adj[])
{ 
    vector<int> vis(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            if (checkCycle(i, v, adj, vis))
                return true;
        }
    }
    return false;
}

int main()
{
    int v = 11;
    vector<int> adj[v];

    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 1);

    cout << isCycle(v, adj);
}