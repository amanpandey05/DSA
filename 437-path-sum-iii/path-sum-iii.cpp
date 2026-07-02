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
void ok(TreeNode* root, int& cnt, vector<int> &temp, int &tar) {
if(root == NULL) return;

temp.push_back(root->val);

ok(root->left, cnt, temp, tar);
ok(root->right, cnt, temp, tar);
int n = temp.size();
long long sum = 0;
for(int i = n-1; i>=0; i--) {
sum += temp[i];
if(sum == tar) cnt++;
}
temp.pop_back();
}
    int pathSum(TreeNode* root, int targetSum) {
       vector<int> temp;
        int cnt = 0;
        ok(root, cnt, temp, targetSum);
        return cnt;  
    }
};