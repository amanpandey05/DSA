class Solution {
public:
  bool check(int k, vector<int> &nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> f(n+1, 0);
    for(int i = 0; i<k; i++){
        int a = queries[i][0];
        int b = queries[i][1];
        int  c = queries[i][2];

        f[a] += c;

        if((b+1) < n) {
            f[b+1] -= c;
        }
    }
        int curr = 0;
        for(int i = 0; i<n; i++) {
            curr += f[i];
            if(curr < nums[i]){
                return false;
            }
        }
        return true;
  }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    int m = queries.size();
    int l = 0;
    int r = m;
    int ans = -1;
    while(l<=r) {
        int mid = l+(r-l)/2;
        if(check(mid,nums,queries)){
            ans = mid;
           r = mid-1;
        } else {
            l = mid+1;
        }
    }
    return ans;
    }
};