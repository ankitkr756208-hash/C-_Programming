#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n = 6; // number of nodes
    vector<vector<int>> adj(n);

    // Example graph (undirected)
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {2};
    adj[5] = {3};

    
    vector<int> status(n, -1);

    queue<int> q;

    
    status[3] = 0;   
    q.push(3);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (status[neighbor] == -1) {   
                status[neighbor] = status[node] + 1;
                q.push(neighbor);
            }
        }
    }

    // print status array
    cout << "Status / Distance from node 3:\n";
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << " -> " << status[i] << endl;
    }

    return 0;
}
