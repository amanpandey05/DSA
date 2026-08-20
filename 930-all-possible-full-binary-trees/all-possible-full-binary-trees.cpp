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
vector<TreeNode*> solve(int n) {
    if(n == 0) return {NULL};
    if(n%2 == 0) return {};
    if(n == 1) {
            TreeNode* root = new TreeNode(0);
            return {root};
        }
    vector<TreeNode*> res;
    for(int i = 1; i<n; i+=2) {
        int lNode = i;
        int rNode = n-i-1;
        vector<TreeNode*> l = solve(lNode);
       vector<TreeNode*> r = solve(rNode);
        for(auto x: l) {
            for(auto y: r) {
                TreeNode* root = new TreeNode(0);
                root->left = x;
                root->right = y;
                res.push_back(root);
            }
        }
    }
    return res;
}
    vector<TreeNode*> allPossibleFBT(int n) {
        
        return solve(n);
    }
};