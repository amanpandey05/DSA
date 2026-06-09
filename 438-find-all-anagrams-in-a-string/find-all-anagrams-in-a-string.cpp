class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     vector<int> res;
     if (p.size() > s.size()) return res;
       vector<int> pf(26,0);
       vector<int> wf(26, 0);
       for(int i = 0; i<p.size(); i++) {
        pf[p[i]-'a']++;
        
       }
      
      
       for (int i = 0; i < p.size(); i++) {
             wf[s[i] - 'a']++;
        }
         if(wf == pf) res.push_back(0);
        int l = 0;
        int r = p.size();
        while(r<s.size()) {
          wf[s[r]-'a']++;
          wf[s[l]-'a']--;
          l++;
          r++;
          if(wf == pf) res.push_back(l);
        }
        return res;
    }
};