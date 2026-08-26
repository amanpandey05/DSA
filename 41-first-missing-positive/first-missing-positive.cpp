class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        int maxi = 0;
        for(auto i: nums) {
            if(i > 0) {
                st.insert(i);
            }
            maxi = max(maxi, i);
        }
        int ans = 1;
        for(int i = 1; i<=100001; i++) {
            if(!st.count(i)) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};