class Solution {
public:
 static bool ok(pair<int, int> &a, pair<int, int> &b) {
        if(a.second == b.second) {
            return a.first > b.first;
        }
          return a.second < b.second;
} 
    vector<int> frequencySort(vector<int>& nums) {
      int n = nums.size();
      unordered_map<int, int> mp;
       for(auto c: nums) {
        mp[c]++;
       } 
       vector<int> ans;
       vector<pair<int, int>> v(mp.begin(), mp.end());
       sort(v.begin(), v.end(), ok);
       for(int i = 0; i<v.size(); i++) {
      for(int j = 0; j<v[i].second; j++) {
        ans.push_back(v[i].first);
      }
       }
       return ans;
    }
};