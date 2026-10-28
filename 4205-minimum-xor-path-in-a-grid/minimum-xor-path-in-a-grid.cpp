class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
       vector<vector<bitset<1024>>> dp(n, vector<bitset<1024>>(m));
       dp[0][0][grid[0][0]] = 1;
       for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(i == 0 && j == 0) continue;
            bitset<1024> lft;
            bitset<1024> u;
            bitset<1024> comb;
            if(i > 0) {
                u = dp[i-1][j];

            }
            if(j > 0) {

                lft = dp[i][j-1];
            }

            comb = u | lft;

            for(int v = 0; v<1024; v++) {
                if(comb[v]) {
                    int xv = grid[i][j] ^ v;
                    dp[i][j][xv] = 1;
                }
                
            }
        }
       }
       for(int xv = 0; xv<1024; xv++) {
        if(dp[n-1][m-1][xv] == 1) {
            return xv;
        }
       }
       return -1;
    }
};