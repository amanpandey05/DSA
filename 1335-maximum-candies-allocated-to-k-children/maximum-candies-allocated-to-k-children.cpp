class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int maxi = 0;
        for(auto i: candies) {
            maxi = max(maxi, i);
        }
        
        int ans = 0;
        int l = 1;
        int h = maxi;
        while(l<=h) {
            int mid = l + (h-l)/2;
            long long sum = 0;
          for(auto i: candies) {
          sum += i/mid;
          }
            if(sum >= k) {
                ans = mid;
                
                 l = mid+1; 
            } else {
              h = mid-1;
            }
        }
        return ans;
    }
};