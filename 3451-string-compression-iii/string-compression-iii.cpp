class Solution {
public:
    string compressedString(string word) {
     string res = "";
     for(int i = 0; i<word.size(); i++) {
        char c = word[i];
        int cnt = 1;
        while(i+1<word.size() && word[i] == word[i+1] && cnt < 9) {
            cnt++;
            i++;
           
        }
        res += to_string(cnt) + string(1,c);
     }   
     return res;
    }
};