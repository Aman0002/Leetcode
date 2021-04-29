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
    TreeNode* increasingBST(TreeNode* root) {
        
        //Base Case
        if (root==NULL)
            return root;
        
        //Recursive Calls
        TreeNode * left_BST = increasingBST(root->left);
        TreeNode * right_BST = increasingBST(root->right);
        
        root->left = left_BST;
        root->right = right_BST;
        
        if (left_BST == NULL)
            return root;
        
        TreeNode * temp = left_BST;
        while (temp->right)
        {
            temp = temp->right;
        }
        temp->right = root;
        root->left = NULL;
        return left_BST;
        
    }
};