class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int i = 0;
        int j = piles.size()-1;
        if(piles.size() < 3) return -1;
        int sum = 0;
        while(i<j) {
       sum = sum + piles[j-1];
       j-=2;
       i++; 
        }
        return sum;
    }
};