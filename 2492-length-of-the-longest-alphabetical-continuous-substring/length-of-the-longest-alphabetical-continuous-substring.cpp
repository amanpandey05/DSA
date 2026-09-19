class Solution {
public:
    int longestContinuousSubstring(string s) {
        int cnt = 1;
        int maxi = 0;
        int j = 0;
        if(s.size() == 1) return 1;
        if(s.size() == 0) return 0;
        for(int i = 1; i<s.size(); i++) {
            if((s[i] - s[i-1]) != 1){ 
                
               j = i;
                }
            maxi = max(maxi, (i-j+1));
            
        }
   return maxi;
    }
};