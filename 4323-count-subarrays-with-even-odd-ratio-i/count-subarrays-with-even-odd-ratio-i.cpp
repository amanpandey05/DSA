class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
       int n = nums.size();
       int cnt = 0;
       for(int i = 0; i<n; i++) {
        int cnte = 0, cnto = 0;
        for(int j = i; j<n; j++) {
            if(nums[j] % 2 == 0) cnte++;
            else cnto++;
             if(cnto>0 && cnte*b <= cnto*a) {
            cnt++;
        }
       
        }
       }
       return cnt; 
    }
};