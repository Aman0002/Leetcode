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
    int get_height (TreeNode *root)
    {
        if (!root)
            return 0 ;
        return 1 + max(get_height(root->left), get_height(root->right));
    }
    
    void helper (TreeNode *root , unordered_map<int,vector<int>> &m , int level )
    {
        if (!root)
            return ;
        
        m[level].push_back(root->val);
        
        helper (root->left , m , level+1);
        
        helper (root->right , m , level +1);
        
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        if (!root)
            return {};
        
        unordered_map<int,vector<int>> m ;
        
        vector<vector<int>> ans;
        
        int height = get_height(root);
        
        helper(root,m,1);
        
        for (int i = height ; i>=1 ; i--)
            ans.push_back(m[i]);
    
        
        return ans;
    }
};