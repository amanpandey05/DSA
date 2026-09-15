class Solution {
public:
int findMax(vector<int> &piles){
    int maxi = INT_MIN;
    int n = piles.size();
    for(int i = 0; i<n; i++){
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

 bool calculateTotalHrs(vector<int> &piles, int mid, int h){
      long long totalH = 0;
    int n = piles.size();
    for(int i = 0; i<n; i++){
      totalH += ceil((double)piles[i]/(double)mid);
    }
    return totalH <= h;
 }
    int minEatingSpeed(vector<int>& piles, int h) {
      int low = 1, high= findMax(piles);
      int ans = 0;
      while(low <= high){
        int mid = low + (high - low) / 2;
        // int totalH = calculateTotalHrs(piles, mid);
        if(calculateTotalHrs(piles, mid, h)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
      }

      return ans;  
    }
};