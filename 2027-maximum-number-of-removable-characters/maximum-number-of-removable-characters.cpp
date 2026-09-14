class Solution {
public:
bool solve(string s, string p,  vector<int>& arr, int k) {
    int n = s.size();
    int i = 0;
    for(int j = 0; j<n; j++) {
        if(arr[j] <= k) continue;
        if(s[j] == p[i]){
            i++;
        }
        if(i == p.size()) return true;  
    }
    return false;
} 
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int n = s.size();
        int l = 0;
        int h = removable.size()-1;
        int cnt = 0;
        vector<int> arr(n, n+1);
        for(int i = 0; i<removable.size(); i++) {
            arr[removable[i]] = i;
        }
        while(l<=h) {
            int mid = l + (h-l)/2;
            if(solve(s,p,arr,mid)) {
                cnt = mid+1;;
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        return cnt;
    }
};