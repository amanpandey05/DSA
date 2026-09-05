class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n = nums.size();
        vector<int> premaxi(n);
        vector<int> suffmini(n);

        premaxi[0] = nums[0];
        for(int i = 1; i<n; i++) {
            premaxi[i] = max(premaxi[i-1], nums[i]);
        }  
             suffmini[n-1] = nums[n-1];
               for(int i = n-2; i>=0; i--){
            
            suffmini[i] = min(suffmini[i+1], nums[i]);
               }
            for(int i = 0; i<n; i++) {
            int inst = premaxi[i] - suffmini[i];
            
            if(inst <= k) {
                return i;
            }
            }
        
        
        return -1;
    }
};