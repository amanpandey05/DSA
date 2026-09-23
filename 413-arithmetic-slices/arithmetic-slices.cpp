class Solution {
public:

    int numberOfArithmeticSlices(vector<int>& nums) {
       int cnt = 0;
       int i = 0;
       if(nums.size() < 3) return 0;
       int prev = nums[1]-nums[0];
       for(int j = 1; j<nums.size()-1; j++) {
        int diff = nums[j+1]-nums[j];
        if(diff == prev) {i++;}
        else {
            prev = diff;
            i = 0;
        }
            cnt += i;
       } 
    return cnt;
    }
};