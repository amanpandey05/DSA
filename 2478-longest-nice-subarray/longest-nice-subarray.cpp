class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
    int maxi = 1;
    int i = 0;
    int b = 0;
    for(int j = 0; j<nums.size(); j++) {
        while((b & nums[j]) != 0) {
            b^=nums[i];
         i++;  
        }
         b|=nums[j];
         maxi = max(maxi,  j-i+1);
    } 
    return maxi; 
    }
};