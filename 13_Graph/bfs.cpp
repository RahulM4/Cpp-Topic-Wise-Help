#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
const int N = 1e7;

// Tc -> o(E+V)  and SC ->  O(E+V) +O(n)+O(n)

vector<int> bfsGraph(int v, vector<int> adj[])
{
    vector<int> bfs, vis(v + 1, 0);

    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            queue<int> Q;
            Q.push(i);
            vis[i] = 1;
            while (!Q.empty())
            {
                int node = Q.front(); Q.pop();
                bfs.push_back(node);
                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        Q.push(it);
                        vis[i] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}

int main()
{
    int v = 11;
    int edge = 13;
}
