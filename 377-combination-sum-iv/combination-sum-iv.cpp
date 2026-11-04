class Solution {
public:
//  int solve(vector<int>& nums, int t, vector<int>& dp) {
//     if(t < 0) return 0;
//     if(t == 0) return 1;
//     int ans = 0;
//     if(dp[t] != -1) return dp[t];
//     for(int i = 0; i<nums.size(); i++) {
//         ans += solve(nums, t-nums[i], dp);
//     }
//    dp[t] = ans;
//     return dp[t];
//  }
int solve(vector<int>& nums, int t) {
    vector<unsigned int> dp(t+1, 0);
   dp[0] = 1;
    for(int i = 1; i<=t; i++) {
        for(int j = 0; j<nums.size(); j++) {
            if(i-nums[j] >= 0) {
                dp[i] += dp[i-nums[j]];
            }
        }
        
    }
    return dp[t];
 }
    int combinationSum4(vector<int>& nums, int target) {
  int n = nums.size();
    
        return solve(nums, target);
    }
};