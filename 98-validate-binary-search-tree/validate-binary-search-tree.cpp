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
  bool valid(TreeNode* root, long long i, long long j) {
    if(root==NULL) return true;
    if(root->val <= i || root->val >= j) return false;
    return valid(root->left, i, root->val) && valid(root->right, root->val, j);
  }
    bool isValidBST(TreeNode* root) {
      return valid(root,LLONG_MIN, LLONG_MAX);
    }
};