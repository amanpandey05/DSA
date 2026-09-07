class Solution {
public:

    bool canDis(int n, int k, vector<int>& nums) {

        long long stores = 0;

        for (auto x : nums) {
            stores += (x + k - 1) / k;

            if (stores > n)
                return false;
        }

        return true;
    }

    int minimizedMaximum(int n, vector<int>& nums) {

        int maxi = 0;
        
        for (auto x : nums) {
            maxi = max(maxi, x);
        }
            int ans = maxi;
        int l = 1, h = maxi;
        while(l<=h) {
            int mid = (l+h)/2;
            if(canDis(n, mid, nums)) {ans =  mid;
            h = mid-1;}
           
            else {l = mid+1;}
        }

        return ans;
    }
};
