class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int maxi = -1;
       if(k == 1) {
        for(auto x: nums) {
            mp[x]++;
        }
        for(auto x: mp) {
            if(x.second == 1) {
                maxi = max(maxi, x.first);
            }
        }
       } else if(k == nums.size()) {
        // for(auto x: nums) {
        //     mp[x]++;
        // // }
        for(auto x: nums) {
            // if(x.second == 1) {
                maxi = max(maxi, x);
            }
        // }
       } else {
       int i = 0, j = k-1;
       while(j<nums.size()){
       for(int k = i; k<=j; k++) {
        mp[nums[k]]++;
       }
       i++, j++;
       }
       for(auto x: mp) {
        if(x.second == 1) {
            maxi = max(maxi, x.first);
        }
       }
       
       }
       return maxi;
    }
};