class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
      int maxi = 0;
      int swap = 0;
      int ul = 0;
      for(int i = 0; i<nums.size(); i++) {
        maxi = max(maxi, nums[i]);
        if(locked[i] == 1) {
            if(nums[i] != i+1 || maxi > i+1) {
                ul++;

            }
            if(ul > k) return -1;
        }
      }
      for(int i = 0; i<nums.size(); i++) {
        for(int j = i+1; j<nums.size(); j++) {
            if(nums[i] > nums[j]) swap++;
        }
      }
      return ul+swap;
    }
};