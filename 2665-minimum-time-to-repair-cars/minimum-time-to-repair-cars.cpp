class Solution {
public:
bool repair(vector<int>& nums, long long mid, int k) {
    long long st = 0;
    for(auto i: nums) {
        st += sqrt(mid/i);
       if(st >= k) return true;
    }
    return false;
}
    long long repairCars(vector<int>& ranks, int cars) {
       long long maxi = 0;
       for(auto i: ranks) {
        maxi = max(maxi, 1LL*i);

       } 
       long long ans = 0;
       long long l = 0;
       long long h = 1LL* cars*maxi*cars;
       while(l<=h) {
        long long mid = l + (h-l)/2;
        if(repair(ranks, mid, cars)) {
            ans = mid;
            h = mid-1;
           
        } else {
            l = mid+1;
        }
       }
       return ans;
    }
};