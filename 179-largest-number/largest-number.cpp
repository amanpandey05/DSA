class Solution {
public:
  static bool comp(string &a, string &b) {
    if( a+b > b+a) return true;
    return false;
}
    string largestNumber(vector<int>& nums) {
     vector<string> s;
     for(auto &x: nums) {
        s.push_back(to_string(x));
     }  
     sort(s.begin(), s.end(), comp);
     if (s[0] == "0")
            return "0";
     string ans;
     for(auto &c: s) {
        ans += c;
     } 
     return ans;
    }
};