class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[nums.size()-1];
        int cnt = 0;
        for(int i = 0; i<nums.size()-1; i++) {
            cnt += (x-nums[i]);
        }
        return cnt;
    }
};