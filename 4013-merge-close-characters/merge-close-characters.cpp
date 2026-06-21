class Solution {
public:
    string mergeCharacters(string s, int k) {
        string ans = "";
        unordered_map<char, int> mp;
        
       for(int i = 0; i<s.size(); i++) {
        int pos = ans.size();
        if(mp.count(s[i]) && pos - mp[s[i]] <= k) {
        continue;   
        }
        ans += s[i]; 
            mp[s[i]] = pos;
       } 
       return ans;
    }
};