class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
       unordered_map<int, int> mp;
        for(auto x: nums) {
           mp[x]++;
        }
        vector<int> ans;
        for(auto i: nums) {
            int a = i+1;
            int b = i-1;
            if(mp[i] > 1) {
                continue;
            }
           else if(mp.count(a) || mp.count(b)) {
                continue;
            } else {
                ans.push_back(i);
            }
        }
        return ans;
    }
};