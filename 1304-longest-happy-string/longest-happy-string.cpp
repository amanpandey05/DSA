class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        unordered_map<char, int> mp;
        mp[0] = a;
       mp[1] = b;
       mp[2] = c;
           string ans = "";
         while(mp[0] > 0 || mp[1] > 0 || mp[2] > 0) {
            int maxi = 0; 
        for(auto x: mp) {
            maxi = max(maxi, x.second);
        }
        int maxchar;
       
        int e1 = 0;
        int e2 = 0;
        if(mp[0] == maxi){
            maxchar = 0;
            e1 = 1;
            e2 = 2;
        } else if(mp[1] == maxi){
            maxchar = 1;
            e1 = 0;
            e2 = 2;
        } else {
            maxchar = 2;
            e1 = 0;
            e2 = 1;
        }
                if(ans.size() >= 2 && ans[ans.size()-1] == ('a'+maxchar) && ans[ans.size()-2] == ('a'+maxchar) ) {
                  
                     
                  if(mp[e1] > 0) {
                    ans += ('a' + e1);
                    mp[e1]--;
                  }
                  else if(mp[e2] > 0) {
                    ans += ('a' + e2);
                    mp[e2]--;
                  } else {
                    break;
                  }
                } else { 
                    ans += ('a' + maxchar);
                    mp[maxchar]--;
                    }
         }
        return ans;
           
    }
};