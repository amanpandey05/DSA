class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int l = 0;
        int h = nums.size()-1;
        int cnt = 0;
        int mid = l + (h-l)/2;
        while(l < mid) {
            cnt += (nums[mid]-nums[l]);
            l++;
        }
        while(h>=mid) {
            cnt += (nums[h]-nums[mid]);
            h--;
        }
        return cnt;
    }
};