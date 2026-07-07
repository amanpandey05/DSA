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
void pre(TreeNode* root, vector<int> &ans) {
    if(root == NULL) return;
    ans.push_back(root->val);
    pre(root->left, ans);
    pre(root->right, ans);
}
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> ans;
        pre(root, ans);
        sort(ans.begin(), ans.end());
        int res = -1;
        for(int i = 0; i<ans.size(); i++) {
           if(ans[i] != ans[0]) {
            res = ans[i];
            break;
           }
        }
        return res;
    }
};