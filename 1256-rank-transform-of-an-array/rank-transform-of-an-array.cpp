class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans;
      vector<int> t = nums;
       unordered_map<int, int> mp;
       int r = 1;
       sort(t.begin(), t.end());
       for(int i = 0; i<n; i++) {
       if(mp.find(t[i]) == mp.end()) {
        mp[t[i]] = r;
        r++;}
       }
       for(int i = 0; i<n; i++) {
        ans.push_back(mp[nums[i]]);
       }
       return ans;
    }
};