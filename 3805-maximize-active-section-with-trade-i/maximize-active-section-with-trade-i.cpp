class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
      vector<int> zb;
      int ocnt = 0;
      for(int i = 0; i<s.size(); i++) {
        if(s[i] == '1') ocnt++;
      }  
      int i = 0;
      while(i<s.size()) {
        if(s[i] == '0') {
            int j = i;
        while(j<s.size() && s[j] == '0') {
            j++;
        }
        zb.push_back(j-i);
        i = j;
        } else{
          i++;
        }
      }
      int maxi = 0;
      for(int i = 1; i<zb.size(); i++) {
        maxi = max(maxi, zb[i]+zb[i-1]);
      }
      return maxi+ocnt;
    }
};