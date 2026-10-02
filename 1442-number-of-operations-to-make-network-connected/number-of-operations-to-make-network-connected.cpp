class Solution {
public:
int cnt = 0;
void dfs(int node,  unordered_map<int, list<int>>& adj,  unordered_map<int, bool>& vis) {
 vis[node] = 1;
for(auto i: adj[node]) {
if(!vis[i]) {
    dfs(i, adj, vis);
} 
}
}
    int makeConnected(int V, vector<vector<int>>& connections) {
        int n = connections.size();
        if(n < V-1) return -1;
        unordered_map<int, list<int>> adj;
        unordered_map<int, bool> vis;
        for(int i = 0; i<n; i++) {
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }
        for(int i = 0; i<V; i++) {
            if(!vis[i]) {
                cnt++;
                dfs(i, adj, vis);
            }
        }
        return cnt-1;
    }
};