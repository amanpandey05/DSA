class Solution {
public:
    int minChanges(string s) {
       int cnt = 0;
       int one = 0, z = 0;
       for(int i = 0; i<s.size(); i++) {
        if(s[i] == '0') z++;
        if(s[i] == '1') one++;
        if(i%2 != 0) {
            int d = abs(z-one);
            if(d == 0) {
                cnt++;
            }
            z = 0, one = 0;
        }
       }
       return cnt; 
    }
};