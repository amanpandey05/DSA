class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> t;
        for(auto i: nums) {
            t.push_back(abs(i));
        }
        long long ans = 0;
        sort(t.begin(), t.end(), greater<int>());
        int n = t.size();
        if(n%2 == 0) {
            long long s1 = 0, s2 = 0;
            for(int i = 0; i<n/2; i++) {
                s1 += (t[i]*t[i]);;
            }
            for(int i = n/2; i<n; i++) {
                s2 += (t[i]*t[i]);
            }
            ans += (s1-s2);
        } else {
            long long s1 = 0, s2 = 0;
            for(int i = 0; i<n/2+1; i++) {
                s1 += (t[i]*t[i]);;
            }
            for(int i = n/2+1; i<n; i++) {
                s2 +=  (t[i]*t[i]);;
            }
            ans += (s1-s2);
        }
        return ans;
    }
};