class Solution {
public:
    int compress(vector<char>& chars) {
      vector<char> ans;
       for(int i = 0; i<chars.size(); i++) {
         char c = chars[i];
         int cnt = 1;
         while (i+1 < chars.size() && chars[i] == chars[i+1]) {
           i++;
            cnt++;
         }
        ans.push_back(c);
       if(cnt > 1) {
        string s = to_string(cnt);
        for (char c : s)
          ans.push_back(c);
          }
       }
       chars = ans;
       return chars.size();

    }
};