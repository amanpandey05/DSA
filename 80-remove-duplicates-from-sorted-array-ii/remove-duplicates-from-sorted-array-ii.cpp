class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2, k = 2;
        int n = nums.size();
         if(n<=2) return n;
        while(i<n) {
            if(nums[i] != nums[k-2]) {
                nums[k] = nums[i];
                k++;
            }

             i++;
           
        }
        return k;        
    }
};