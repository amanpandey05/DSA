class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(), changed.end(), [](int a, int b) {
            return abs(a) < abs(b); 
        });
        if(changed.size() % 2 != 0) {
            return {};
        }
        unordered_map<int, int> mp;
        for(auto x: changed) {
            mp[x]++;
        }
        if(mp[0] % 2 != 0) return {};
        vector<int> ans;
        for(int i = 0; i<changed.size(); i++) {
            if(mp[changed[i]] == 0) continue;
            if(mp[2*changed[i]] == 0) break;

            if(mp[2*changed[i]] > 0) {
                ans.push_back(changed[i]);
                mp[2*changed[i]]--;
                mp[changed[i]]--;
            }
        }
        if(ans.size() == changed.size()/2) {
            return ans;
        }
        return {};
    }
};