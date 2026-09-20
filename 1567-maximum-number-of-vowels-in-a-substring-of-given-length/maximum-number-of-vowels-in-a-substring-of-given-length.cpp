class Solution {
public:
bool isvowel(char c) {
   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    return true;
   }
   return false;
}
    int maxVowels(string s, int k) {
      int i = 0;
      int cnt = 0;
      int maxi = 0;
      for(int j = 0; j<s.size(); j++) {
        if(isvowel(s[j])) cnt++;

        maxi = max(maxi, cnt);

        if((j-i+1) == k) {
            if(isvowel(s[i])) cnt--;
            i++;
        }
      }
      return maxi;  
    }
};