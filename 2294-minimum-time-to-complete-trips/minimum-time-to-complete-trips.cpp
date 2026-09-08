class Solution {
public:
bool solve(vector<int>& time, int totalTrips, long long k) {
    int st = 0;
    for(auto i: time) {
        st += (k/i);
        if(st >= totalTrips) {
            return true;
        }
    }
    return false;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long ans = 0;
       long long maxi = LLONG_MIN;
      long long mini = LLONG_MAX;
      for(auto i: time) {
        mini = min(1LL*i, mini);
      }
      maxi = 1LL*mini*totalTrips;
        long long l = 1;
        long long h = maxi;
        while(l<=h) {
            long long mid = (l+(h-l)/2);
            if(solve(time, totalTrips, mid)) {
                ans = mid;
                h = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return ans;
    }
};