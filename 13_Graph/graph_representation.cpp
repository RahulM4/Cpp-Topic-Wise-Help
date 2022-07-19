
#include <bits/stdc++.h>
using namespace std;

#define n 5
// //Adjacency matrix
// void addEdge(int graph[][n], int u, int v)
// {
//     graph[u][v] = 1;
// }

// int main()
// {
//     int graph[n][n] = {0};

//     addEdge(graph, 0, 1);
//     addEdge(graph, 0, 4);
//     addEdge(graph, 1, 1);
//     addEdge(graph, 1, 2);
//     addEdge(graph, 1, 3);
//     addEdge(graph, 1, 4);
//     addEdge(graph, 3, 2);
//     addEdge(graph, 3, 4);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << graph[i][j] << "  ";
//         }
//         cout << endl;
//     }
// }

// Adjacency List

void addEdge(vector<int> graph[n], int u, int v)
{
    graph[u].emplace_back(v);
}

int main()
{
    // Array of vectors, every vector represents
    // adjacency list of a vertex
    vector<int> graph[n];

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 3, 2);
    addEdge(graph, 3, 4);
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}