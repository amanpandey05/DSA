class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
       string ans(n,' ');
        vector<int> f(26, 0);
        
        for(auto c: s) {
            f[c-'a']++;
        }
        int maxi = 0;
        int maxchar = 0;
       
      for(int i = 0; i<26; i++) {
       if(f[i] > maxi) {
        maxi = f[i];
        maxchar = i;
       }
      }    
       if (maxi > (n + 1) / 2) {
            return "";
        }
            int j = 0;
           while(f[maxchar] > 0) {
                ans[j] = char('a'+maxchar);
                f[maxchar]--;
                j+=2;
                if(j>=n){
                    j = 1;
                }
            }

                for(int i = 0; i<26; i++) {
                 while(f[i] > 0) {
                    ans[j] = char('a' + i);
                    f[i]--;
                    j+=2;
                    if(j>=n) {
                        j = 1;
                    }
                 }
        } 
            
        return ans;
    }
};