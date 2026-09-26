class Solution {
public:
    string evaluate(string s, vector<vector<string>>& s1) {
      string ans = "";
      unordered_map<string, string> mp;
      for(int i = 0; i<s1.size(); i++) {
        mp.insert({s1[i][0],s1[i][1]});
        // mp[s1[i][0]] = s1[i][1];
      } 
      int j = 0; 
      for(int i = 0; i<s.size(); i++) {
        if(j<s.size() && s[i] == '(') {
            j = i+1;
            while(s[j] != ')') {
                j++;
            }
         string t = s.substr(i+1, j-i-1);
        
           if(mp.count(t)) {
            ans += mp[t];
            } else {
                ans += '?';
            }
       
         i = j;
        }
        else {
            ans += s[i];
        }
      }
      return ans;
    }
};