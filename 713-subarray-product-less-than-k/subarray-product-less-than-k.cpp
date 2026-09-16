class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prd = 1;
        int cnt = 0;
        int i = 0;
        if(k<=1) return 0;
        for(int j = 0; j<nums.size(); j++) {
            prd *= nums[j];
            while(prd >= k) {
                prd = prd/nums[i];
                i++;
            }
             cnt+= (j-i+1);
        }
        return cnt;
    }
};