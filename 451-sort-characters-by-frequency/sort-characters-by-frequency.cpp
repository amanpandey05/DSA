class Solution {
public:
 static bool ok(pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
}
    string frequencySort(string s) {
       int n = s.size();
      
      unordered_map<char, int> mp;
       for(auto c: s) {
        mp[c]++;
       } 
       string res = "";
       vector<pair<char, int>> v(mp.begin(), mp.end());
       sort(v.begin(), v.end(), ok);
       for(int i = 0; i<v.size(); i++) {
      for(int j = 0; j<v[i].second; j++) {
        res += v[i].first;
      }
       }
       return res;
    }
};