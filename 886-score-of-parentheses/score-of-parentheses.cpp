class Solution {
public:
    int scoreOfParentheses(string s) {
        int cnt = 0;
        stack<int> st;
         st.push(0);
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '(') {
                st.push(0);
            } else {
                int x = st.top();
                st.pop();
                if(x == 0) {
                    cnt = 1;
                } else {
                    cnt = x*2;
                }
                st.top() += cnt;
            }
        }
        return st.top();
    }
};