class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
       int sum = 0;
       int n = nums.size();
      
       for(int i = 1; i<n; i++) {
        sum += (nums[i]-nums[0]);
       } 
       return sum;
    }
};