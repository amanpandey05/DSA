class Solution {
public:
void dfs(int node, vector<vector<int>>& adj, vector<int>& t, vector<vector<int>>& ans) {
    int n = adj.size();
    t.push_back(node);
    if(node == n-1) {
        ans.push_back(t);
        t.pop_back();
        return;
    }
    
    for(auto i: adj[node]) {
        dfs(i, adj, t, ans);
       
    }
    t.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> t;
        vector<vector<int>> ans;
        dfs(0, graph, t, ans);
        return ans;
    }
};