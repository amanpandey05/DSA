class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        stack<int> st;
        for(int i = 0; i<n; i++) {
           
            if(st.size()%2 == 0) {
                st.push(nums[i]);
            } 
            else {
               if(st.top() != nums[i]) {
                st.push(nums[i]);
               }
            }
        } 
        int cnt = n - st.size();

        if(st.size() % 2 != 0) {
            cnt++;
        }

        return cnt;
  
    }
    
};
// if((i-cnt) % 2 == 0 && nums[i] == nums[i+1]) {
//                 cnt++;
//             } else {
//                 continue;
//             }
//         } 
//         if((n-cnt) % 2 != 0) cnt++;
//         return cnt;

