class Solution {
public:
vector<vector<int>> res;
void solve(int i,int sum, int n, int k, vector<int> &t) {
    if(sum == n && k == 0) {
        res.push_back(t);
        return;
    }
    if(k < 0 || i > 9) return;
    t.push_back(i);
    solve(i+1,sum+i, n, k-1, t);

    t.pop_back();
    solve(i+1,sum, n, k, t);
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> t;
        int sum = 0;
        solve(1,sum, n, k, t);
        return res;
    }
};