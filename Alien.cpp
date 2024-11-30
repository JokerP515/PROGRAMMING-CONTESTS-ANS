#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#pragma GCC optimize(2)
#define endl '\n'

void bfs(int node, vector<vector<int>>& adj, vector<bool>& visited, int& size) {
    queue<int> q;
    q.push(node);
    visited[node] = true;
    size = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        size++;

        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1); // adjacency list
    vector<bool> visited(n + 1, false);

    // Reading edges
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int res = 0;

    // Traversing all connected components
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int size = 0;
            bfs(i, adj, visited, size);
            res = max(res, size); //The friend that has most connections is the answer
        }
    }

    cout << res << endl;

    return 0;
}
