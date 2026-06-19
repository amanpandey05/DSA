class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int maxi  = 0;
    int n = gain.size();
    //  vector<int> ans;
    //  ans.push_back(0);
    int psum = 0;
    for(int i = 0; i<n; i++) {
         psum += gain[i];
         maxi = max(maxi, psum);
    }
    
    // for(int i = 2; i<ans.size(); i++) {
    //     psum += ans[i];
    //     maxi = max(maxi, psum);
    // }
    return maxi;
    }
};