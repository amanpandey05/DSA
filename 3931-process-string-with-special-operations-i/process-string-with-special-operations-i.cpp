class Solution {
public:
    string processStr(string s) {
     string ans = "";
     for(int i = 0; i<s.size(); i++) {
        if(islower(s[i])){
             ans+=s[i];
        }
        else if(!ans.empty() && s[i] == '*') {
            ans.pop_back();
        }
        else if(!ans.empty() && s[i] == '#'){
        ans += ans;
     }  
     else if(!ans.empty() && s[i] == '%') {
        reverse(ans.begin(), ans.end());
     }
    }
    return ans;
    }
};