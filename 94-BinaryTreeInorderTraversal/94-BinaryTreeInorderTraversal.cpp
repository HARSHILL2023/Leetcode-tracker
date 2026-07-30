// Last updated: 7/30/2026, 10:07:43 AM
class Solution {
public:
    void traverse(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        
        traverse(root->left, result);
        result.push_back(root->val);
        traverse(root->right, result);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};