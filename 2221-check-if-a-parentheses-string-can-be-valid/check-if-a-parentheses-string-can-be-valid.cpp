class Solution {
public:
    bool canBeValid(string s, string locked) {
       stack<int> st1;
       stack<int> st2;
       if(s.size()%2 != 0) return false;
       for(int i = 0; i<s.size(); i++) {
       if(locked[i] == '0') {
        st2.push(i);
       }
            if(s[i] == '(' && locked[i] == '1') {
                st1.push(i);
            } else if(s[i] == ')' && locked[i] == '1') {
               if(!st1.empty()) {
                st1.pop();
               } else if(!st2.empty()) {
                st2.pop();
               } else {
                return false;
               }
            }
       }
       while(!st1.empty() && !st2.empty()) {
        if(st1.top() > st2.top()) return false;
        st1.pop();
        st2.pop();
       }

       return st1.empty();
    }
};