class Solution {
public:
int getds(int num) {
    int s = 0;
    while(num > 0) {
        s += (num%10) ;
            num/=10;
        
    }
    return s;
}
    int minSwaps(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> p = nums;
        
        auto lmd = [&](int n1,int n2) {
            int ds1 = getds(n1);
            int ds2 = getds(n2);
            if(ds1 != ds2) {
                return ds1 < ds2;
            }
        
                return n1 < n2;
            
        };

        sort(p.begin(), p.end(), lmd);

        for(int i = 0; i<nums.size(); i++) {
            mp[nums[i]] = i;
        }
        int cnt = 0;
       for(int i = 0; i<nums.size(); i++) {
        if(p[i] == nums[i]) {continue; }
        int j = mp[p[i]];
        swap(nums[i], nums[j]);
        mp[nums[j]] = j;
        mp[nums[i]] = i;
          cnt++;
        
       }
       return cnt;
    }
};