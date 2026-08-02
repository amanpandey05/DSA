class Solution {
public:
    bool stoneGame(vector<int>& piles) {
      int n = piles.size();
       int suma = 0;
       int sumb = 0;
       int i = 0, j = n-1;
       while(i<=j) {
        if(piles[i] >= piles[j]) {
            suma += piles[i];
            sumb += piles[j];
        
        } else {
            suma+=piles[j];
            sumb+=piles[i];
        }
        i++, j--;
       }
       if(suma > sumb) return true;
       return false;

    }
};