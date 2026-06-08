class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char, int> mp;
       for(auto c: magazine) {
        mp[c]++;
       } 
       for(int i = 0; i<ransomNote.size(); i++) {
        if(mp[ransomNote[i]] > 0) {
           mp[ransomNote[i]]--;
        } else {
         return false;
        }
       }
       return true;
    }
};