class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> pre;
        int sum = 0;
        pre[0] = -1;
        for(int i = 0; i<n; i++) {
        sum += nums[i];
        int rem = sum % k;
        if(pre.count(rem)) {
            if(i-pre[rem] >= 2) return true;
        } else {
            pre[rem] = i;
        }
      }
      
      return false;
    }
};