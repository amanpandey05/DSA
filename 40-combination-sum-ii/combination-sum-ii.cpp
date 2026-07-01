class Solution {
public:

 void comb(vector<int>& arr,int i, int tar, vector<vector<int>> &ans, vector<int> &cb) {
    if(tar == 0) {
        ans.push_back(cb);
       return; 
    }
   
   if(tar < 0 ) return;
   for(int j = i; j<arr.size(); j++) {
    if(j > i && arr[j] == arr[j-1]) continue;
    cb.push_back(arr[j]);
    comb(arr, j+1, tar-arr[j], ans, cb);
     cb.pop_back();
   }
  }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
       vector<vector<int>> ans;
       vector<int> cb;
       comb(arr, 0, target, ans, cb);  
       return ans;
    }
};