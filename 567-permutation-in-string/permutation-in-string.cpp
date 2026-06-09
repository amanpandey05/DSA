class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
     vector<int> f(26, 0);
     vector<int> f1(26, 0);
     
     for (int i = 0; i < s1.size(); i++) {
    f[s1[i] - 'a']++;
}
   for(int i = 0; i<s1.size(); i++) {
    f1[s2[i] - 'a']++;
   }
   if(f == f1) return true;
   bool ok = false;
   int l = 0;
   int r = s1.size();
   while(r<s2.size()) {
    f1[s2[r] - 'a']++;
    f1[s2[l] - 'a']--;
    l++;
    r++;
    if(f == f1) return true;
   }
   
   return false;
    }
};