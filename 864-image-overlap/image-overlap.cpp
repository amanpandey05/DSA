class Solution {
public:
int cntOver(vector<vector<int>>& img1, vector<vector<int>>& img2, int r, int c) {
    int n = img1.size();
    int cnt = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            int b_i = i+r;
            int b_j = j+c;
            if(b_i < 0 || b_i >= n || b_j < 0 || b_j >= n) continue;
            if(img1[i][j] == 1 &&  img2[b_i][b_j] == 1) {
                cnt++;
            }
        }
    }
    return cnt;
}
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int maxi = 0;
        for(int c= -n+1; c<n; c++) {
            for(int r = -n+1; r<n; r++) {
                int cnt = cntOver(img1, img2, c, r);
                maxi = max(maxi, cnt);
            }
            
        }
        return maxi;
         
    }
};