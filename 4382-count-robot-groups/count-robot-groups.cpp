class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int cnt = 1;
        int n = position.size();
       int r = n-1;
        for(int i = n - 2; i>=0; i--) {
            long long g = 1LL * position[i+1] - position[i];
            if(g <= distance || speed[i] > speed[r]) {
                continue;
            } else {
                cnt++;
                r = i;
            }
        }
       
        return cnt;
    }
};