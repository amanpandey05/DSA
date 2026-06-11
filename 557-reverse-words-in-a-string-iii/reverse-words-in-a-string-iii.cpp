class Solution {
public:

    string reverseWords(string s) {
      string res;
      for(int i = 0; i<s.size(); i++) {
        int j = i;
        while(j<s.size() && s[j] != ' ') {
            j++;
        }
        int idx = i;
       
        string x = "";
        for (int k = j - 1; k >= idx; k--) {
                x += s[k];
            }
        res += x;
        if(j<s.size()) {
            res += ' ';
        }
        i = j;
      } 
      return res;
    }
};