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
   pair<TreeNode* , int> solve(TreeNode* root) {
    int d = 0;
    if(root == NULL) {
        return {root, 0};
    }
     auto l = solve(root->left);
        auto r = solve(root->right);

       d = 1 + max(l.second, r.second);

        if(l.second == r.second) return {root, d};
        else if(l.second > r.second) return {l.first, d};
        else return {r.first, d};
   }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root == NULL) return root;

       return solve(root).first;

        
    }
};