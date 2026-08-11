class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n =nums.size();
        int maxi = 0;
        for(int i = 0; i<n; i++) {
            maxi = max(maxi, nums[i]);
        }
        int sum = nums[0];
        for(int i = 1; i<n; i++) {
           if(nums[i] == nums[i-1]+1) {
            sum += nums[i];
           } else {
            break;
           }
        }
               unordered_map<int, bool> mp;
               for(int i = 0; i<n; i++) {
                mp[nums[i]] = true;
               }
               while(mp[sum]) {
                sum++;
               }
               return sum;
    }
};