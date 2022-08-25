#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
const int N = 1e7;

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