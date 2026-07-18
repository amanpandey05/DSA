class Solution {
public:
    int findGCD(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int maxi = 0;
    int x = nums[0];
    int y = nums[nums.size()-1];
    for(int i = 1; i<=x; i++) {
    if(x % i == 0 && y%i == 0) {
        maxi = max(i, maxi);
    }
    }
    return maxi;
    }
};