class Solution {
public:
void dfs(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis){
    vis[node] = 1;
    for(auto i: adj[node]) {
        if(!vis[i]) {
            dfs(i, adj, vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& arr) {
       unordered_map<int, list<int>> adj;
       unordered_map<int, bool> vis;
       int n = arr.size();
       int cnt = 0;
      for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (arr[i][j] == 1 && i != j) {
            adj[i].push_back(j);
        }
    }
}
       for(int i = 0; i<n; i++) {
        if(!vis[i]) {
            dfs(i, adj, vis);
            cnt++;
        }
       } 
       return cnt;
    }
};