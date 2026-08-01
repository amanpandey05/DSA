class Solution {
public:
    int takeCharacters(string s, int k) {
     int n = s.size();
      vector<int> f(3,0);
     for(auto c: s){
        f[c-'a']++;
     }
     int left = 0;
     int maxi = 0;
     if(f[0] < k || f[2] < k || f[1] < k) return -1;
     vector<int> slide(3,0);
     for(int i = 0; i<n; i++) {
        slide[s[i]-'a']++;
        while(slide[0]>f[0]-k || slide[1]>f[1]-k || slide[2]>f[2]-k) {
            slide[s[left]-'a']--;
            left++;
        }
        maxi = max(maxi, i-left+1);
     }
     return n-maxi;
    }
};