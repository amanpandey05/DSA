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
vector<TreeNode*> solve(int s, int e) {
    if(s>e) return {NULL};
    if(s == e) {
        TreeNode* root = new TreeNode(s);
        return {root};
    }
    vector<TreeNode*> res;
    for(int i = s; i<=e; i++) {
        vector<TreeNode*> l = solve(s, i-1);
       vector<TreeNode*> r = solve(i+1, e);
        for(auto x: l) {
            for(auto y: r) {
                TreeNode* root = new TreeNode(i);
                root->left = x;
                root->right = y;
                res.push_back(root);
            }
        }
    }
    return res;
}
    vector<TreeNode*> generateTrees(int n) {
        int i = 1;
        return solve(i, n);
    }
};