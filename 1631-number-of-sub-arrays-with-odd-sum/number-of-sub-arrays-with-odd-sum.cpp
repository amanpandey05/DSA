class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       long long cnt = 0;
       long long o = 0;
       long long sum = 0;
       long long e = 1;
       const long long MOD = 1e9 + 7;
       for(int i = 0; i<arr.size(); i++) {
        sum += arr[i];
        if(sum % 2 != 0) {cnt += e;
        o++;}
        else {
           cnt += o;
           e++;
        }
        cnt %= MOD;
       } 
       
       return cnt;
    }
};