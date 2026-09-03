class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        stack<int> st;
        int cnt = 0;
        for(int i = 0; i<n-1; i++) {
           
        //     if(st.size()%2 == 0) {
        //         st.push(nums[i]);
        //     } 
        //     else {
               
        //    }
        // }
        // if(st.size() % 2 != 0) {
        //     return abs(n - (int)st.size() - 1);
        // } else {
        //     return abs(n - (int)st.size());
            if((i-cnt) % 2 == 0 && nums[i] == nums[i+1]) {
                cnt++;
            } else {
                continue;
            }
        } 
        if((n-cnt) % 2 != 0) cnt++;
        return cnt;
    }
    
};

