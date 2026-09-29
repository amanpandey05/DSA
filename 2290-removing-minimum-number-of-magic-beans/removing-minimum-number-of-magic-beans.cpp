class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
         long long maxi = 0;
        long long cnt = 0;

        for (int i = 0; i < beans.size(); i++) {
            cnt += beans[i];
            maxi = max(maxi,1LL* beans[i]*((int)beans.size()-i));
        }

       return cnt-maxi;
    }
};