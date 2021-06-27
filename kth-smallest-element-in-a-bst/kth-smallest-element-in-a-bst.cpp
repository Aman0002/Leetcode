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
    void print_inorder(TreeNode *root , vector<int>&inorder)
    {
        if (!root)
            return ;
        //left root right
        print_inorder (root->left,inorder);
        inorder.push_back(root->val);
        print_inorder (root->right,inorder);
    }
    int kthSmallest(TreeNode* root, int k) {
     
        vector<int> inorder;
        print_inorder(root,inorder);
        
        return inorder[k-1];
    }
};