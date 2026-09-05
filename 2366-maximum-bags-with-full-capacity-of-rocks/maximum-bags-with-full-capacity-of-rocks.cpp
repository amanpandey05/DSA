class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> need;

        for (int i = 0; i < capacity.size(); i++) {
            need.push_back(capacity[i] - rocks[i]);
        }

        sort(need.begin(), need.end());

        int cnt = 0;

        for (int x : need) {
            if (x > additionalRocks)
                break;

            additionalRocks -= x;
            cnt++;
        }

        return cnt;
    }
};