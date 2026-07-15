class Solution {
public:
void solve(int i,int n, int k, vector<int> &t,  vector<vector<int>> &res) {
if(k==0) {
    res.push_back(t);
    return;
}
if (i > n) return;
t.push_back(i);
solve(i+1,n, k-1, t, res);
t.pop_back();
solve(i+1,n, k, t, res);
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        int i = 1;
        vector<int>  t;
         solve(i,n, k, t, res); 
         return res;
    }
};