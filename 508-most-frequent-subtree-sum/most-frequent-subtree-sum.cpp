/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int in(TreeNode* root, unordered_map<int, int>& mp) {
        int sum = 0;
        if(root == NULL) return 0;
        int l = in(root->left, mp);
        int r = in(root->right, mp);
       sum = root->val + l + r;
        mp[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        unordered_map<int, int> mp;
        
        in(root, mp);
        int maxi = 0;
        for(auto x: mp) {
      maxi = max(maxi, x.second);
        } 

        for(auto x: mp) {
            if(x.second == maxi) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};