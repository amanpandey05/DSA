class Solution {
public:
typedef tuple<int, int, int> t;
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        unordered_map<int, list<pair<int, int>>> adj;
        for(int i = 0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
        }
            vector<vector<int>> res(n, vector<int> (k+1, INT_MAX));
            priority_queue<t, vector<t>, greater<t>> pq;
            pq.push({0, 0, 1});
            while(!pq.empty()) {
                auto[d, node, cnt] = pq.top();
                pq.pop();
                if(d > res[node][cnt]) continue;
                if(node == n-1) return d;

                for(auto &i: adj[node]) {
                    int adjnode = i.first;
                    int wt = i.second;
                    int newcnt = (labels[adjnode] == labels[node]) ? cnt+1 : 1;
                    int newd = d + wt;
                    if(newcnt <= k && newd < res[adjnode][newcnt]) {
                        res[adjnode][newcnt] = newd;
                        pq.push({newd, adjnode, newcnt});
                    }
                    
                }
            }
            return -1;
    }
};