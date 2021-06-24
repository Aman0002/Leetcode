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
    void helper (TreeNode * root, int tar , vector<vector<int>> &ans , vector<int>temp)
    {
        if (root==NULL)
            return ;
            
        if (root->left==NULL && root->right==NULL && tar==root->val)
        {
            temp.push_back(root->val);
            ans.push_back(temp);
            return ;
        }
        temp.push_back(root->val);
        
        helper(root->left, tar- root->val, ans , temp);
        helper(root->right, tar- root->val, ans , temp);
        return ;
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int tar) {
        
        vector<vector<int>> ans ;
        vector<int> temp;
        
        helper(root,tar,ans,temp);
        
        return ans;
    }
};