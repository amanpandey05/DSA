class Solution {
public:
 vector<string> res;
bool isvalid(string &s) {
    stack<char> st;
    for(int i = 0; i<s.size(); i++) {
    if(st.empty()) {
        st.push(s[i]);
    } else {
        if(s[i] == ')' && st.top() == '(') {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    }
    if(st.empty()) return true;
    return false;
} 
void paren(string s, int n) {
   
     if(s.size() == 2*n) {
        if(isvalid(s)) res.push_back(s);
        return;
    }
    s.push_back('(');
    paren(s,n);
    s.pop_back();

    s.push_back(')');
    paren(s,n);
    s.pop_back();
}
    vector<string> generateParenthesis(int n) {
        string s = "";
        paren(s,n);
        return res;
    }
};