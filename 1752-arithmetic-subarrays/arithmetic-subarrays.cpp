class Solution {
public:
bool check(vector<int> &arr) {
    int i = 1;
    bool f = true;
    while(i<arr.size()-1) {
        if((arr[i]-arr[i-1]) != (arr[i+1]-arr[i])) {
            f = false;
            break;
        }
        i++;
    }
    if(f) return true;
    return false;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    int i = 0;
    int j = 0;
     vector<bool> ans; 
    bool f = true;
     while(i<l.size() || j<r.size()) {
        vector<int> arr;
        for(int x = l[i]; x <= r[j]; x++) {
            
            arr.push_back(nums[x]);
        }
        sort(arr.begin(), arr.end());
        if(check(arr)) ans.push_back(true);
        else ans.push_back(false);
        i++, j++;
     }
     return ans; 
    }
};