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
    bool isBalanced(TreeNode* root) {
    //    return dh(root) != -1;
    if(dh(root) != -1) return true;
    return false; 
    }
    int dh(TreeNode* root){
        if(root == NULL) return 0;
        int lh = dh(root->left);
        if(lh == -1) return -1;

        int rh = dh(root->right);
        if(rh == -1) return -1;
        if(abs(lh - rh) > 1) return -1;
        return max(lh, rh) + 1;
    }
};