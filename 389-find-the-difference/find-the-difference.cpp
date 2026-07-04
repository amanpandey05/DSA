class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        for(auto &c: s) {
            mp[c]++;
        }
        char ans;
        for(auto &c: t) {
            mp[c]--;
            if(mp[c] < 0) {
                ans = c;
            }
        }
        return ans;
    }
};