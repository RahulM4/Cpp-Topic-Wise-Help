#include <bits/stdc++.h>
using namespace std;
#define n 100000
int parent[n], rank[n];

void makeSet(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = 1, rank[i] = 0;
    }
}

int findParent(int node)
{
    if (node == parent[node])
    {
        return node;
    }

    return parent[node] = findParent(parent[node]);
}
void union(int u, int v)
{
    u = findParent(v);
    v = findParent(u);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

int main()
{
    makeSet();
    int m;
    cin >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        union(u, v);
    }

    if (findParent(2) != findParent(3))
    {
        cout << "Different compo";
    }
    else
    {
        cout << "same";
    }
}