class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = 0;
        long long sum = 0;
        int maxi = 1;

      while(r<nums.size()) {
        sum += nums[r];
        if((long long)nums[r] * (r-l+1) - sum > k) {
            sum -= nums[l];
            l++;
        }
        maxi = max(maxi, r-l+1);
        r++;
      }
    return maxi;

    }
};