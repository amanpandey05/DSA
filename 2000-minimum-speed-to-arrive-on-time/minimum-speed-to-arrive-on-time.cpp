class Solution {
public:
  bool solve(vector<int>& dist, int k, double hour) {
    double st = 0;
    for(int i = 0; i<dist.size()-1; i++) {
        st += (dist[i] + k - 1) / k;
        if(st >= hour) {
            return false;
        }
    }
   st += (double)dist.back()/k;
    return st <= hour;
  }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int maxi = 0;
        for(auto i: dist) {
            maxi = max(maxi, i);
        }
        int l = 1;
        int h = 10000000;
        int ans = -1;
        while(l<=h) {
            int mid = (l+(h-l)/2);
            if(solve(dist, mid, hour)) {
                ans = mid;
                h = mid-1;
            } else {
                l = mid+1;
            }
        }
        return ans;
     }
};