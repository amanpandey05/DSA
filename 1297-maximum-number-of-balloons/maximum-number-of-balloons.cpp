class Solution {
public:
    int maxNumberOfBalloons(string text) {
      vector<int> res(26, 0);
        for(int i = 0; i<text.size(); i++) {
          if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n') {
            res[text[i] - 'a']++;
          }  
        }
      int ans = res['b' - 'a'];

        ans = min(ans, res['a' - 'a']);
        ans = min(ans, res['l' - 'a'] / 2);
        ans = min(ans, res['o' - 'a'] / 2);
        ans = min(ans, res['n' - 'a']);

        return ans;
      
    }
};