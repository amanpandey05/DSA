class Solution {
public:
int solve(vector<int>&cost, int n) {
    vector<int> dp(n+1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    // int prev = 0;
    // int curr = 1;
    //  if(dp[n] != -1) {
    //     return dp[n];
    //  }
       for(int i = 2; i<n; i++)
        {dp[i] = cost[i]+min(dp[i-1], dp[i-2]);}
    
       return min(dp[n-1], dp[n-2]);
}
     int minCostClimbingStairs(vector<int>& cost) {
         int n = cost.size();
       
        // cost.push_back(0);
        // int ans = min(solve(cost, n-1, dp), solve(cost, n-2,dp));
        return solve(cost, n);

    }
};