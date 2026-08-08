class Solution {
public:
bool dfs(int node,vector<bool> &pvis, unordered_map<int, list<int>> &adj,  unordered_map<int, bool> &vis, stack<int> &s) {
    vis[node] = 1;
    pvis[node] = true;
    for(auto i: adj[node]) {
        if(!vis[i]) {
           if(dfs(i,pvis, adj, vis, s)){
            return true;
           }
        } else if(pvis[i]) {
            return true;
        }
    }
    pvis[node] = false;
    s.push(node);
    return false;
}
    vector<int> findOrder(int V, vector<vector<int>>& arr) {
      int n = arr.size();
      unordered_map<int, list<int>> adj;
      unordered_map<int, bool> vis;
      vector<bool> pvis(V, false);
      for(int i = 0; i<n; i++) {
      int u = arr[i][0];
      int v = arr[i][1];
      adj[v].push_back(u); 
    }
    stack<int> s;
    for(int i = 0; i<V; i++) {
        if(!vis[i]) {
            if(dfs(i,pvis, adj, vis, s)){
                return {};
            }
        }
    }
    vector<int> ans;
    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
    }
};