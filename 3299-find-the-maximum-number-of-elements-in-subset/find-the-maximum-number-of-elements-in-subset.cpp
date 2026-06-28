class Solution {
public:
    int maximumLength(vector<int>& nums) {
     int maxi = 0;
     int res = 0;
     unordered_map<long long, int> mp;
     for(auto &x: nums) {
        mp[x]++;
     }
     if(mp[1] % 2) res = mp[1];
     else res = mp[1] - 1;
     for(auto &x: mp) {
        long long k = x.first;
        int len = 0;
        if(k == 1) continue;
      while(mp.count(k) && mp[k] > 1) {
        len += 2;
        k = k*k;
      }
      if(mp.count(k) == 1) len+=1;
      else len -= 1; 
      res = max(res, len); 
     }
     return res;
    }
};