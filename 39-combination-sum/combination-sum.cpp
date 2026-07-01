class Solution {
public:
set<vector<int>> st;
  void comb(vector<int>& arr,int i, int tar, vector<vector<int>> &ans, vector<int> &cb) {
     if(tar < 0 || i == arr.size()) return;

    if(tar == 0) {
        if(st.find(cb) == st.end())
        ans.push_back(cb);
        st.insert(cb);
       return; 
    }
   
    cb.push_back(arr[i]);
    comb(arr, i+1, tar-arr[i], ans, cb);
   
    comb(arr, i, tar-arr[i],  ans, cb);
     cb.pop_back();
    comb(arr, i+1, tar,  ans, cb);
  }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
     vector<vector<int>> ans;
     vector<int> cb;
     comb(arr, 0, target, ans, cb);
     return ans;   
    }
};