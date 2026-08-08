class Solution {
public:
void dfs(int r, int c, vector<vector<int>> &vis, vector<vector<char>>& grid) {
    vis[r][c] = 1;
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    q.push({r,c});
 int dr[] = {-1, 1, 0, 0};
 int dc[] = {0, 0, 1, -1};
  while(!q.empty()) {
       int r = q.front().first;
       int c = q.front().second;
       q.pop();

     for(int i = 0; i<4; i++) {
            int nr = r+dr[i];
            int mr = c+dc[i];
            if(nr>=0 && nr < n && mr>=0 && mr<m && grid[nr][mr] == '1' && !vis[nr][mr]){
                vis[nr][mr] = 1;
                q.push({nr,mr});
        }
    }
    }
}

    int numIslands(vector<vector<char>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       int cnt = 0;
        vector<vector<int>> vis(n , vector<int>(m,0));
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(!vis[i][j] && grid[i][j] == '1') {
                      cnt++;
                    dfs(i, j, vis, grid);
                  
                }
            }
        }
        return cnt;
    }
};