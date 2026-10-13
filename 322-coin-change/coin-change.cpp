class Solution {
public:
int solve(vector<int>& arr, int amt, vector<int>& dp) {
    int n = arr.size();
//    vector<int> dp(amt+1,-1);
  if(amt== 0) return 0;
  if(amt < 0) return INT_MAX;
//    dp[0] = 0;
   if(dp[amt] != -1) return dp[amt];
//    for(int i = 1; i<=amt; i++) {
//     for(int j = 0; j<n; j++) {
//         if(i-arr[j]>=0 && dp[i-arr[j]] != INT_MAX) {
            
//             dp[i] = min(dp[i], 1+dp[i-arr[j]]);
//         }
//     }
//    }
int mini = INT_MAX;
for(int i = 0; i<n; i++) {
  int ans = solve(arr, amt-arr[i], dp);
  if(ans != INT_MAX){mini = min(mini, 1+ans);}
}
dp[amt] = mini;
return mini;

//    if(dp[amt] == INT_MAX) return -1;
//    return dp[amt];
}

    int coinChange(vector<int>& coins, int amount) {
       vector<int> dp(amount+1, -1);
        int ans = solve(coins, amount,dp);
        if(ans == INT_MAX) return -1;
        return ans;
    }
};