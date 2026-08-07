class Solution {
public:

bool dfs(int node,vector<bool> &pvis,  unordered_map<int, list<int>>& adj,  unordered_map<int, bool> &vis) {

    vis[node] = 1;
    pvis[node] = true;

    for(auto i: adj[node]) {
        if(!vis[i]) {
           if(dfs(i,pvis, adj, vis)) {
            return true;
           } 
          
        } else if(pvis[i]){
                return true;
           }
        
    }
    
    pvis[node] = false;
        return false;
}
    bool canFinish(int num, vector<vector<int>>& arr) {
       int n = arr.size();
       unordered_map<int, list<int>> adj;
       unordered_map<int, bool> vis;
       vector<bool> pvis(num, false);

      for (auto &p : arr) {
    adj[p[1]].push_back(p[0]);
}
        for(int i = 0; i<num; i++) {
            if(!vis[i]) {
                if(dfs(i,pvis, adj, vis)) return false;
                  
            }
          
        }
        return true;
    }
};