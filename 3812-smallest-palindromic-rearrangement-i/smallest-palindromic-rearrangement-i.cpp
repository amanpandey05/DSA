class Solution {
public:
    string smallestPalindrome(string s) {
       string l = "";
       string c = "";
      vector<int> f(26,0);
      for(auto c: s) {
        f[c-'a']++;
      }
      for(int i = 0; i<f.size(); i++){
        if(f[i]%2 == 1){
            c.push_back(i+'a');
             for(int j = 0; j<f[i]/2; j++){
            l.push_back(i+'a');
        }
        } else {
             for(int j = 0; j<f[i]/2; j++){
            l.push_back(i+'a');
        }
        }
       
      }
    string ans = "";
      ans = l+c;
      reverse(l.begin(), l.end());
      ans+=l;
      return ans;
    }
};