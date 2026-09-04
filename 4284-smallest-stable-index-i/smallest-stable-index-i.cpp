class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int maxi = 0;
        int mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++) {
                maxi = max(maxi, nums[i]);
            for(int j = i; j<nums.size(); j++) {
                mini = min(mini, nums[j]);
            }
            if(maxi - mini <= k) {
                return i;
            }
            mini = INT_MAX;
        }
        return -1;
    }
};