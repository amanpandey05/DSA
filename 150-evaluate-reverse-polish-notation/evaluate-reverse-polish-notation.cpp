class Solution {
public:
 int operate(int a, int b, string op) {
    if(op == "+") return a + b;
    if(op == "-") return a - b;
    if(op == "*") return a * b;
    return a / b;
}
    int evalRPN(vector<string>& tokens) {
       
       stack<int> st;
       for(int i = 0; i<tokens.size(); i++)  {
        if(tokens[i] != "+" && tokens[i] != "-" &&
   tokens[i] != "*" && tokens[i] != "/"){
            st.push(stoi(tokens[i]));
        } else {
            int a = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();

            int ans = operate(b,a,tokens[i]);

            st.push(ans);
        }
       }
      return st.top();
    }
};