class Solution {
public:
void dfs(int node,int par, vector<int>& parent, int& timer, vector<int>& disc, vector<int>& low, unordered_map<int, bool>& vis,  unordered_map<int, list<int>>& adj, vector<int>& res) {
    vis[node] = true;
    disc[node] = low[node] = timer++;
   
    for(auto i: adj[node]) {
        if(i==par) continue;
        if(!vis[i]) {
            parent[i] = node;
            dfs(i, node,parent, timer, disc, low, vis, adj, res);
            low[node] = min(low[node], low[i]);
            
        } else {
            low[node] = min(low[node], disc[i]);
            if(disc[i] < disc[node]) {

                int t = node;
                res.push_back(t);
                while(t!= i) {
                    t = parent[t];
                    res.push_back(t);
                }
            }
        }
    }
   
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        unordered_map<int, list<int>> adj;
        int n = edges.size();
        for(int i = 0; i<n; i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int timer = 0;
        vector<int> disc(n+1, -1);
        vector<int> low(n+1, -1);
        unordered_map<int, bool> vis;
        vector<int> res;
        vector<int> parent(n+1, -1);

        for(int i = 1; i<=n; i++) {
            if(!vis[i]) {
                dfs(i, -1, parent, timer, disc, low, vis, adj, res);
            }
        }
        vector<int> inC(n+1, 0);
         for(auto i: res) 
            {
                inC[i] = 1;
                }

            for(int i = n-1; i>=0; i--) {
                int u = edges[i][0];
                int v = edges[i][1];

                if(inC[u] && inC[v]) {
                    return edges[i];
                }
            }
            return {};
        }
};