class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxi = 0;
        int i = 0;
        while(i<seats.size()) {
          if(seats[i] == 1) {
            int j = i+1;
            while(j < seats.size() && seats[j] == 0) j++;
            if(j < seats.size() && seats[j] == 1) {
                maxi = max(maxi, (j-i)/2);
            } else if(j == seats.size()) {
                maxi = max(maxi, j-i-1);
            }
            i = j;
          } else {
            int j = i+1;
            while(j<seats.size() && seats[j] == 0) j++;
            if(j < seats.size() && seats[j] == 1) {
                maxi = max(maxi, j-i);
                i = j;
            } else {
                maxi = max(maxi, j-i);
                break;
            }
          }  
        }
        return maxi;
    }
};