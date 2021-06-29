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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* value1, TreeNode* value2) {
        
        int val1 = value1->val;
        int val2 = value2->val;
            
        if (!root) return NULL;
            
        if (root->val == val1 || root->val == val2) return root;
            
        TreeNode *L = lowestCommonAncestor(root->left, value1, value2);
            
        TreeNode *R = lowestCommonAncestor(root->right, value1, value2);
            
        if (L && R) return root; // If val1, val2 are on both sides 
            
        return L ? L : R;
        
    }
};