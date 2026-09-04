class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
       int sum = 0;
       int mini = INT_MAX;

       for(int len = l; len <= r; len++) {
       
        sum = 0;

        for(int i = 0; i<len; i++) {
         sum += nums[i];
        }
       
        if(sum > 0) mini = min(mini, sum);

        for(int i = len; i<nums.size(); i++) {
         sum -= nums[i-len];
         sum += nums[i];

         if(sum > 0) mini = min(mini, sum);
        }
       }
      
      if(mini == INT_MAX) return -1;
      return mini;
    }
};
