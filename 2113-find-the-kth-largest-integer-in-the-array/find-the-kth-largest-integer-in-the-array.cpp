class Solution {
public:
static bool ok(string &a, string &b) {
    if(a.size() != b.size()) {
        return a.size() < b.size();
    }
    return a < b;
}
    string kthLargestNumber(vector<string>& nums, int k) {
      int n = nums.size(); 
      sort(nums.begin(), nums.end(), ok);
      return nums[nums.size()-k];
    }
};