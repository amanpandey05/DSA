class Solution {
public:
    int longestBalanced(vector<int>& nums) {
     int maxi = 0;
     for(int i = 0; i<nums.size(); i++) {
        unordered_set<int> visit;
        int even = 0, odd = 0;
        for(int j = i; j<nums.size(); j++) {
           if(!visit.count(nums[j]))
           {
             visit.insert(nums[j]);
           if(nums[j] % 2 == 0) even++;
           else odd++;
           }
           if(even == odd) {
            maxi = max(maxi, j-i+1);
           }
        }
     }
     return maxi;
     
    }
};