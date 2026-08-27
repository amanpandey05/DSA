class Solution {
public:

    void dfs(int node, int &timer, int par, unordered_map<int, bool> &vis, vector<int>& disc, vector<int>& low, unordered_map<int, list<int>>& adj, vector<vector<int>>& res) {
        vis[node] = true;
        low[node] = disc[node] = timer++;
        
        for(auto i: adj[node]) {
            
            if(i == par) continue;

            if(!vis[i]) {

                    dfs(i, timer, node, vis, disc, low, adj, res);
                    low[node] = min(low[node], low[i]);

                    if(low[i] > disc[node]) {
                        vector<int> ans;
                        ans.push_back(node);
                        ans.push_back(i);
                        res.push_back(ans);

                    }
            } 
            else {
                   low[node] = min(low[node], disc[i]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& edges) {
        unordered_map<int, list<int>> adj;
        for(int i = 0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        int timer = 0;
        vector<int> disc(n);
        vector<int> low(n);
        unordered_map<int, bool> vis;
        int par = -1;
        
        vector<vector<int>> res;

        for(int i = 0; i<n; i++) {
            disc[i] = -1;
            low[i] = -1;
        }

        for(int i = 0; i<n; i++) {
            if(!vis[i]) {
                dfs(i, timer, par, vis, disc, low, adj, res);
            }
        }
        return res;
    }
};