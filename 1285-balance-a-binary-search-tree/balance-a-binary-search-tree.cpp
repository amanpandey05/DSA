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
  void in(TreeNode* root, vector<int>& ans){
      if(root == NULL) return;
      in(root->left, ans);
      ans.push_back(root->val);
      in(root->right, ans);
  }
   TreeNode* inTobst(int s, int e, vector<int> ans) {
  if(s>e) return NULL;
    int mid = (s+e)/2;
     TreeNode* temp = new  TreeNode(ans[mid]);
     temp->left = inTobst(s, mid-1, ans);
     temp->right = inTobst(mid+1, e, ans);
     return temp;
   }
    TreeNode* balanceBST(TreeNode* root) {
       vector<int> ans;
       in(root, ans);
       return inTobst(0, ans.size()-1, ans); 
    }
};