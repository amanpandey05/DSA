class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
       int maxi = 0;
       for(auto x: nums) {
        maxi = max(maxi, x);
       } 
       long long ans = 0;
       int l = 1;
       int h = maxi;
       while(l <= h) {
        long long mid = (l+h)/2;
        long long op = 0;
        for(int i = 0; i<nums.size(); i++) {
            op += (nums[i]-1)/mid;
            if(op > maxOperations) break;
        }
        if(op <= maxOperations) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid+1;
        }
       }
       return ans;

    }
};