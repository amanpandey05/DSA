class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int cnt = 0;
        int i= 0, j = 0;
        while(i<arr1.size() && j<arr2.size()) {
            if(arr1[i] <= arr2[j]) {
                cnt++;
                i++, j++;
            } else {
                j++;
            }
        }
        return cnt;
    }
};