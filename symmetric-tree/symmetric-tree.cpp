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
    bool is_mirror(TreeNode *A , TreeNode *B)
    {
        if (!A && !B) return true;
        if (!A || !B) return false;
        if (A->val !=B->val) return false;
        
        return is_mirror(A->left , B->right) && is_mirror(A->right,B->left);
    }
    bool isSymmetric(TreeNode* root) {
        
        return is_mirror(root->left,root->right);
    }
};