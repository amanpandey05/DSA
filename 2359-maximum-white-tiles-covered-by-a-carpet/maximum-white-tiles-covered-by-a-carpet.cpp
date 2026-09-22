class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int k) {
        sort(tiles.begin(), tiles.end());
        int diff = 0;
        int maxi = 0;
        int i = 0;
        if(tiles.size() == 1) {
            return min(k, tiles[0][1] - tiles[0][0] + 1);
        }
        for(int j = 0; j<tiles.size(); j++) {
            

             while(j < tiles.size() && tiles[j][1] - tiles[i][0] + 1 <= k) {
                diff += (tiles[j][1] - tiles[j][0] + 1);
               j++;
            }

           if(j < tiles.size()) {
                int c = diff;
                c += max(0, tiles[i][0] + k - tiles[j][0]);
                maxi = max(maxi, c);
            }
            else {
                maxi = max(maxi, diff);
            }
            diff -= tiles[i][1] - tiles[i][0] + 1;
            i++;

            j--;
            if(maxi >= k) {
                return k;
            } 
           
        }

        return maxi;
    }
};