class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
      unordered_map<int, int> mp;
      int maxi = INT_MIN;
      int n = nums.size();
      int j = 0;
      for(int i = 0; i<n; i++) {
           mp[nums[i]]++;

           if(mp[nums[i]] <= k) {
            maxi = max(maxi, (i-j+1));
            }

        while(mp[nums[i]] > k) {
        
            mp[nums[j]]--;
           
            j++;
        }
          
      } 
      return maxi;
    }
};