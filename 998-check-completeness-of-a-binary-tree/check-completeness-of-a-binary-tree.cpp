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
int Nodecnt(TreeNode* root) {
    if(root == NULL) return 0;
    int ans = 1 + Nodecnt(root->left) + Nodecnt(root->right);
    return ans;

}
bool iscbt(TreeNode* root, int i, int cnt) {
    if(root == NULL) return true;
    if(i >= cnt) {
        return false;
    } else {
        bool left = iscbt(root->left, 2*i+1, cnt);
        bool right = iscbt(root->right, 2*i+2, cnt);
        return (left && right);

        }
    }

    bool isCompleteTree(TreeNode* root) {
       int i = 0;
       int tcnt = Nodecnt(root);
       if(iscbt(root, i, tcnt)) return true;
       return false; 
    }
};