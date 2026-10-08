class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
       string ans = "";
       for(int i = 0; i<s.size(); i++) {
        if(st.empty()) {
            st.push(s[i]);
        } else {
            if(s[i] == '(') {
                ans += s[i];
                st.push(s[i]);
            }
            else if(s[i] == ')' && st.size() == 1) {
                st.pop();
                
            } else if(s[i] == ')' && st.size() > 1){
                ans+=s[i];
                st.pop();
            }
           
        }
       }
       return ans;
    }
};