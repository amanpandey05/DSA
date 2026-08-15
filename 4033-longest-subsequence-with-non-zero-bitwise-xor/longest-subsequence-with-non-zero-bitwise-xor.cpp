class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       int x = 0;
       int cnt = 0;
       for(int i = 0; i<nums.size(); i++) {
        if(nums[i] == 0) cnt++;
        x ^= nums[i];
       }
       if(x == 0 && cnt == nums.size()) return 0;
       else if(x == 0) return nums.size()-1;
       else return nums.size();
       
    }
};