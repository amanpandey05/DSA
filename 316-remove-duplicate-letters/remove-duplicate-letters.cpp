class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        unordered_set<char> s1;
        vector<int> f(26, 0);
        for(int i = 0; i<s.size(); i++) {
            f[s[i] -'a'] = i;
        }
       for(int i = 0; i<s.size(); i++) {
        char c = s[i];
        if(s1.count(c)) continue;

        while(!st.empty() && st.top() > c && f[st.top()-'a'] > i) {
            s1.erase(st.top());
            st.pop();
        }

         st.push(c);
        s1.insert(c);
       
       }
       string ans = "";
       while(!st.empty()) {
        ans += st.top();
        st.pop();
       }
       reverse(ans.begin(), ans.end());
       return ans;
    }
};