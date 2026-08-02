class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
       int n = nums.size();
       long long maxi = 0;
      for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        long long g = std::gcd(abs(nums[i]), abs(nums[j]));
        long long ans = (1LL * nums[i] * nums[j]) / (g * g);
        maxi = max(maxi, ans);
    }
}
       return maxi;
    }
};