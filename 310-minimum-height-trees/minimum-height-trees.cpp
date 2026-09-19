class Solution {
public:
// void dfs(int node, unordered_map<int, list<int>>& adj, unordered_map<int, bool>& vis) {
//     vis[node] = true;
//     for(auto i: adj[node]) {
//         if(!vis[i]) {
//             dfs(i, adj, vis, h+1);
//         }
//     }
// }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        unordered_map<int, list<int>> adj;
        unordered_map<int, bool> vis;
        vector<int> in(n);
        if(edges.size()  == 0) return {0};
        for(int i = 0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            in[v]++;
            in[u]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> q;
        for(int i = 0; i<n; i++) {
           if(in[i] == 1) {
            q.push(i);
           } 
        }
     while(n>2) {
        int size = q.size();
        n-=size;
    while(size--) {
        int u = q.front();
        q.pop();
        for(auto i: adj[u]) {
            in[i]--;
            if(in[i] == 1) {
                q.push(i);
            }
        }
    }
     }
    while(!q.empty()) {
        ans.push_back(q.front());
        q.pop();
    }
        return ans;
    }
};