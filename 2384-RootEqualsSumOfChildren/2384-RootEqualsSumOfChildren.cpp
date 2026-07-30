// Last updated: 7/30/2026, 10:05:47 AM
class Solution {
public:
    bool checkTree(TreeNode* root) {

        int left = root->left->val;

        int right = root->right->val;

        return root->val == left + right;
    }
};