class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int mini = INT_MAX;
        int pre = 0;
        int suff = 0;
        unordered_map<int, int> p;
        unordered_map<int, int> s;
        for(int i = 0; i<nums.size(); i++) {
            pre += nums[i];
            p[pre] = i;
        }
        for(int i = nums.size()-1; i>=0; i--) {
            suff += nums[i];
            s[suff] = (nums.size()-i);
        }
       if(p.count(x)) {
            mini = min(mini, p[x]+1);
        }

        if(s.count(x)) {
            mini = min(mini, s[x]);
        }
        
        int sum = 0;
        for(int i = 0; i<nums.size(); i++) {
          sum += nums[i];
           if(sum > x) break;
          int remove = x-sum;
          if(s.count(remove)) {
                if(i + s[remove] < nums.size()) {
                    mini = min(mini, i+s[remove]+1);
                }
            }
        }
        sum = 0;
        for(int i = nums.size()-1; i>=0; i--) {
          sum += nums[i];
           if(sum > x) break;
          int remove = x-sum;
          if(p.count(remove)) {
                if(p[remove] < i) {
                    mini = min(mini, (int)nums.size()-i+p[remove]+1);
                }
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};