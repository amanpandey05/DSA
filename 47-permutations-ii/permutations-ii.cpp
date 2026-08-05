class Solution {
public:
void getsper(int idx,  vector<int>& nums , vector<vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> found;
        
         for(int i = idx; i<nums.size(); i++){
            if(found.count(nums[i])){
             continue;
            }
               found.insert(nums[i]);
            swap(nums[idx], nums[i]);
            getsper(idx+1, nums, ans);
              swap(nums[idx], nums[i]);
         }


    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
            getsper(0, nums, ans);   
            return ans; 
    }
};