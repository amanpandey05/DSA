class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       long long cnt = 0;
       int i = 0;
       for(int j = 0; j<nums.size(); j++) {
        if(nums[j] != 0) {
            i = j;
            continue;
        }
        while(nums[i] != 0) i++;
        cnt += (j-i+1);
       } 
       return cnt;
    }
};