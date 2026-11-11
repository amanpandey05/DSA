class Solution {
public:
    int solve(int n, vector<int>& costs, vector<int>& dp) {
        if (n == 0) return 0;

        if (dp[n] != -1) return dp[n];

        int ans = INT_MAX;

        ans = min(ans, solve(n-1, costs, dp) + costs[n-1] + 1);

        if (n >= 2)
            ans = min(ans, solve(n-2, costs, dp) + costs[n-1] + 4);

        if (n >= 3)
            ans = min(ans, solve(n-3, costs, dp) + costs[n-1] + 9);

        return dp[n] = ans;
    }

    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1, -1);
        return solve(n, costs, dp);
    }
};