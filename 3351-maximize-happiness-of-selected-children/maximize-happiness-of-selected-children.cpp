class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        vector<int> arr;
        sort(happiness.begin(), happiness.end());
        int n = happiness.size();
        for(int i = n-1; i>=(n-k); i--) {
            arr.push_back(happiness[i]);
        }
       long long sum = 0;
        for(int i = 0; i<arr.size(); i++) {
            arr[i] = arr[i]-i;
            if(arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
};