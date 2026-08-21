class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = i+1;
        int ans = 0;
        while(j<nums.size()) {
         if(nums[i] == nums[j]) {
            ans = nums[i];
            break;
         }   
         i++, j++;
        }
        i = 0, j = i+1;
        int cnt = 0;
        while(j<nums.size()) {
            if(nums[i] == nums[j] && nums[j] != ans) {
                cnt++;
            }
            i++, j--;
        }
        if(cnt > 0) {
            return -1;
        }
        return ans;
    }
};