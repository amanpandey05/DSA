class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //    int maxi = 0;
    //    for(int i = 0; i<nums.size()-1; i++) {
    //     int m = 0;
    //     for(int j = i+1; j<nums.size(); j++){
    //          m = (nums[i]-1)*(nums[j]-1);
    //     }
    //     maxi = max(maxi, m);
    //     } 
    //     return maxi;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return (nums[n-1]-1)*(nums[n-2]-1);
    }
};