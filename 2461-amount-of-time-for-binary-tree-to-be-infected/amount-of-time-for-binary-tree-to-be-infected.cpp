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
TreeNode* rel(TreeNode* root, int &tar, map<TreeNode*, TreeNode*> &mp) {
    TreeNode* res = NULL;
    if(root == NULL) return res;
    queue<TreeNode*> q;
    q.push(root);
   while(!q.empty()) {
    TreeNode* f = q.front();
    q.pop();
    if(f->val == tar) {
        res = f;
    }
    if(f->left) {
        mp[f->left] = f;
        q.push(f->left);
    }
    if(f->right) {
        mp[f->right] = f;
        q.push(f->right);
    }
   
   }
   return res;
}
int time(TreeNode* root, map<TreeNode*, TreeNode*> &mp) {
    int ans = 0;
   
   map<TreeNode*, bool> seen;
    queue<TreeNode*> q;
    q.push(root);
    seen[root] = true;
    while(!q.empty()) {
         bool flag = false;
        int n = q.size();
        for(int i = 0; i<n; i++) {
            TreeNode* f = q.front();
            q.pop();
            if(f->left && !seen[f->left]) {
                flag = true;
                q.push(f->left);
                seen[f->left] = true;
            }
            if(f->right && !seen[f->right]) {
                flag = true;
                q.push(f->right);
                seen[f->right] = true;
            }
            if(mp.count(f) && !seen[mp[f]]) {
                flag = true;
                q.push(mp[f]);
                seen[mp[f]] = true;
            }
        }
        if(flag) ans++;
    }
    return ans;  
}
    int amountOfTime(TreeNode* root, int start) {
       map<TreeNode*, TreeNode*> mp;
       TreeNode* node = rel(root, start, mp);
       int res = time(node, mp);
       return res; 
    }
};