class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>> ans;
      vector<int> arr;
       multimap<long long, vector<int>> mp;
      for(auto &p: points) {
        long long d = 1LL * p[0]*p[0] + 1LL * p[1] * p[1]; 
      mp.insert({d, p});
      }  
      int cnt = 0;
      for(auto &p: mp) {
        if(cnt < k) {
            ans.push_back(p.second);
            cnt++;
        } else {
            break;
        }
      }
  return ans;
    }
};