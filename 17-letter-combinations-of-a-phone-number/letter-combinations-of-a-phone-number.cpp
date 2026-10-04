class Solution {
public:
void solve(int i, string &d, string &t, vector<string>& ans, vector<string>& mp) {
 if(i == d.size()) {
    ans.push_back(t);
    return;

 }
 string let = mp[d[i]-'0'];
 for(auto x: let) {
    t.push_back(x);
    solve(i+1, d, t, ans, mp);
    t.pop_back();
 }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> mp(10);
        mp[0] = "";
        mp[1] = "";
         mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        string t;
        solve(0, digits, t, ans, mp);
       
        return ans;
    }
};