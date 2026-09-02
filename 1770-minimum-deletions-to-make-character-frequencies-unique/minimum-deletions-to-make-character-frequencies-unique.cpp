class Solution {
public:
    int minDeletions(string s) {
        vector<int> f(26, 0);
        for(auto i: s) {
            f[i-'a']++;
        }
        unordered_set<int> st;
        for(int i = 0; i<26; i++) {
            if(!st.count(f[i])) {
                st.insert(f[i]);
            } else {
               while(st.count(f[i]) && f[i] != 0) f[i]--;
               st.insert(f[i]);
            }
        }
        int sum = 0;
        for(auto i: st) {
            sum += i;
        }
        return s.size()-sum;

    }
};