#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{

    adj[u].push_back(v);
    adj[v].push_back(u);
}

void prepareAdj(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
    }
}

void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{

    queue<int> q;

    q.push(node);
    visited[node] = true;
    while (!q.empty())
    {
        int front_node = q.front();
        q.pop();
        ans.push_back(front_node);

        // traverse all neighbour of front node

        for (auto i : adjList[front_node])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> BFS(int v, vector<pair<int, int>> edges)
{

    // unordered map
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    
    unordered_map<int, bool> visited;

    prepareAdj(adjList, edges);

    // traverse all the component of graph

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }

    return ans;
}

int main()
{
    int v = 4;

    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    return 0;
}