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
    struct help
    {
      bool is_BST;
      int height;
    };
    
    help balanced(TreeNode * root)
    {
        
        help temp ;
        if (!root)
        {
            temp.height = 0;
            temp.is_BST = true;
            return temp;
        }
        help l = balanced(root->left);
        help r = balanced(root->right);
        temp.height = 1 + max(l.height, r.height);
        temp.is_BST  = (l.is_BST && r.is_BST) && (abs(l.height-r.height)<=1);
        
        return temp;
    }
    bool isBalanced(TreeNode* root) {
        
        
        help temp = balanced(root);
        
        return temp.is_BST;
        
    }
};