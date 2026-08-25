class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       
        vector<int> f(26, 0);
         for(auto c: tasks) {
            f[c-'A']++;
         }
         int maxi = 0;
         for(int i = 0; i<26; i++) {
            maxi = max(maxi, f[i]);

         }
         int cnt = 0;
         for(int i = 0; i<f.size(); i++) {
            if(f[i] == maxi) {
               cnt++;
            }
         }
        
       int ans = (maxi - 1) * (n + 1) + cnt;
      return max((int)tasks.size(), ans);

    }
};