class Solution {
public:
    double champagneTower(int poured, int query_row, int query_col) {
        vector<vector<double>> t(101, vector<double>(101,0.0));
        t[0][0] = (double)poured;
        for(int r = 0; r<=query_row; r++) {
            for(int c = 0; c<=r; c++) {
                double extra = (t[r][c]-1.0)/2.0;
                
                if(extra > 0){
                    t[r+1][c] += extra;
                t[r+1][c+1] += extra;
                }
            }
        }
        return min(1.0, t[query_row][query_col]);
    }
};