class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int , vector<int>> mp;
        mp[0] = {2,3,4,5};
        mp[1] = {4,5,6,7};
        mp[2] = {6,7,8,9};
        unordered_map<int, vector<int>> mp1;
        for(int i = 0; i<reservedSeats.size(); i++) {
            mp1[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
        }
        int ans = (n-mp1.size())*2;
        for(auto &it: mp1) {
            int row = it.first;
            int cnt1 = 0;
            int cnt2 = 0;
            int cnt3 = 0;
          for(int i = 0; i<4; i++) {
          if(find(mp1[row].begin(), mp1[row].end(), mp[0][i]) == mp1[row].end()) cnt1++;
          if(find(mp1[row].begin(), mp1[row].end(), mp[1][i]) == mp1[row].end()) cnt2++;
          if(find(mp1[row].begin(), mp1[row].end(), mp[2][i]) == mp1[row].end()) cnt3++;
      }
      if(cnt1 == 4 && cnt3 == 4) ans += 2;
      else if(cnt1 == 4 || cnt2 == 4 || cnt3 == 4) ans++;
        }

return ans;
    }
};