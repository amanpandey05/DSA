class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
      vector<int> e;
      vector<int> o;
    for(int i = 0; i<nums.size(); i++) {
        if(i%2 == 0) {
            e.push_back(nums[i]);
        } else {
            o.push_back(nums[i]);
        }
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end(), greater<int>());
    vector<int> ans;
    int i = 0, j = 0;
    while(i<e.size() || j<o.size()){
        if(i<e.size()) {
            ans.push_back(e[i]);
            i++;
        }
        if(j<o.size()){
            ans.push_back(o[j]);
            j++;
        }

    }
      return ans; 
    }
};