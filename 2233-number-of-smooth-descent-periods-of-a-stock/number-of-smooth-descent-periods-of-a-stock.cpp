class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long cnt = 0;
        int i = 0;
         for(int j = 0; j<prices.size(); j++) {
            if(j > 0 && prices[j-1] - prices[j] != 1) {
                i = j;
            }
                cnt+=(j-i+1);
        }
       return cnt;
    }
};