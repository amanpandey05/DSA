class Solution {
public:
vector<int> memo;
  int maxs(vector<int>& nums,int n, int i, vector<int>& dp) {
    if(i >= n) return 0;
    if(dp[i] != -1) {
        return dp[i];
    }
    int t = nums[i] + maxs(nums,n, i+2, dp);
    int s = maxs(nums,n, i+1,dp);
   dp[i] = max(t, s);
    return max(t, s);
  }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        int sum = maxs(nums,n, 0, dp);
        return sum;
    }
};