class Solution {
public:
    int minimumCardPickup(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int ans = INT_MAX;
        for(int i = 0; i<n; i++) {
            if(mp.count(arr[i])) {
                ans=min(ans, (abs(i-mp[arr[i]]) +1));
            }
            mp[arr[i]] = i;
        }
       if(ans == INT_MAX) return -1;
       return ans;
    }
};