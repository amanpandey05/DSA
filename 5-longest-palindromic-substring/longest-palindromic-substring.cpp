class Solution {
public:
// int t[1001][1001];
   bool solve(string &s, int i, int j){
        if(i>=j){
        return true;
        }

        // if(t[i][j] != -1){
        //     return t[i][j];
        // }

        if(s[i] == s[j])
        return solve(s, i+1, j-1);

       return false;
    }
    string longestPalindrome(string s) {
        // memset(t,-1, sizeof(t));
        int n = s.size();
       int maxl = INT_MIN;
       int st = 0;
       for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++){
            if(solve(s,i,j) == true){
                if(j-i+1 > maxl){
                    maxl = j-i+1;
                    st = i;
                }
            }
        }
       }
       return s.substr(st, maxl);

    }
};