class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
       
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end(), [](int a, int b){
            return abs(a) < abs(b);
        });
        for(int i = 0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        for(int i = 0; i<arr.size(); i++) {
            if(mp[arr[i]] == 0) continue;
            if(mp[2*arr[i]] == 0) return false;
        
        mp[arr[i]]--;
        mp[2*arr[i]]--;
        }
        return true;
    }
};