class Solution {
public:
const int MOD = 1e9 + 7;
    int minimumCost(vector<int>& nums, int k) {
      int n = nums.size();
      long long sum = 0;
      long long cnt = 0;
      for(int i = 0; i<n; i++) {
        sum += nums[i];
      }  
      if(sum <= k) return 0;
      long long diff = sum - k;
      if(diff % k == 0) {
      cnt = diff/k;
      } else {
        cnt = diff/k + 1;
      }
      long long a = cnt;
      long long b = cnt+1;
      if(a%2 == 0) a/=2;
      else b/=2;
      long long ans =( (a%MOD) * (b%MOD))  % MOD;
         return ans;
    }
};