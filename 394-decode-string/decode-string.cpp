class Solution {
public:
    string decodeString(string s) {
       stack<string> ss;
       stack<int> cs;
        int k = 0;
        string curr = "";
        for(auto c: s) {
            if(isdigit(c)){
                k = k*10+(c-'0');
                
            } 
            else if(c == '[') {
                cs.push(k);
                ss.push(curr);
                k = 0;
                curr = "";
            }
            else if(c == ']') {
                int cnt = cs.top();
                cs.pop();
                string prevstr = ss.top();
                ss.pop();
                string big = "";
                for(int i = 0; i<cnt; i++) {
                    big += curr;
                }
            curr = prevstr + big;
            }
            else {
                curr += c;
            }
        }
        return curr;
    }
};