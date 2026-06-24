class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
    int cnt = 0; 
    for(int i = 0; i<nums.size(); i++) {
        long long sum = 0;
        for(int j = i; j<nums.size(); j++) {
            
            sum += nums[j];
            if(sum%10 != x) continue;
            long long first = sum;
            while(first >= 10) first/=10;
            if(first == x) cnt++;
        }
    }  
    return cnt;
    }
};