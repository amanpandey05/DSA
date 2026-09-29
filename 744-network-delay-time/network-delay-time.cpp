class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int V, int k) {
        unordered_map<int, list<pair<int, int>>> adj;
   
   for(int i = 0; i<times.size(); i++) {
       
       int u = times[i][0];
       int v = times[i][1];
       int w = times[i][2];
       adj[u].push_back(make_pair(v,w));
   }
        vector<int> dist(V+1);
        
        for(int i = 0; i<=V; i++)
        dist[i] = INT_MAX;
        
        set<pair<int, int>> st;
        
        dist[k] = 0;
        st.insert(make_pair(0, k));
        
        while(!st.empty()) {
            
           auto top = *st.begin();
           int nodeD = top.first;
           int node = top.second; 
            
            // remove top record
            
            st.erase(st.begin());
            
            for(auto i: adj[node]) {
                if(nodeD + i.second < dist[i.first]) {
                    auto rec = st.find(make_pair(dist[i.first], i.first));
                    
                    if(rec != st.end()) {
                        st.erase(rec);
                    }
                    
                    dist[i.first] = nodeD + i.second;
                    
                    st.insert(make_pair(dist[i.first], i.first));
                }
            }
        }
       int ans = 0;
        for (int i = 1; i <= V; i++) {
            if (dist[i] == INT_MAX)
        return -1;

            ans = max(ans, dist[i]);
            }
            return ans;
            }
};