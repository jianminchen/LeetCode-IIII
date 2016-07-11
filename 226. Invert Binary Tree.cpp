/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* p = root;
        helper(p);
        return root;
    }
    
    void helper(TreeNode* root)
    {
        if (root == NULL)
            return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        helper(root->left);
        helper(root->right);
    }
};
