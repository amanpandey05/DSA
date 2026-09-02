class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> nums2;
        int n = nums1.size();
        int i = 0, j = 1;
        if(n == 1) return true;
        while(j<n) {
            if(i%2 == 0 && j%2==0){   /// return true
                return true;
                i++,j++;
            }
            else if (i%2!=0 && j%2!=0){
                return true;
                i++,j++;
            }
            else if(abs(nums1[i] - nums1[j])%2!=0 || nums1[i+1]%2!=0 && nums1[j]%2!=0) {
                return true;
                i++;
                j++;
                
            }
            else if(abs(nums1[i] - nums1[j])%2==0 || nums1[i+1]%2==0 && nums1[j]%2==0){
                return true;
                i++;
                j++;
            } 
        }
        return false;
    }
};