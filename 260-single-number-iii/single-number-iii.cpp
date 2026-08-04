class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       vector<int> ans;
       unordered_map<int, int> mp;
       for(int i = 1; i<nums.size(); i++) {
         if(nums[i] == nums[i-1]) {
            mp[nums[i]]++;
         }
       }
     for(auto c: nums) {
        if(!mp.count(c)) {
            ans.push_back(c);
        }
     }
       
       return ans;
    }
};