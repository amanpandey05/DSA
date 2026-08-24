class Solution {
public:
    long long numberOfWeeks(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        long long sum = 0;
        for(int i = 0; i<arr.size()-1; i++){
            sum += arr[i];
        }
        if(sum < arr[arr.size()-1]){
            sum = 2*sum+1;
        } else {
            sum += arr[arr.size()-1];
        }
        return sum;
    }
};