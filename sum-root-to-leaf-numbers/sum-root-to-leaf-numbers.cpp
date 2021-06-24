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
    
    void helper(TreeNode *root , int pre , int &ans)
    {
        if (root==NULL)
            return ;
        
        pre = pre*10 + root->val;
        if (root->left == NULL && root->right== NULL)
        {
            ans+=pre;
            return ;
        }
        
        
        helper(root->left,pre,ans);
        
        helper(root->right,pre,ans);
    }
    int sumNumbers(TreeNode* root) {
        
        if (!root)
            return 0;
        int ans = 0;
        
        helper(root,0,ans);
        
        return ans;
    }
};