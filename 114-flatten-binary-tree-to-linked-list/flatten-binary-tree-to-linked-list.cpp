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
    void flatten(TreeNode* root) {
        if(root == NULL) return;
      vector<int> ans;
      pre(root, ans);
      TreeNode* curr = root;
      int n = ans.size();
      for(int i = 1; i<n; i++) {
        TreeNode* t = new TreeNode(ans[i]);
        curr->left = NULL;
        curr->right = t;
        curr = t;
      }
      curr->left = NULL;;
    }
};