class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        vector<bool> vis(1001, false);
        queue<int> q;
        int ans = 0;
        q.push(start);
        while(!q.empty()) {
            int size = q.size();
            while(size--) {
                int node = q.front();
                q.pop();
                if(node == goal) return ans;
                if(node>1000 || node < 0 || vis[node]) continue;
                vis[node] = true;
                for(int i = 0; i<nums.size(); i++) {
                    int a = node+nums[i] , b = node-nums[i] , c = node^nums[i];
                    for(auto j: {a, b, c}) {
                        q.push(j);
                    }
                }
            }
           ans++; 
        }
        return -1;
    }
};