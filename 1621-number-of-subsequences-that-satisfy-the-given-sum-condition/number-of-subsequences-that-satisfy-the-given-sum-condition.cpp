class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int m = 1e9+7;
       sort(nums.begin(), nums.end());
       int n = nums.size();
       int i = 0;
       int j = n-1;
        long long cnt = 0;
        vector<int> p(n);
        p[0] = 1;
        for(int k = 1; k<n; k++) {
            p[k] = (p[k-1]*2LL)%m;
        }
       while(i<=j) {
        if((nums[i]+nums[j]) <= target){
            cnt  = (cnt + p[j-i])%m;
            i++;
        } else {
            j--;
        }
       }
       return cnt;
    }
};