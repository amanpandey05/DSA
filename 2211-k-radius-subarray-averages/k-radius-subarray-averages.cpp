class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
         vector<int> ans;
         int n = nums.size();

         if(k == 0) return nums;
    
         if(n < (2*k+1)) {
            for(int i = 0; i<n; i++) {
              ans.push_back(-1);
            }
            return ans;
         }
         for(int i = 0; i<k; i++) {
            ans.push_back(-1);
         }
         long long sum = 0;
         for(int i = 0; i<=2*k; i++) {
            sum += nums[i];
         }
         int j = 0;
         int idx = 2*k+1;
         
         ans.push_back(sum/idx);
         for(int i = 2*k+1; i<n; i++) {
            sum -= nums[j];
            sum += nums[i];
            j++;
            ans.push_back(sum/idx);
         } 
         for(int i = 0; i<k; i++) {
            ans.push_back(-1);
         }
         return ans;
    }
};