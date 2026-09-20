class Solution {
public:
    bool canConstruct(string s, int k) {
        vector<int> f(26, 0);
        for(auto i: s) {
            f[i-'a']++;
        }
        if(s.size() < k) return false;
     
        int cnto = 0;
        for(int i = 0; i<26; i++) {
            if(f[i]%2 != 0) cnto++; 
        }
        if(cnto > k) return false;
        return true;
    }
};