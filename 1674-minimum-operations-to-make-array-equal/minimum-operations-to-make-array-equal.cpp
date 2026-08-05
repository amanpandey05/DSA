class Solution {
public:
    int minOperations(int n) {
       vector<int> arr;
       for(int i = 0; i<n; i++) {
        int el = (2*i)+1;
        arr.push_back(el);
       } 
      int ans = 0;
      for(int i = 0; i<n/2; i++) {
        ans += n-arr[i];
      }
      return ans;
    }
};