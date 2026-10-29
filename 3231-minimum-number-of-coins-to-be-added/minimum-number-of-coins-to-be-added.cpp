class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(), coins.end());
        int maxi = 0;
        vector<int> t = coins;
        int i = 0;
        while(maxi < target) {
           if(i < coins.size() && coins[i] <= maxi+1) {
            maxi += coins[i];
            i++;
           } else {
            t.push_back(maxi+1);
            maxi = maxi*2+1;
           }
           
        }
        int ans = t.size()-coins.size();
        return ans;
    }
};