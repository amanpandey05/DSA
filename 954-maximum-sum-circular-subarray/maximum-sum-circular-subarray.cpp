class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int maxi = nums[0];
       int sum = 0;
       int tsum = 0;
       for(int i  = 0; i<nums.size(); i++) {
            tsum += nums[i];
            sum += nums[i];
            maxi = max(maxi, sum);
            if(sum < 0) sum = 0;
       } 
       if(maxi < 0) return maxi;
       sum = 0;
       int mini = INT_MAX;
       for(auto &i: nums) {
        sum += i;
        if(sum > 0) sum = 0;
        if(sum < mini) {
            mini = min(mini, sum);
        } 
       }
       return max(maxi, tsum-mini);
    }
};