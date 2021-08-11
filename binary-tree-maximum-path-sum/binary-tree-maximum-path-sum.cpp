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
    int res = INT_MIN;
    int helper (TreeNode *root , int &res)
    {
        if (!root) return 0 ;
        
        int l = helper (root->left  , res);
        int r = helper (root->right , res);
        
        //if curr root is in the path
        int temp1 = max (root->val , max(l , r) + root->val);
        
        //if curr root is the root of that path
        int temp2 = max (temp1 , l + r + root->val);
        
        //if curr root is not in the path
        res =  max (res, temp2 );
        
        return temp1;
    }
    int maxPathSum(TreeNode* root) {
        
        int res = INT_MIN;
        
        helper (root , res);
        
        return res;
       
           
    }
};