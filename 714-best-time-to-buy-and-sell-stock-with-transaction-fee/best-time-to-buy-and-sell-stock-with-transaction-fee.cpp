class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int b = -prices[0];
        int sell = 0;
        int n = prices.size();
        for(int i = 1; i < n; i++){
        
            b = max(b, sell-prices[i]);
            sell = max(sell, prices[i]+b-fee);
            
        } 
        return sell;
    }
};