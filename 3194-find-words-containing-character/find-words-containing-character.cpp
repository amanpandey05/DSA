class Solution {
public:
bool isw(string &s, char &x) {
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == x) return true;
    }
    return false;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
       vector<int> ans; 
       for(int i = 0; i<words.size(); i++) {
        if(isw(words[i],x)) {
            ans.push_back(i);
        }
       }
       return ans;
    }
};